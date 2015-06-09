#include "Personnage.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"
#include "CelluleAccessible.hpp"
#include "Inventaire.hpp"


#include <iostream>

using namespace std;



Personnage::Personnage(string nomnv):coord(-1,-1) { //DONE
	carte=nullptr;
	inventaire=new Inventaire();
	nom=nomnv;
}


void Personnage::deplacer(Coordonnees coordonnees, Carte* carteEntree){//DONE
	if( (carteEntree->getCel(coordonnees)->getType()!="#") && (( ((CelluleAccessible*) carteEntree->getCel(coordonnees))->getPersonnage())==nullptr)) {
		carteEntree->deplacerPersonnage(this, coordonnees);
		coord.copy(coordonnees);
		carte=carteEntree;
	}
}

string Personnage::getNom() const{
	return nom;
}

Coordonnees Personnage::getCoordonnees() const {//DONE
	return coord;
}

Carte* Personnage::getCarte() const {//DONE
	return carte;
}

void Personnage::setCoordonnees(Coordonnees coordSet){//DONE
    coord.copy(coordSet);
}


void Personnage::setCarte(Carte* carteSet){//DONE
    carte = carteSet;
}


Inventaire* Personnage::getInventaire() {
	return inventaire;
}
