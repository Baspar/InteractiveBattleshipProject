#include "Carte.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include "CelluleAccessible.hpp"
#include <vector>

using namespace std;

Carte::Carte(int id, TailleGrille tailleGrilleInit) : tailleGrille(tailleGrilleInit){//WIP
    switch (id){
            case 1 :{
            //on fait la carte préfaites n°1!
        }
            case 2 :{
            //on fait la carte préfaites n°2! etc...
        }
    }
 }

void Carte::deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees){//WIP
    // On recupere la carte
    Carte* carte = personnage->getCarte();
    // On recupere les coordonnees du joueur
    Coordonnees coord = personnage->getCoordonnees();
    // On recup sa cellule
    CelluleAccessible* cell =  (CelluleAccessible*)carte->getCel(coord);
    // On le retire
    cell->setPersonnage(NULL);
    // On le rajoute
    CelluleAccessible* cell2 = (CelluleAccessible*)getCel(coordonnees);
    cell2->setPersonnage(personnage);
}


Cellule* Carte::getCel(Coordonnees coord){//DONE
    return &cellules[coord.getAbscisse()][coord.getOrdonnee()];
}


vector<vector<Cellule> > Carte::getCellules(){//DONE
     return cellules;
}
