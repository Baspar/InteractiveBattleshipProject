#include "Personnage.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"

#include <iostream>

using namespace std;



Personnage::Personnage(string nomnv):coord(-1,-1) { //WIP
	carte=nullptr;
	nomnv=nom;
}


void Personnage::deplacer(Coordonnees coordonnees, Carte* carteEntree){//DONE
    carteEntree->deplacerPersonnage(this, coordonnees);
    coord.copy(coordonnees);
    carte=carteEntree;
}


Coordonnees Personnage::getCoordonnees(){//DONE
	return coord;
}

Carte* Personnage::getCarte(){//DONE
	return carte;
}

void Personnage::setCoordonnees(Coordonnees coordSet){//DONE
    coord.copy(coordSet);
}


void Personnage::setCarte(Carte* carteSet){//DONE
    carte = carteSet;
}
