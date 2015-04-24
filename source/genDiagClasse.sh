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
    indic=$(($indic + 1))
    name=$(basename -s .hpp $i)

    debut=0

    echo "class $name{" >> uml/Classes.uml
    echo "[$indic/$nbFichier]  Classe $name"

    constr=""
    meth=""
    getter=""
    setter=""
    attribut=""

    while read line
    do
        if [ $debut -eq 1 ]
        then
            echo $line | egrep " *} *;" >/dev/null && break

            ecriture=1
            echo $line | egrep " *public *:" >/dev/null && etat="+" && ecriture=0
            echo $line | egrep " *private *:" >/dev/null && etat="-" && ecriture=0
            echo $line | egrep " *protected *:" >/dev/null && etat="#" && ecriture=0
            echo $line | egrep " *//" >/dev/null && ecriture=0

            test=$(echo $line | sed 's/ //g')

            if [ $ecriture -eq 1 ] && [ "$test" ]
            then
                # Traitement Ligne
                ligne=$(echo "$line" | sed 's/ +/ /g;
                                            s/ *;//g;
                                            s/\([a-zA-Z0-9*]\) \([^a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/,/, /g;
                                            s/ *=0//g;
                                            s/virtual/{abstract}/g;
                                            s/>/> /g')

                # Reconnaissance du type de ligne
                if [ "$(echo $ligne | egrep "^$name\(")" ]
                then
                    constr="$constr        $etat$ligne\n"
                elif [ "$(echo $ligne | grep "(")" ]
                then
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

                    if [ "$(echo $fonction | grep -e "^set")" ]
                    then
                        setter="$setter        $etat$fonction : $out\n"
                    elif [ "$(echo $fonction | grep -e "^get")" ]
                    then
                        getter="$getter        $etat$fonction : $out\n"
                    else
                        meth="$meth        $etat$fonction : $out\n"
                    fi
                else
                    nbMot=$(echo $ligne | sed 's/[^ ]//g' | wc -c)
                    out=$(echo $ligne | cut -d ' ' -f -$(($nbMot-1)))
                    nom=$(echo $ligne | cut -d ' ' -f $(($nbMot))-)
                    attribut="$attribut        $etat$nom : $out\n"
                fi
            fi
        else
            echo $line | egrep " *class *$name" | egrep -v "^///" >/dev/null && debut=1
        fi
    done < $i


    if [ "$attribut" != "" ]
    then
        echo "    ==<b>Attribut(s)</b>==" >> uml/Classes.uml
        echo -en "$attribut" >> uml/Classes.uml
    fi
    if [ "$constr" != "" ]
    then
        echo "    ==<b>Constructeur(s)</b>==" >> uml/Classes.uml
        echo -en "$constr" >> uml/Classes.uml
    fi
    if [ "$setter" != "" ]
    then
        echo "    ==<b>Setter(s)</b>==" >> uml/Classes.uml
        echo -en "$setter" >> uml/Classes.uml
    fi
    if [ "$getter" != "" ]
    then
        echo "    ==<b>Getter(s)</b>==" >> uml/Classes.uml
        echo -en "$getter" >> uml/Classes.uml
    fi
    if [ "$meth" != "" ]
    then
        echo "    ==<b>Methode(s)</b>==" >> uml/Classes.uml
        echo -en "$meth" >> uml/Classes.uml
    fi

    echo "}" >> uml/Classes.uml
done

echo "@enduml" >> uml/Classes.uml
echo "Fichier .uml generé. Création du fichier PNG en cours..."
java -jar plantuml.jar uml/Classes.uml
mv uml/Classes.png .
