#include "PersonnageJouable.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"

using namespace std;


PersonnageJouable::PersonnageJouable(string nomnv, Coordonnees coord, Carte* idCarte):Personnage(nomnv), coordInit(coord){//DONE
    idCarteInit = idCarte;
}
void PersonnageJouable::deplacementInitial(){//DONE
    deplacer(coordInit, idCarteInit);
}
