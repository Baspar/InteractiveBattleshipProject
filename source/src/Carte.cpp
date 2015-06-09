#include "Carte.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include "CelluleAccessible.hpp"
#include "CelluleObstacle.hpp"
#include <vector>

using namespace std;

Carte::Carte(int idC, vector<vector<char> > vecGrille):tailleGrille(0,0){//WIP
    id=idC;
    int longueur=vecGrille.size();
    int hauteur=vecGrille[0].size();
    tailleGrille.setHauteur(hauteur);
    tailleGrille.setLongueur(longueur);
    cellules.resize(tailleGrille.getLongueur());

    for(int i=0; i<vecGrille.size(); i++){
        vector<char> ligne=vecGrille[i];
        for(int j=0; j<ligne.size(); j++){
            char car=ligne[j];
            switch(car){
                case '_' : {
                    cellules[i].push_back(new CelluleAccessible());
                    break;
                }
                case '#' : {
                    cellules[i].push_back(new CelluleObstacle());
                    break;
                }
            }
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
