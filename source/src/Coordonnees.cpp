#include "Coordonnees.hpp"

using namespace std;

Coordonnees::Coordonnees(const int abs, const int ord){//DONE
    abscisse = abs;
    ordonnee = ord;
}

Coordonnees::Coordonnees(const Coordonnees& coord){//DONE
    abscisse = coord.getAbscisse();
    ordonnee = coord.getOrdonnee();
}

int Coordonnees::getAbscisse() const{//DONE
    return abscisse;
}

int Coordonnees::getOrdonnee() const{//DONE
    return ordonnee;
}
