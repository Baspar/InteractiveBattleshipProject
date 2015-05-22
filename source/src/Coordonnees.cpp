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

void Coordonnees::setAbscisse(const int a){//DONE
    abscisse=a;
}

void Coordonnees::setOrdonnee(const int o){//DONE
    ordonnee=o;
}


int Coordonnees::getAbscisse() const{//DONE
    return abscisse;
}

void Coordonnees::copy(const Coordonnees coordcp){//DONE
    abscisse = coordcp.getAbscisse();
    ordonnee = coordcp.getOrdonnee();
}

int Coordonnees::getOrdonnee() const{//DONE
    return ordonnee;
}

bool Coordonnees::coordonneesVides(){//DONE
    return (getAbscisse()==-1)&&(getOrdonnee()==-1);
}
