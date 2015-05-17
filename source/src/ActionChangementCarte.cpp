#include "ActionChangementCarte.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"
#include "Action.hpp"
#include "Personnage.hpp"

using namespace std;

void ActionChangementCarte::lancerAction(){//WIP
    // Recuperation de la celluleInit et du perso
    CelluleAccessible* cellInit = (CelluleAccessible*) carteInitiale->getCel(coordonneesInitiales);
    Personnage* perso = celInit->getPersonnage();

    // On retire le personnage
    cellInit->setPersonnage(0);
}
ActionChangementCarte::ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest) : coordonneesInitiales(coordInit),coordonneesDestination(coordDest) {//DONE
    carteInitiale = carteInit;
    carteDestination = carteDest;
}
