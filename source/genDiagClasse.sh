#!/bin/bash
rm -rf uml/Classes.uml Classes.png
echo "@startuml" >> uml/Classes.uml
echo "!include skin.uml" >> uml/Classes.uml
echo "!include liaisons.uml" >> uml/Classes.uml

for i in $(ls src/*.hpp | sort -r)
do
    name=$(basename -s .hpp $i)

    etat=""
    debut=0

    echo "class $name{" >> uml/Classes.uml
    echo -e "\nClasse $name"

    constr=""
    meth=""
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
                                            s/;//g;
                                            s/\([a-zA-Z0-9*]\) \([^a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/\([^a-zA-Z0-9*]\) \([a-zA-Z0-9*]\)/\1\2/g;
                                            s/,/, /g;
                                            s/virtual/{abstract}/g;
                                            s/>/> /g')

                # Reconnaissance du type de ligne
                if [ "$(echo $ligne | egrep "^$name\(")" ]
                then
                    constr="$constr        $etat$ligne\n"
                elif [ "$(echo $ligne | grep "(")" ]
                then
                    meth="$meth        $etat$ligne\n"
                else
                    attribut="$attribut        $etat$ligne\n"
                fi
            fi
        else
            echo $line | egrep " *class *$name" | egrep -v "^///" >/dev/null && debut=1
        fi
    done < $i


    if [ !"$attribut" ]
    then
        echo "    --Attribut(s)--" >> uml/Classes.uml
        echo -en "$attribut" >> uml/Classes.uml
    fi
    if [ !"$constr" ]
    then
        echo "    --Constructeur(s)--" >> uml/Classes.uml
        echo -en "$constr" >> uml/Classes.uml
    fi
    if [ !"$meth" ]
    then
        echo "    --Methode(s)--" >> uml/Classes.uml
        echo -en "$meth" >> uml/Classes.uml
    fi

    echo "}" >> uml/Classes.uml
done

echo "@enduml" >> uml/Classes.uml
echo "Fichier .uml generé. Création du fichier PNG en cours..."
java -jar plantuml.jar uml/Classes.uml
mv uml/Classes.png .
