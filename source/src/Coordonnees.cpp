#include "Coordonnees.hpp"

using namespace std;

Coordonnees::Coordonnees(const int abs, const int ord){
    abscisse = abs;
    ordonnee = ord;
}

Coordonnees::Coordonnees(const Coordonnees& coord){
    abscisse = coord.getAbscisse();
    ordonnee = coord.getOrdonnee();
}

int Coordonnees::getAbscisse() const{
    return abscisse;
}

int Coordonnees::getOrdonnee() const{
    return ordonnee;
}
