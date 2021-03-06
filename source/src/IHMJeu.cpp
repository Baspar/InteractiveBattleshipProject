#include "IHMJeu.hpp"

#include "Jeu.hpp"
#include "Coordonnees.hpp"
#include "CelluleAccessible.hpp"
#include "JoueurHumain.hpp"
#include <iostream>
#include <limits>


using namespace std;

void IHMJeu::ClearScreen(){//DONE
    cout << string( 100, '\n' );
}

IHMJeu::IHMJeu (Jeu* jeuEntree){//DONE
    jeu=jeuEntree;
}

Coordonnees IHMJeu::saisieDeplacement (){//DONE
    int deplacement=0;
    while(!(cin >> deplacement)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrée invalide, réessayez: ";
    }

    Coordonnees coord(jeu->getPersonnageJouable()->getCoordonnees());

    switch (deplacement){
        case 8 : return Coordonnees(coord.getAbscisse()-1, coord.getOrdonnee());
        case 4 : return Coordonnees(coord.getAbscisse(), coord.getOrdonnee()-1);
        case 2 : return Coordonnees(coord.getAbscisse()+1, coord.getOrdonnee());
        case 6 : return Coordonnees(coord.getAbscisse(), coord.getOrdonnee()+1);
        default : return Coordonnees(coord.getAbscisse(), coord.getOrdonnee());
    }
}

void IHMJeu::afficherJeu (){//DONE
    ClearScreen();
    this->afficherInteraction();
    this->afficherCarteCourante();
    this->afficherSaisie();
}

void IHMJeu::afficherDebut(){//DONE
    ClearScreen();
    cout << "Bonjour et bienvenue pour une partie endiablée de Bataille Navale Interactive" << endl << endl ;
    cout << "Depuis votre plus jeune age vous êtes fan de Pokemon et vous avez toujours rever de devenir marin. Ce jeu est fait pour vous" << endl ;
    cout << "Au cours de cette expérience unique, vous allez devoir vous deplacer dans un monde ou de nombreux experts en bataille navale vont tenter de déjouer vos plans" << endl;
    cout << "Votre mission, si vous l'acceptez est d'arriver à récupérer le badge final" << endl;
    cout << endl;
    cout << endl;
    cout << "Sur la carte, vous êtes representé par un 'ô', alors que vos ennemis sont représenté par des '8'"<< endl;
    cout << "Attention aux case 'x' ! Si vous y passez, un combat vous y attend." << endl;
    cout << "Les '#' quant a eux sont des murs" << endl;
    cout << endl;
    cout << "Pour vous deplacer, tapez 2 pour bas, 4 pour gauche, 6 pour droite et 8 pour haut" << endl;
    cout << endl;
    cout << endl;
    cout << "Entrez un caractère pour démarrer" << endl;
    string test;
    cin >>  test ;
}

void IHMJeu::afficherFin(){//DONE
    ClearScreen();
    cout << "Félicitations, vous avez récupéré le badge final, vous avez gagné !" << endl;
}

void IHMJeu::afficherSaisie (){//DONE
    cout<<"Déplacement? (2, 4, 6 ou 8)"<< endl;
}

void IHMJeu::afficherInteraction(){//DONE
    if(jeu->getActionEnCours()!=nullptr){
        string txt = jeu->getActionEnCours()->getTexteInteraction();
        cout << "+-";
        for (int i=0; i<txt.length(); i++)
            cout << "-";
        cout << "-+"<< endl;

        cout << "| " << txt << " |" << endl;

        cout << "+-";
        for (int i=0; i<txt.length(); i++)
            cout << "-";
        cout << "-+"<< endl;
    }

}

void IHMJeu::afficherCarteCourante(){//DONE
    for(vector<Cellule*> cels : jeu->getPersonnageJouable()->getCarte()->getCellules()) {
        for(Cellule* cel : cels) {
            string type = cel->getType();

            if(type==" " || type=="@" || type=="x"){
                if( ((CelluleAccessible*) cel)->getPersonnage()!=nullptr) {
                    if(((CelluleAccessible*) cel)->getPersonnage() == jeu->getPersonnageJouable())
                        cout << "ô";
                    else cout << "8";
                } else
                    cout << type;
            } else
                cout << type;

            cout <<" ";
        }
        cout<< endl;
    }
}
