#include "Jeu.hpp"

#include "Coordonnees.hpp"
#include "Action.hpp"
#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "Monde.hpp"
#include "Combat.hpp"
#include <vector>

using namespace std;


Jeu::Jeu(){//TODO
}



Jeu::Jeu(Combat comb){//WIP
    int nbPersonnageNonJouables=0;
    vector<int> listeIdCarte = vector<int>();
    vector<Coordonnees> listeCoord = vector<Coordonnees>();
    personnagesNonJouables();

    combat=comb;


    monde.placerJoueurs(personnageNonJouable,listeIdCarte, listeCoord);
}


bool Jeu::partieFinie(){//DONE
    return terminee;
}


void Jeu::jouer(Coordonnees coordonnees){//TODO
    personnageJouable->deplacer(coordonnees, personnageJouable->getCarte());
    actionEnCours = personnageJouable->getCarte()->getCel((personnageJouable->getCoordonnees())).getActionCellule();
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
