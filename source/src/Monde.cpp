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
    lireAction();
}

void Monde::lireCasesChangementCarte(){//DONE
    ifstream file("donnees/Transport.d", ios::in);
    int nbCases;
    file >> nbCases;
    cout << "On a " << nbCases << " Cases"<< endl;
    for(int i=0; i<nbCases; i++){
        int idCarteDep, xDep, yDep;
        int idCarteFin, xFin, yFin;
        file >> idCarteDep >> xDep >> yDep >> idCarteFin >> xFin >> yFin;
        cout << "Case n°"<< i << ": [" << idCarteDep << "] "<< xDep << "->" << yDep <<endl;
        cout << "        : [" << idCarteFin << "] "<< xFin << "->" << yFin <<endl;
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
    ifstream file("donnees/Monde.d", ios::in);
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
void Monde::lireAction(){//DONE
    ifstream file("donnees/Textes.d", ios::in);
    int nbActionsVide;
    file >> nbActionsVide;
    for(int i=0; i<nbActionsVide; i++){
        int idCarte, xCase, yCase;
        string texte;
        file >> idCarte >> xCase >> yCase;
        getline(file, texte);
        cartes[idCarte].getCellules()[xCase][yCase]->setAction(new ActionVide(texte));
    }
    file.close();
}

Carte* Monde::getCarte(int id){//DONE
    return &cartes[id];
}
