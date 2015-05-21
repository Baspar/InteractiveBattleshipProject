#include "ActionChangementCarte.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"
#include "Action.hpp"
#include "Personnage.hpp"

using namespace std;

void ActionChangementCarte::lancerAction(){//DONE
    cout << "Tu pars de la grille n°" << carteInitiale << " et tu vas en "<< carteDestination << endl;
    vector<vector<Cellule*> > tmp;
    tmp = carteInitiale->getCellules();
    cout << "Oui" << endl;

    // Recuperation de la celluleInit
    CelluleAccessible* cellInit = (CelluleAccessible*) carteInitiale->getCellules()[1][1];

    //// Recuperation du personnage
    Personnage* perso = cellInit->getPersonnage();

    //// Deplacement du personnage
    perso->deplacer(coordonneesDestination, carteDestination);
}
ActionChangementCarte::ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest) : coordonneesInitiales(coordInit),coordonneesDestination(coordDest), Action("Vous changez de carte"){//DONE
    carteInitiale = carteInit;
    carteDestination = carteDest;
}
