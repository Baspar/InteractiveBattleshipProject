#include "Personnage.hpp"
#include "Carte.hpp"

#include <iostream>

using namespace std;

Personnage::Personnage(string nom){
	
}

void Personnage::deplacer(Coordonnees coordonnees, Carte* carteEntree){
    carteEntree->deplacerPersonnage(this, coordonnees);
    coord=coordonnees;
    carte=carteEntree;
}


Coordonnees Personnage::getCoordonnees(){
	return coord;
}

Carte* Personnage::getCarte(){
	return carte;
}

void Personnage::setCoordonnees(Coordonnees coordSet){
    coord=coordSet;
}


void Personnage::setCarte(Carte carteSet){
    carte = &carteSet;
}
