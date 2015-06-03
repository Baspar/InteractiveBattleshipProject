#include "Monde.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "ActionChangementCarte.hpp"
#include "ActionCombat.hpp"
#include "ActionVide.hpp"
#include <vector>

using namespace std;

Monde::Monde(){//DONE
    vector<int> vecGrille={1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0,0,0,1,0,0,0,0,0,0,0,1,2,1,0,0,0,1,0,1,0,0,0,0,0,1,2,1,0,1,0,1,0,1,0,0,0,0,0,1,2,1,0,1,0,1,0,1,0,0,0,0,0,1,2,1,0,1,0,0,0,1,0,0,0,0,0,1,2,1,0,1,0,0,0,1,0,0,0,0,0,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cartes.push_back(Carte(0,vecGrille,TailleGrille(8,12)));
	vector<int> vecGrille1={1,1,1,1,1,1,1,1,2,1,0,0,0,1,1,1,1,2,1,0,0,0,1,0,0,1,2,1,0,0,0,1,0,0,1,2,1,0,0,0,0,0,0,1,2,1,0,0,0,1,0,0,1,2,1,0,0,0,1,0,0,1,2,1,0,0,0,1,1,1,1,2,1,1,1,1,1,1,1,1};
    cartes.push_back(Carte(1,vecGrille1,TailleGrille(9,8)));

}

void Monde::placerJoueurs(vector<Personnage*> listePerso, vector<int> listeIdCarte, vector<Coordonnees> listeCoord){//DONE
    int i=0;
    if(!(listePerso.empty()))
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


void Monde::placerActions(vector<Personnage*> listePerso){//WIP

	//Carte 0
	//Transports
	cartes[0].getCellules()[6][10]->setAction(new ActionChangementCarte(&cartes[0], &cartes[1], Coordonnees(6,10), Coordonnees(4,1)));

	//Textes
	cartes[0].getCellules()[3][3]->setAction(new ActionVide("Tu es passé devant moi 1"));
	cartes[0].getCellules()[1][5]->setAction(new ActionVide("Tu es passé devant moi 2"));


	//Carte 1
	//Transports
	cartes[1].getCellules()[4][1]->setAction(new ActionChangementCarte(&cartes[1], &cartes[0], Coordonnees(4,1), Coordonnees(6,10)));

	//Textes
	cartes[1].getCellules()[4][5]->setAction(new ActionVide("Tu es passé devant moi 3"));

	//Combats
	cartes[1].getCellules()[3][3]->setAction(new ActionCombat(listePerso[1], ""));

}

