#include "TailleGrille.hpp"

using namespace std;

int TailleGrille::getHauteur() const{//DONE
    return hauteur;
}
int TailleGrille::getLongueur() const{//DONE
    return longueur;
}
TailleGrille::TailleGrille(const TailleGrille &tailleGrileCp){//DONE
    longueur = tailleGrileCp.getLongueur();
    hauteur = tailleGrileCp.getHauteur();
}
TailleGrille::TailleGrille(int lon, int hau){//DONE
    longueur=lon;
    hauteur=hau;
}

void TailleGrille::setHauteur(const int hauteurcp){//DONE
	hauteur=hauteurcp;
}

void TailleGrille::setLongueur(const int longueurcp){//DONE
       longueur=longueurcp;
}

void TailleGrille::copy(const TailleGrille tailleGrille){//DONE
	setLongueur(tailleGrille.getLongueur());
	setHauteur(tailleGrille.getHauteur());
}
