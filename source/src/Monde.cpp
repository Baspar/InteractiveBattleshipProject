#include "Monde.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include <vector>

using namespace std;

Monde::Monde(){//WIP
    int nbCartes=2;
    for(int i=0;i<nbCartes;i++)
        cartes.push_back(Carte(1,TailleGrille(10,10)));
}

void Monde::placerJoueurs(vector<Personnage*> listePerso, vector<int> listeIdCarte, vector<Coordonnees> listeCoord){//WIP
    int i=0;
    for (Personnage* perso : listePerso){
        Coordonnees coordPerso(listeCoord[i]);
        Carte* pointeurCartePerso = &(cartes[listeIdCarte[i]]);

        perso->setCoordonnees(coordPerso);
        perso->setCarte(pointeurCartePerso);
        ((CelluleAccessible*) (perso->getCarte()->getCel(coordPerso)))->setPersonnage(perso);
        i++;
    }
}
