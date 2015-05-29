#include "Carte.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include "CelluleAccessible.hpp"
#include "CelluleObstacle.hpp"
#include <vector>

using namespace std;

Carte::Carte(int idC, vector<int> vecGrille, TailleGrille tailleGrilleInit) : tailleGrille(tailleGrilleInit){//WIP
	id=idC;	
	cellules.resize(tailleGrille.getLongueur());
	int j =0;
	for (int indice : vecGrille)
		switch (indice) {
			case 0 : {
				cellules[j].push_back(new CelluleAccessible());
				break;
			}
			case 1 : {
				cellules[j].push_back(new CelluleObstacle());
				break;
			}
			case 2 : {
				j=j+1;
				break;
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
    cell->setPersonnage(nullptr);
    // On le rajoute
    CelluleAccessible* cell2 = (CelluleAccessible*)getCel(coordonnees);
    cell2->setPersonnage(personnage);
}


Cellule* Carte::getCel(Coordonnees coord){//DONE
    return cellules[coord.getAbscisse()][coord.getOrdonnee()];
}


vector<vector<Cellule*> > Carte::getCellules(){//DONE
     return cellules;
}
