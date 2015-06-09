#include "Jeu.hpp"

#include "Coordonnees.hpp"
#include "Carte.hpp"
#include "Action.hpp"
#include "ActionCombat.hpp"
#include "CelluleCombat.hpp"
#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "JoueurHumain.hpp"
#include "JoueurIA.hpp"
#include "JoueurIAAvance.hpp"
#include "JoueurIACheate.hpp"
#include "Monde.hpp"
#include "Combat.hpp"
#include <vector>
#include <fstream>

using namespace std;


Jeu::Jeu(Combat* comb){//WIP
    lireJoueurs();

    actionEnCours = nullptr;

    combat=comb;

    //monde.placerActions(listPers);
}

void Jeu::lireJoueurs(){//DONE
    ifstream file("donnees/Joueurs.d", ios::in);
    int idCartePerso, xPerso, yPerso;
    string nomPerso;
    file >> nomPerso
         >> idCartePerso
         >> xPerso
         >> yPerso;
    Carte* cartePerso = monde.getCarte(idCartePerso);
    personnageJouable = new JoueurHumain(nomPerso, Coordonnees(xPerso, yPerso), cartePerso);
    personnageJouable->setCarte(cartePerso);
    personnageJouable->setCoordonnees(Coordonnees(xPerso, yPerso));
    ((CelluleAccessible*)cartePerso->getCellules()[xPerso][yPerso])->setPersonnage(personnageJouable);

    int nbAdversaire;
    file >> nbAdversaire;
    for(int i=0; i<nbAdversaire; i++){
        int typePerso;
        string aCasesCombat;
        file >> typePerso
             >> nomPerso
             >> idCartePerso
             >> xPerso
             >> yPerso
             >> aCasesCombat;

        PersonnageNonJouable* perso;
        switch(typePerso) {
            case 1: //JoueurIA
                perso = new JoueurIA(nomPerso);
                break;
            case 2: //JoueurIAAvance
                perso = new JoueurIAAvance(nomPerso);
                break;
            case 3: //JoueurIACheate
                perso = new JoueurIACheate(nomPerso);
                break;
        }

        cartePerso = monde.getCarte(idCartePerso);
        perso->setCarte(cartePerso);
        perso->setCoordonnees(Coordonnees(xPerso, yPerso));
        ((CelluleAccessible*)cartePerso->getCellules()[xPerso][yPerso])->setPersonnage(perso);

        personnagesNonJouables.push_back(perso);


        if(aCasesCombat == "Y"){
            int nbCasesCombat;
            file >> nbCasesCombat;
            for(int j=0; j<nbCasesCombat; j++){
                int xCase, yCase, idCarteCase;
                file >> idCarteCase >> xCase >> yCase;
                //vector<vector<Cellule*> > Cartes = monde.cartes[idCarteCase].getCellules();
                //Cartes[xCase][yCase]=new CelluleCombat(perso);
                //cout << monde.cartes[idCarteCase].getCellules()[xCase][yCase]->getTypeDeCellule();
                monde.getCarte(idCarteCase)->getCellules()[xCase][yCase]->setType("x");
                monde.getCarte(idCarteCase)->getCellules()[xCase][yCase]->setAction(new ActionCombat(perso, "J'aime les short"));
            }
        }
    }
    file.close();
}

bool Jeu::partieFinie(){//DONE
    return terminee;
}

void Jeu::jouer(Coordonnees coordonnees){//WIP
    personnageJouable->deplacer(coordonnees, personnageJouable->getCarte());
    actionEnCours = personnageJouable->getCarte()->getCel((personnageJouable->getCoordonnees()))->getAction();
    if(actionEnCours!=0)
        actionEnCours->lancerAction();
}

Action* Jeu::getActionEnCours(){//DONE
    return actionEnCours;
}

PersonnageJouable* Jeu::getPersonnageJouable(){//DONE
    return personnageJouable;
}

void Jeu::setTerminee(bool bol){//DONE
    terminee=bol;
}
