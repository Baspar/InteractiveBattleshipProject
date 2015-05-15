#include "BatailleNavale.hpp"

#include "PersonnageBN.hpp"
#include "Combat.hpp"
#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <vector>

using namespace std;

PersonnageBN* BatailleNavale::getPersonnage1(){
    return joueurs[0];
}

PersonnageBN* BatailleNavale::getPersonnage2(){
    return joueurs[1];
}

Grille BatailleNavale::getGrille1(){
    return grilles[0];
}

Grille BatailleNavale::getGrille2(){
    return grilles[1];
}

void BatailleNavale::jouer(Coordonnees coordonnees){//TODO
}
void BatailleNavale::changerJoueur(){//TODO
}
BatailleNavale::BatailleNavale(){//TODO
}
