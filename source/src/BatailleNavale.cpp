#include "BatailleNavale.hpp"

#include "PersonnageBN.hpp"
#include "Combat.hpp"
#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <vector>

using namespace std;

PersonnageBN* BatailleNavale::getPersonnage1() const {//DONE
    return joueurs[0];
}

PersonnageBN* BatailleNavale::getPersonnage2() const {//DONE
    return joueurs[1];
}

Grille BatailleNavale::getGrille1() const {//DONE
    return grilles[0];
}

Grille BatailleNavale::getGrille2() const {//DONE
    return grilles[1];
}

vector<Grille> BatailleNavale::getGrilles() const {//DONE
    return grilles;
}

int BatailleNavale::getIndiceJoueurCourant() const {//DONE
    return indiceJoueurCourant;
}


void BatailleNavale::jouer(Coordonnees coordonnees){//TODO
}
void BatailleNavale::changerJoueur(){//TODO
}
BatailleNavale::BatailleNavale(){//TODO
}
