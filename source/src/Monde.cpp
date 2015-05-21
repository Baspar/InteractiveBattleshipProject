#include "Monde.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include <vector>

using namespace std;

Monde::Monde(){//WIP
    int nbCartes=2;
    for(int i=0;i<nbCartes;i++)
        cartes.push_back(Carte(0,TailleGrille(10,10)));
}

void Monde::placerJoueurs(vector<Personnage*> listePerso, vector<int> listeIdCarte, vector<Coordonnees> listeCoord){//WIP
    int i=0;
    if(!(listePerso.empty()));
    for (Personnage* perso : listePerso){
        Coordonnees coordPerso(-1,-1);
        coordPerso.copy(listeCoord[i]);
        Carte* pointeurCartePerso = &(cartes[listeIdCarte[i]]);

        perso->setCoordonnees(coordPerso);
        perso->setCarte(pointeurCartePerso);
        ((CelluleAccessible*) (perso->getCarte()->getCel(coordPerso)))->setPersonnage(perso);
        i++;
    }
}
