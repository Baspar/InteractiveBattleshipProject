#include "Carte.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include "CelluleAccessible.hpp"
#include "CelluleObstacle.hpp"
#include "CelluleChangementCarte.hpp"
#include <vector>

using namespace std;

Carte::Carte(int id, TailleGrille tailleGrilleInit) : tailleGrille(tailleGrilleInit){//WIP
    cellules.clear();
    switch (id){
        case 0 :{
                    cellules.resize(10);
                    for(int i=0; i<10; i++){
                        cellules[i].clear();
                        for(int j=0; j<10; j++)
                            cellules[i].push_back(new CelluleAccessible());
                    }
                    break;
                }
        case 1 :{
                    cellules.resize(10);
                    for(int i=0;i<10;i++) cellules[0].push_back(new CelluleObstacle());
                    for(int i=1;i<9;i++) {
                        cellules[i].push_back(new CelluleObstacle());
                        for (int j=1;j<9;j++)
                            if(i==j)
                                cellules[i].push_back(new CelluleObstacle());
                            else
                                if(i==3 && j==5)
                                    cellules[i].push_back(new CelluleChangementCarte(this, this, Coordonnees(3, 5), Coordonnees(9, 8)));
                                else
                                    cellules[i].push_back(new CelluleAccessible());
                        cellules[i].push_back(new CelluleObstacle());
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
