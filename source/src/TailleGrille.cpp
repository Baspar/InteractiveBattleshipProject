#include "TailleGrille.hpp"

using namespace std;

int TailleGrille::getHauteur(){
    return hauteur;
}
int TailleGrille::getLongueur(){
    return longueur;
}
TailleGrille::TailleGrille(TailleGrille &tailleGrileCp){
    longueur = tailleGrileCp.getLongueur();
    hauteur = tailleGrileCp.getHauteur();
}
TailleGrille::TailleGrille(int lon, int hau){
    longueur=lon;
    hauteur=hau;
}
