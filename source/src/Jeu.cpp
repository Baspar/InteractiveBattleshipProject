#include "Jeu.hpp"

#include "Coordonnees.hpp"
#include "Action.hpp"
#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "JoueurHumain.hpp"
#include "JoueurIA.hpp"
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
    
    
    personnageJouable=new JoueurHumain("PoloLePluBô");// ou new JoueurIA();
    
    listPers.push_back(personnageJouable); //FAIRE UNE BOUCLE SUR TOUS LES PERSOS
    listeCoord.push_back(Coordonnees(3,3));
    listeIdCarte.push_back(0);

	//Personnages IA

    personnagesNonJouables.push_back( new JoueurIA("Ann"));//a faire
    listPers.push_back(personnagesNonJouables[0]);
    listeCoord.push_back(Coordonnees(6,3));
    listeIdCarte.push_back(0);
    
    personnagesNonJouables.push_back( new JoueurIA("Damien"));//a faire
	listPers.push_back(personnagesNonJouables[1]);
    listeCoord.push_back(Coordonnees(1,9));
    listeIdCarte.push_back(0);
    
    personnagesNonJouables.push_back( new JoueurIA("Blaine"));//a faire
	listPers.push_back(personnagesNonJouables[2]);
    listeCoord.push_back(Coordonnees(4,6));
    listeIdCarte.push_back(1);
	

    //on place le monde et les actions
    monde.placerJoueurs(listPers,listeIdCarte, listeCoord);
    monde.placerActions();
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
