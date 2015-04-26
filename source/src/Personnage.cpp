#include "Personnage.hpp"
#include "Carte.hpp"

#include <iostream>

using namespace std;

Personnage::Personnage(string nom){//TODO
}

void Personnage::deplacer(Coordonnees coordonnees, Carte* carteEntree){//TODO
    carteEntree->deplacerPersonnage(this, coordonnees);
    coord(coordonnees);
    carte=carteEntree;
}


Coordonnees Personnage::getCoordonnees(){//DONE
	return coord;
}

Carte* Personnage::getCarte(){//DONE
	return carte;
}

void Personnage::setCoordonnees(Coordonnees coordSet){//DONE
    coord(coordSet);
}


void Personnage::setCarte(Carte carteSet){//DONE
    carte = &carteSet;
}
