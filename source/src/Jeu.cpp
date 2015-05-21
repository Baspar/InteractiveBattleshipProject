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

    //int nbPersonnageNonJouables=1;
    vector<int> listeIdCarte;
    vector<Coordonnees> listeCoord;
	vector<Personnage*> listPers;
	
	listeIdCarte.clear();
	listeCoord.clear();
	listPers.clear();

    actionEnCours = nullptr;
    
    combat=comb;

    //personnagesNonJouables.push_back( new PersonnageNonJouable("Ann"));//a faire
	

    personnageJouable=new JoueurHumain("Testo");// ou new JoueurIA();



    listPers.push_back(personnageJouable); //FAIRE UNE BOUCLE SUR TOUS LES PERSOS
    listeCoord.push_back(Coordonnees(5,5));
    listeIdCarte.push_back(0);
    
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
