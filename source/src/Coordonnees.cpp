#include "Coordonnees.hpp"

using namespace std;

Coordonnees::Coordonnees(int abs, int ord){
    abscisse = abs;
    ordonnee = ord;
}

int Coordonnees::getAbscisse(){
    return abs;
}

int Coordonnees::getOrdonnee(){
    return ord;
}
