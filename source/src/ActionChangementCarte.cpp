#include "ActionChangementCarte.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"
#include "Action.hpp"
#include "Personnage.hpp"

using namespace std;

void ActionChangementCarte::lancerAction(){//DONE
    // Recuperation de la celluleInit
    CelluleAccessible* cellInit = (CelluleAccessible*) carteInitiale->getCel(coordonneesInitiales);

    // Recuperation du personnage
    Personnage* perso = cellInit->getPersonnage();

    // Deplacement du personnage
    perso->deplacer(coordonneesDestination, carteDestination);
}

ActionChangementCarte::ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest) : coordonneesInitiales(coordInit),coordonneesDestination(coordDest), Action("Zoooooop, vous vous téléportez dans une autre zone"){//DONE
    carteInitiale = carteInit;
    carteDestination = carteDest;
}
