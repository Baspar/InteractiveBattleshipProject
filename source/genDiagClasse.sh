#!/bin/bash
rm -rf uml/Classes.uml Classes.png
echo "@startuml" >> uml/Classes.uml
echo "!include skin.uml" >> uml/Classes.uml
echo "!include liaisons.uml" >> uml/Classes.uml

nbFichier=$(ls src/*.hpp | wc -l)
indic=0

echo "Analyse des fichiers .hpp en cours"
for i in $(ls src/*.hpp)
do
    indic=$(($indic + 1)) # Numero du fichier traité
    name=$(basename -s .hpp $i) # Nom du fichier sans extenstion

    echo "[$indic/$nbFichier]  Classe $name" # Debug

    debut=0
    constr=""
    meth=""
    getter=""
    setter=""
    attribut=""
    cpp=$(cat "src/$name.cpp" | grep "$name::" | sed 's/ //g')

    #On detecte les Methode/Attributs
    while read line
    do
        if [ $debut -eq 1 ]
        then
            #On est en dectection
            echo $line | egrep " *} *;" >/dev/null && break

            ecriture=1
            echo $line | egrep " *public *:" >/dev/null && etat="+" && ecriture=0
            echo $line | egrep " *private *:" >/dev/null && etat="-" && ecriture=0
            echo $line | egrep " *protected *:" >/dev/null && etat="#" && ecriture=0
            echo $line | egrep " *//" >/dev/null && ecriture=0

            test=$(echo "$line" | sed 's/ //g')

            if [ $ecriture -eq 1 ] && [ "$test" ]
            then
                # Traitement Ligne
                ligne=$(echo "$line" | sed 's/ +/ /g;
                                            s/ *;//g;
                                            s/\*/\\\*/g;
                                            s/\([a-zA-Z0-9*]\) \([^a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/,/, /g;
                                            s/ *=0//g;
                                            s/virtual/{abstract}/g;
                                            s/>/> /g;
                                            s/&/& /g')

                # Reconnaissance du type de ligne
                if [ "$(echo "$ligne" | grep '(' )" ]
                then
                    #Cas Cosntructeur
                    if [ "$(echo $ligne | egrep "^$name\(")" ]
                    then
                        out=""
                        fonction=$ligne
                    else
                        #Detection du type de sortie et du nom de fonction
                        nbMot=$(echo $ligne | sed 's/[^ ]//g' | wc -c)
                        out=""
                        for j in $(seq 1 $nbMot)
                        do
                            tmp=$(echo $ligne | cut -d ' ' -f $j-)
                            nbOuv=$(echo $tmp | sed 's/[^(]//g' | wc -c)
                            nbFer=$(echo $tmp | sed 's/[^)]//g' | wc -c)
                            if [ $nbOuv -ne $nbFer ] && [[ $out == "" ]]
                            then
                                out=$(echo $ligne | cut -d ' ' -f -$(($j-2)))
                                fonction=$(echo $ligne | cut -d ' ' -f $(($j-1))-)
                            fi
                        done
                        if [[ $out == "" ]]
                        then
                            out=$(echo $ligne | cut -d ' ' -f -$(($nbMot-1)))
                            fonction=$(echo $ligne | cut -d ' ' -f $(($nbMot))-)
                        fi
                    fi

                    #Detection de l'avancement du code
                    if [[ $(echo "$out" | grep abstract ) == "" ]]
                    then
                        newOut="$(echo "$out" | sed 's/ //g')"
                        newFonction="$(echo "$fonction" | sed 's/ //g')"
                        result=$(echo "$cpp" | grep "$newOut$name::$newFonction")
                        if [[ $result == "" ]]
                        then
                            echo "    Erreur avec la méthode $ligne"
                            etat="$etat<color:white>"
                            out="$out</color>"
                        else
                            if [[ $result == *"//TODO" ]]
                            then
                                etat="$etat<color:red>"
                                out="$out</color>"
                            elif [[ $result == *"//WIP" ]]
                            then
                                etat="$etat<color:orange>"
                                out="$out</color>"
                            elif [[ $result == *"//DONE" ]]
                            then
                                etat="$etat<color:green>"
                                out="$out</color>"
                            fi
                        fi
                    else
                        etat="$etat<color:green>"
                        out="$out</color>"
                    fi

                    #Ajout de la fonction à la bonne liste
                    if [ "$(echo "$fonction" | egrep "^$name\(")" ]
                    then
                        constr="$constr        $etat$ligne$out\n"
                    elif [ "$(echo $fonction | grep -e "^set")" ]
                    then
                        setter="$setter        $etat$fonction : $out\n"
                    elif [ "$(echo $fonction | grep -e "^get")" ]
                    then
                        getter="$getter        $etat$fonction : $out\n"
                    else
                        meth="$meth        $etat$fonction : $out\n"
                    fi
                else
                    nbMot=$(echo "$ligne" | sed 's/[^ ]//g' | wc -c)
                    out=$(echo "$ligne" | cut -d ' ' -f -$(($nbMot-1)))
                    nom=$(echo "$ligne" | cut -d ' ' -f $(($nbMot))-)
                    attribut="$attribut        $etat$nom : $out\n"
                fi
            fi
        else
            #On continue jusqu'au début de la déclaration de classe
            echo "$line" | egrep " *class *$name" | egrep -v "^///" >/dev/null && debut=1
        fi
    done < $i

    #Affichage de ces dernier
        echo "class $name{" >> uml/Classes.uml

        if [ "$attribut" != "" ]
        then
            echo "    ==<b>Attribut(s)</b>==" >> uml/Classes.uml
            echo -en "$attribut" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$constr" != "" ]
        then
            echo "    ==<b>Constructeur(s)</b>==" >> uml/Classes.uml
            echo -en "$constr" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$setter" != "" ]
        then
            echo "    ==<b>Setter(s)</b>==" >> uml/Classes.uml
            echo -en "$setter" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$getter" != "" ]
        then
            echo "    ==<b>Getter(s)</b>==" >> uml/Classes.uml
            echo -en "$getter" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$meth" != "" ]
        then
            echo "    ==<b>Methode(s)</b>==" >> uml/Classes.uml
            echo -en "$meth" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        echo "}" >> uml/Classes.uml
done

echo "@enduml" >> uml/Classes.uml
echo "Fichier .uml generé. Création du fichier PNG en cours..."
java -jar plantuml.jar uml/Classes.uml
mv uml/Classes.png .
