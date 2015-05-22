#include "ActionChangementCarte.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"
#include "Action.hpp"
#include "Personnage.hpp"

using namespace std;

void ActionChangementCarte::lancerAction(){//WIP
    cout << "Tu pars de la grille n°" << carteInitiale << " et tu vas en "<< carteDestination << endl;
    CelluleAccessible* tmp = (CelluleAccessible*)carteInitiale->getCel(Coordonnees(1, 1));
    cout << "Recup OK: " << tmp << endl;
    cout << "La cellule est de type " << tmp->getTypeDeCellule() << endl;
    cout << "Oui" << endl;

    // Recuperation de la celluleInit
    CelluleAccessible* cellInit = (CelluleAccessible*) carteInitiale->getCellules()[1][1];

    //// Recuperation du personnage
    Personnage* perso = cellInit->getPersonnage();

    //// Deplacement du personnage
    perso->deplacer(coordonneesDestination, carteDestination);
}
ActionChangementCarte::ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest) : Action("Vous changez de carte"), coordonneesInitiales(coordInit),coordonneesDestination(coordDest){//DONE
    carteInitiale = carteInit;
    carteDestination = carteDest;
}
