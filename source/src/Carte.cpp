#include "Carte.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include <vector>

using namespace std;
 Carte::Carte(int id, TailleGrille tailleGrilleInit){
    tailleGrille=tailleGrilleInit;
    switch (id){
            case 1 :{
            //on fait la carte préfaites n°1!
        }
            case 2 :{
            //on fait la carte préfaites n°2! etc...
        }
    }
 }

void Carte::deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees){
    personnage.getCarte()->getCel(personnage->getCoordonnees()).setPersonnage(NULL);
    getCel(coordonnees).setPersonnage(personnage);
}


Cellule Carte::getCel(Coordonnees coord){
    return cellules[coord.getAbscisse()][coord.getOrdonnee()];
}


vector<vector<Cellule> > Carte::getCellules(){
     return cellules;
}
