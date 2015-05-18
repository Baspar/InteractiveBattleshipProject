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

    echo "[$indic/$nbFichier]  Classe $name ($i)" # Debug

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
            echo $line | grep "^ *} *;" >/dev/null && break

            ecriture=1
            echo $line | egrep "^ *public *:" >/dev/null && etat="+" && ecriture=0
            echo $line | egrep "^ *private *:" >/dev/null && etat="-" && ecriture=0
            echo $line | egrep "^ *protected *:" >/dev/null && etat="#" && ecriture=0
            echo $line | egrep "^ *//" >/dev/null && ecriture=0

            test=$(echo "$line" | sed 's/ //g')

            if [ $ecriture -eq 1 ] && [ "$test" ]
            then
                # Traitement Ligne
                ligne=$(echo "$line" | sed 's/ +/ /g;
                                            s/ *;//g;
                                            s/\([a-zA-Z0-9*]\) \([^a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/,/, /g;
                                            s/virtual//g;
                                            s/>/> /g;
                                            s/> *>/>>/g;
                                            s/&/& /g')
                # Reconnaissance du type de ligne
                if [ "$(echo "$ligne" | grep '(' )" ]
                then
                    #Cas Cosntructeur
                    if [ "$(echo $ligne | egrep "^$name\(")" ]
                    then
                        out=""
                        fonction="$ligne"
                        nomFonction="$name"
                    elif [ "$(echo $ligne | egrep "^~$name\(")" ]
                    then
                        out=""
                        fonction="$ligne"
                        nomFonction="~$name"
                    else
                        #Detection du type de sortie et du nom de fonction
                        out=$(echo "$ligne" | sed 's/const//g; s/  / /g; s/^ //g' | cut -d " " -f 1 )
                        nomFonction=$(echo "$ligne" | sed 's/ /\n/g; s/(/(\n/g' | grep "(" | sed 's/(//g' )
                        fonction=$(echo "$ligne" | sed "s/const//g; s/$out//1; s/  / /g; s/^ //g")

                        # On rajoute le 
                        if [ "$(echo $fonction | grep '= *0')" ]
                        then
                            fonction="{abstract}$(echo $fonction | sed 's/= *0//g')"
                        fi
                    fi

                    fonction=$(echo "$fonction" | sed 's/^\* *//g')

                    #Detection de l'avancement du code
                    if [[ $(echo "$fonction" | grep abstract ) != "" ]] 
                    then
                        fonction="<color:green>$fonction"
                        out="$out</color>"
                    else
                        concat=$(echo "$ligne" | sed "s/\*/\\\\*/g; s/\t//g; s/ //g; s/$nomFonction/$name::$nomFonction/1")
                        result=$(echo "$cpp" | grep "$concat")

                        if [[ $result == "" ]]
                        then
                            echo "    Erreur avec la méthode $ligne"
                            fonction="<color:white>$fonction"
                            out="$out</color>"
                        else
                            if [[ $result == *"//TODO" ]]
                            then
                                fonction="<color:red>$fonction"
                                out="$out</color>"
                            elif [[ $result == *"//WIP" ]]
                            then
                                fonction="<color:orange>$fonction"
                                out="$out</color>"
                            elif [[ $result == *"//DONE" ]]
                            then
                                fonction="<color:green>$fonction"
                                out="$out</color>"
                            else
                                echo "  Pas de progres pour $ligne"
                            fi
                        fi
                    fi

                    #Ajout de la fonction à la bonne liste
                    if [ "$(echo $nomFonction | egrep "^$name")" ]
                    then
                        constr="$constr        $etat$fonction$out\n"
                    elif [ "$(echo $nomFonction | egrep "^~$name")" ]
                    then
                        destr="$destr        $etat$fonction$out\n"
                    elif [ "$(echo $nomFonction | grep -e "^set")" ]
                    then
                        setter="$setter        $etat$fonction : $out\n"
                    elif [ "$(echo $nomFonction| grep -e "^get")" ]
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
            echo "    ==<b>Attributs</b>==" >> uml/Classes.uml
            echo -en "$attribut" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$constr" != "" ]
        then
            echo "    ==<b>Constructeurs</b>==" >> uml/Classes.uml
            echo -en "$constr" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$destr" != "" ]
        then
            echo "    ==<b>Destructeurs</b>==" >> uml/Classes.uml
            echo -en "$destr" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$setter" != "" ]
        then
            echo "    ==<b>Setters</b>==" >> uml/Classes.uml
            echo -en "$setter" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$getter" != "" ]
        then
            echo "    ==<b>Getters</b>==" >> uml/Classes.uml
            echo -en "$getter" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        if [ "$meth" != "" ]
        then
            echo "    ==<b>Methodes</b>==" >> uml/Classes.uml
            echo -en "$meth" | sed 's/\\\*/\*/g'|sort >> uml/Classes.uml
        fi
        echo "}" >> uml/Classes.uml
done

echo "@enduml" >> uml/Classes.uml
echo "Fichier .uml generé. Création du fichier PNG en cours..."
java -jar plantuml.jar uml/Classes.uml
mv uml/Classes.png .
#rm uml/Classes.uml
