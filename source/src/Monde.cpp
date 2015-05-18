#include "Monde.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include <vector>

using namespace std;

Monde::Monde(){//WIP
    int nbCartes=2;

    for(int i=0;i<nbCartes;i++) cartes.push_back(Carte(i,TailleGrille(10,10)));

}

void Monde::placerJoueurs(vector<Personnage*> listePerso, vector<int> listeIdCarte, vector<Coordonnees> listeCoord){//WIP
    int i=0;
    if(!(listePerso.empty()))
        for (Personnage* perso : listePerso){

            Coordonnees coord = listeCoord[i];
            Carte carte = cartes[listeIdCarte[i]];
            i++;

            perso->setCoordonnees(coord);
            perso->setCarte(&carte);
            ((CelluleAccessible*) perso->getCarte()->getCel(coord))->setPersonnage(perso);
        }
}
