#include "BatailleNavale.hpp"

#include "PersonnageBN.hpp"
#include "Combat.hpp"
#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <vector>

using namespace std;

PersonnageBN* BatailleNavale::getPersonnage1() const {//DONE
    return joueurs[0];
}

PersonnageBN* BatailleNavale::getPersonnage2() const {//DONE
    return joueurs[1];
}

Grille BatailleNavale::getGrille1() const {//DONE
    return grilles[0];
}

Grille BatailleNavale::getGrille2() const {//DONE
    return grilles[1];
}

vector<Grille> BatailleNavale::getGrilles() const {//DONE
    return grilles;
}

int BatailleNavale::getIndiceJoueurCourant() const {//DONE
    return indiceJoueurCourant;
}

vector<PersonnageBN*> BatailleNavale::getJoueurs() const {//DONE
	return joueurs;
}

void BatailleNavale::setIndiceJoueurCourant(const int nvIndice){//DONE
	indiceJoueurCourant=nvIndice;
}

void BatailleNavale::changerJoueur(){//DONE
	setIndiceJoueurCourant((getIndiceJoueurCourant()+1)%2);
}


BatailleNavale::BatailleNavale(){//DONE
	for(PersonnageBN* jou : joueurs) jou=nullptr;
}


void BatailleNavale::initialiserJoueurCourant(PersonnageBN* joueur1, PersonnageBN* joueur2){//WIP
	joueurs[0]=joueur1;
	joueurs[1]=joueur2;
	indiceJoueurCourant =0;
	grilles[0].copy(Grille(joueur1->getTailleGrille().getLongueur(),joueur1->getTailleGrille().getHauteur()));
	grilles[1].copy(Grille(joueur2->getTailleGrille().getLongueur(),joueur2->getTailleGrille().getHauteur()));

	for(PersonnageBN* jou : joueurs)
		jou->restaurerBateaux();
}


void BatailleNavale::jouer(Coordonnees coordonnees){//WIP
	getJoueurs()[getIndiceJoueurCourant()]->getArme()->tirer(coordonnees, &getGrilles()[(getIndiceJoueurCourant()+1)%2]);
}


PersonnageBN* BatailleNavale::retournerGagnant(PersonnageBN* joueur1, PersonnageBN* joueur2){//WIP
	if(joueur1->flotteCoulee()) return joueur2;
	else if (joueur2->flotteCoulee()) return joueur1;
	else return nullptr;
}
