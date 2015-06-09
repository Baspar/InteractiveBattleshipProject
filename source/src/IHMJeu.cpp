#include "IHMJeu.hpp"

#include "Jeu.hpp"
#include "Coordonnees.hpp"
#include "CelluleAccessible.hpp"
#include "JoueurHumain.hpp"
#include <iostream>
#include <limits>


using namespace std;

void IHMJeu::ClearScreen(){
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

void IHMJeu::afficherSaisie (){//DONE
    cout<<"Action ? (2, 4, 6 ou 8)"<< endl;
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

void IHMJeu::afficherCarteCourante(){//WIP
    for(vector<Cellule*> cels : jeu->getPersonnageJouable()->getCarte()->getCellules()) {
        for(Cellule* cel : cels) {
            string type = cel->getTypeDeCellule();

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
