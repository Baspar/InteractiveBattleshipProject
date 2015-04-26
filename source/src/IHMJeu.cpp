#include "IHMJeu.hpp"

#include "Jeu.hpp"
#include "Coordonnees.hpp"
#include <iostream>


using namespace std;

IHMJeu::IHMJeu (Jeu* jeuEntree){//WIP
    jeu=jeuEntree;
}


Coordonnees IHMJeu::saisieDeplacement (){//WIP
    int deplacement=0;
    cin>> deplacement;
    switch (deplacement){
        case 8 : return Coordonnees(jeu->getPersonnageJouable().getCoordonnees().getAbscisse(), this->jeu->getPersonnageJouable().getCoordonnees().getOrdonnee()+1);
        case 4 : return Coordonnees(jeu->getPersonnageJouable().getCoordonnees().getAbscisse-1, this->jeu->getPersonnageJouable().getCoordonnees().getOrdonnee);
        case 2 : return Coordonnees(jeu->getPersonnageJouable().getCoordonnees().getAbscisse, this->jeu->getPersonnageJouable().getCoordonnees().getOrdonnee-1);
        case 6 : return Coordonnees(jeu->getPersonnageJouable().getCoordonnees().getAbscisse+1, this->jeu->getPersonnageJouable().getCoordonnees().getOrdonnee);
        default : return Coordonnees(jeu->getPersonnageJouable().getCoordonnees().getAbscisse, this->jeu->getPersonnageJouable().getCoordonnees().getOrdonnee);

    }
}

void IHMJeu::afficherJeu (){//WIP
    this->afficherCarteCourante();
    this->afficherInteraction();
    this->afficherSaisie();
}


void IHMJeu::afficherSaisie (){//WIP
    cout<<endl;
    cout<<"Affichage de la zone de saisie";
    cout<<endl;
}


void IHMJeu::afficherInteraction(){//WIP
    cout<<endl;
    cout<<"Affichage de l'action en cours";
    cout<<endl;
    cout <<jeu->getActionEnCours().getTexteInteraction();
    cout<<endl;
}


void IHMJeu::afficherCarteCourante(){//WIP
    cout<<endl;
    cout<<"Affichage de la carte courante";
    cout<<endl;
    for(vector<Cellule> cels : jeu->getPersonnageJouable().getCarte()->getCellules()) {
        for(Cellule cel : cels) {
            switch (cel.getTypeDeCellule()) {
                case 0 : {
                            if(cel.estAccessible()) cout<< "ô";
                            else cout<< " ";
                          }
                case 1 : cout<< "X";
            }
            cout<<endl;
        }
    }
}
