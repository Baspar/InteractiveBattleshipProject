#!/bin/bash
rm -rf uml/Classes.uml Classes.png
echo "@startuml" >> uml/Classes.uml
echo "!include skin.uml" >> uml/Classes.uml
echo "!include liaisons.uml" >> uml/Classes.uml

for i in src/*.hpp
do
    name=$(basename -s .hpp $i)

    etat=""
    debut=0

    echo "class $name{" >> uml/Classes.uml
    echo "Classe $name"
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

            if [ $ecriture -eq 1 ] && [ "$line" ]
            then
                ligne=$(echo "$line" | sed 's/\ +/\ /g;
                                            s/;\ *$//g;
                                            s/\([a-zA-Z0-9*]\)\ \([^a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\)\ \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\)\ \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/,/, /g;
                                            s/>/>\ /g;
                                            s/\ (/(/g')
                echo "     $etat$ligne" >> uml/Classes.uml
                echo "     $etat$ligne"

                #nbPar=$(echo "$ligne" | sed 's/[^(]//g' | wc -c)
                #nbEsp=$(echo "$ligne" | sed 's/[^ ]//g' | wc -c)

                #if [ $nbPar -eq 1 ]
                #then
                    #nom=$(echo "$ligne" | cut -d ' ' -f $nbEsp-)
                    #ext=$(echo "$ligne" | cut -d ' ' -f -$(( $nbEsp-1 )) )
                    #echo "$ext : $nom"
                #fi
            fi
        else
            echo $line | egrep " *class *$name" | egrep -v "^///" >/dev/null && debut=1

        fi
    done < $i
    echo "}" >> uml/Classes.uml
done
echo "@enduml" >> uml/Classes.uml
echo "Fichier .uml generé. Création du fichier PNG en cours..."
java -jar plantuml.jar uml/Classes.uml
mv uml/Classes.png .
