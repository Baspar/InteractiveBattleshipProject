#include "Monde.hpp"

#include "Carte.hpp"
#include "CelluleAccessible.hpp"
#include "CelluleChangementCarte.hpp"
#include "ActionChangementCarte.hpp"
#include "ActionCombat.hpp"
#include "ActionVide.hpp"
#include "JoueurIA.hpp"
#include "JoueurIAAvance.hpp"
#include "JoueurIACheate.hpp"
#include "JoueurHumain.hpp"
#include <vector>
#include <fstream>

using namespace std;

Monde::Monde(){//DONE
    lireCarte();
    lireCasesChangementCarte();
}

void Monde::lireCasesChangementCarte(){//DONE
    ifstream file("Transport.d", ios::in);
    int nbCases;
    file >> nbCases;
    for(int i=0; i<nbCases; i++){
        int idCarteDep, xDep, yDep;
        int idCarteFin, xFin, yFin;
        file >> idCarteDep >> xDep >> yDep >> idCarteFin >> xFin >> yFin;
        cartes[idCarteDep].getCellules()[xDep][yDep]->setType("@");
        cartes[idCarteDep].getCellules()[xDep][yDep]->setAction(
                new ActionChangementCarte(
                    &cartes[idCarteDep],
                    &cartes[idCarteFin],
                    Coordonnees(xDep, yDep),
                    Coordonnees(xFin, yFin)
                    ));
    }
}
void Monde::lireCarte(){//DONE
    ifstream file("Monde.d", ios::in);
    int nbCarte;
    file >> nbCarte;
    for(int i=0; i<nbCarte; i++){
        int x, y;
        file >> x >> y;

        vector<vector<char> > carte;

        for(int j=0; j<y; j++){
            carte.push_back(vector<char>());
            for(int k=0; k<x; k++){
                char car;
                file >> car;
                carte[j].push_back(car);
            }
        }

        cartes.push_back(Carte(i, carte));
    }
    file.close();
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

    //Textes
    cartes[0].getCellules()[3][3]->setAction(new ActionVide("Tu es passé devant moi 1"));
    cartes[0].getCellules()[1][5]->setAction(new ActionVide("Tu es passé devant moi 2"));

    //Textes
    cartes[1].getCellules()[4][5]->setAction(new ActionVide("Tu es passé devant moi 3"));

    //Combats
    cartes[1].getCellules()[3][3]->setAction(new ActionCombat(listePerso[1], ""));

}

