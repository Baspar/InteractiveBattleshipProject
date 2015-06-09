#include "Jeu.hpp"

#include "ArmeChercheuse.hpp"
#include "ArmeCroix.hpp"
#include "ArmeFatale.hpp"
#include "ArmeClassique.hpp"
#include "BadgeFinal.hpp"
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


Jeu::Jeu(Combat* comb){//DONE
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
        int typePerso, xTailleGrille, yTailleGrille;
        char bossFinal;
        string aCasesCombat, armePerso;
        file >> typePerso
             >> nomPerso
             >> idCartePerso
             >> xPerso
             >> yPerso
             >> armePerso
             >> bossFinal
             >> xTailleGrille
             >> yTailleGrille;

        int nbBateauFlotte;
        vector<int> bateaux;
        file >> nbBateauFlotte;
        for(int i=0; i<nbBateauFlotte; i++){
            int tailleBateau;
            file >> tailleBateau;
            bateaux.push_back(tailleBateau);
        }

        Arme* arme;
        if(armePerso == "ArmeFatale")
            arme = new ArmeFatale();
        else if (armePerso == "ArmeChercheuse")
            arme = new ArmeChercheuse();
        else if (armePerso == "ArmeCroix")
            arme = new ArmeCroix();
        else
            arme = new ArmeClassique();

        PersonnageNonJouable* perso;
        switch(typePerso) {
            case 1: //JoueurIA
                perso = new JoueurIA(nomPerso, xTailleGrille, yTailleGrille, bateaux, arme);
                break;
            case 2: //JoueurIAAvance
                perso = new JoueurIAAvance(nomPerso, xTailleGrille, yTailleGrille, bateaux, arme);
                break;
            case 3: //JoueurIACheate
                perso = new JoueurIACheate(nomPerso, xTailleGrille, yTailleGrille, bateaux, arme);
                break;
        }

        if(bossFinal=='Y')
            perso->getInventaire()->ajoutObjet(new BadgeFinal());

        cartePerso = monde.getCarte(idCartePerso);
        perso->setCarte(cartePerso);
        perso->setCoordonnees(Coordonnees(xPerso, yPerso));
        ((CelluleAccessible*)cartePerso->getCellules()[xPerso][yPerso])->setPersonnage(perso);

        personnagesNonJouables.push_back(perso);


        file >> aCasesCombat;
        if(aCasesCombat == "Y"){
            int nbCasesCombat;
            file >> nbCasesCombat;
            Action* action = new ActionCombat(perso, "");
            for(int j=0; j<nbCasesCombat; j++){
                int xCase, yCase, idCarteCase;
                file >> idCarteCase >> xCase >> yCase;
                monde.getCarte(idCarteCase)->getCellules()[xCase][yCase]->setType("x");
                monde.getCarte(idCarteCase)->getCellules()[xCase][yCase]->setAction(action);
            }
        }
    }
    file.close();
}

bool Jeu::partieFinie(){//DONE
    for(Objet* obj: personnageJouable->getInventaire()->getObjet())
    	if(obj->metFinAuJeu())
		return true;
    return false;

}

void Jeu::jouer(Coordonnees coordonnees){//DONE
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


