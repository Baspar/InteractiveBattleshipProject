#include "ActionChangementCarte.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"
#include "Action.hpp"
#include "Personnage.hpp"

using namespace std;

void ActionChangementCarte::lancerAction(){//DONE
    // Recuperation de la celluleInit et du perso
    CelluleAccessible* cellInit = (CelluleAccessible*) carteInitiale->getCel(coordonneesInitiales);
    CelluleAccessible* cellDest = (CelluleAccessible*) carteDestination->getCel(coordonneesDestination);
    Personnage* perso = cellInit->getPersonnage();

    // On retire le personnage de la carte
    cellInit->setPersonnage(0);

    // On regle la carte et les coord
    perso->setCarte(carteDestination);
    perso->setCoordonnees(coordonneesInitiales);

    // On met le personnage sur la carte
    cellDest->setPersonnage(perso);

}
ActionChangementCarte::ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest) : coordonneesInitiales(coordInit),coordonneesDestination(coordDest) {//DONE
    carteInitiale = carteInit;
    carteDestination = carteDest;
}
