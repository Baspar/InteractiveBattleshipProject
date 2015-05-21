#include "Carte.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include "CelluleAccessible.hpp"
#include "CelluleObstacle.hpp"
#include <vector>

using namespace std;

Carte::Carte(int id, TailleGrille tailleGrilleInit) : tailleGrille(tailleGrilleInit){//WIP
    switch (id){
            case 0 :{
						cellules.clear();
						cellules.resize(10);
						for(int i=0;i<10;i++){
							cellules[0].clear();
							cellules[0].push_back(new CelluleObstacle());
							cellules[9].clear();
							cellules[9].push_back(new CelluleObstacle());
						}
						for(int i=1;i<9;i++){
												cellules[i].push_back(new CelluleObstacle());
												for (int j=1;j<6;j++)
													cellules[i].push_back(new CelluleAccessible());
												if(i==4)
													cellules[4].push_back(new CelluleObstacle());
												else
													cellules[4].push_back(new CelluleAccessible());
												for (int j=8;j<9;j++) cellules[i].push_back(new CelluleAccessible());
												cellules[i].push_back(new CelluleObstacle());
												break;
						}
				}
            case 1 :{
						cellules.clear();
						cellules.resize(10);
						for(int i=0;i<10;i++) cellules[0].push_back(new CelluleObstacle());
						for(int i=0;i<10;i++) cellules[1].push_back(new CelluleObstacle());
						for(int i=2;i<9;i++) {
												cellules[i].push_back(new CelluleObstacle());
												for (int j=1;j<6;j++) cellules[i].push_back(new CelluleAccessible());
												if(i==4) cellules[4].push_back(new CelluleObstacle()); else cellules[4].push_back(new CelluleAccessible());
												for (int j=8;j<9;j++) cellules[i].push_back(new CelluleAccessible());												cellules[i].push_back(new CelluleObstacle());
											}
						for(int i=0;i<10;i++) cellules[9].push_back(new CelluleObstacle());
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
