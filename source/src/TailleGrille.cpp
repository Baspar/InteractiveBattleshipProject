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
