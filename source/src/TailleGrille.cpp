#include "TailleGrille.hpp"

using namespace std;

int TailleGrille::getHauteur() const{
    return hauteur;
}
int TailleGrille::getLongueur() const{
    return longueur;
}
TailleGrille::TailleGrille(const TailleGrille &tailleGrileCp){
    longueur = tailleGrileCp.getLongueur();
    hauteur = tailleGrileCp.getHauteur();
}
TailleGrille::TailleGrille(int lon, int hau){
    longueur=lon;
    hauteur=hau;
}
