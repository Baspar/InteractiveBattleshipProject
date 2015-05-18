#include "Jeu.hpp"

#include "Coordonnees.hpp"
#include "Action.hpp"
#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "JoueurHumain.hpp"
#include "Monde.hpp"
#include "Combat.hpp"
#include <vector>

using namespace std;


Jeu::Jeu(){//TODO
}



Jeu::Jeu(Combat* comb){//WIP

    int nbPersonnageNonJouables=1;
    vector<int> listeIdCarte = vector<int>();
    vector<Coordonnees> listeCoord = vector<Coordonnees>();


    actionEnCours = nullptr;

    personnagesNonJouables.push_back( new PersonnageNonJouable("Ann"));//a faire
	

    personnageJouable=new JoueurHumain("Ann");// ou new JoueurIA();

    vector<Personnage*> listPers= vector<Personnage*>();
    listPers.push_back(personnagesNonJouables[0]); //FAIRE UNE BOUCLE SUR TOUS LES PERSOS
    listPers.push_back(personnageJouable);
    monde.placerJoueurs(listPers,listeIdCarte, listeCoord);
}


bool Jeu::partieFinie(){//DONE
    return terminee;
}


void Jeu::jouer(Coordonnees coordonnees){//WIP
    personnageJouable->deplacer(coordonnees, personnageJouable->getCarte());
    actionEnCours = personnageJouable->getCarte()->getCel((personnageJouable->getCoordonnees()))->getActionCellule();
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
