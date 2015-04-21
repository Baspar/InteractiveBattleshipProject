#include "IHMJeu.hpp"

#include "Jeu.hpp"
#include "Coordonnees.hpp"
#include <iostream>


using namespace std;

IHMJeu::IHMJeu (Jeu* jeuEntree){
    jeu=jeuEntree;
}


Coordonnees IHMJeu::saisieDeplacement (){
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

void IHMJeu::afficherJeu (){
    this->afficherCarteCourante();
    this->afficherInteraction();
    this->afficherSaisie();
}


void IHMJeu::afficherSaisie (){
}


void IHMJeu::afficherInteraction(){

}


void IHMJeu::afficherCarteCourante(){

}
