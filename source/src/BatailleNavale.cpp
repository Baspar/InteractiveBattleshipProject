#include "BatailleNavale.hpp"

#include "PersonnageBN.hpp"
#include "Combat.hpp"
#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <vector>


#include <iostream>


using namespace std;

PersonnageBN* BatailleNavale::getPersonnage1() const {//DONE
    return joueurs[0];
}

PersonnageBN* BatailleNavale::getPersonnage2() const {//DONE
    return joueurs[1];
}


Grille* BatailleNavale::getGrille1() {//DONE
    return &grilles[0];
}

Grille* BatailleNavale::getGrille2()  {//DONE
    return &grilles[1];
}

vector<Grille*> BatailleNavale::getGrilles() {//DONE
    vector<Grille*> g;
	g.clear();
	g.push_back(getGrille1());
	g.push_back(getGrille2());
    return g;
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
	joueurs.resize(2);
	for(PersonnageBN* jou : joueurs) jou=nullptr;
}


void BatailleNavale::initialiserJoueurCourant(PersonnageBN* joueur1, PersonnageBN* joueur2){//DONE
	joueurs[0]=joueur1;
	joueurs[1]=joueur2;
	indiceJoueurCourant =0;
	grilles.clear();
	grilles.push_back(Grille(joueur1->getTailleGrille().getLongueur(),joueur1->getTailleGrille().getHauteur()));
	grilles.push_back(Grille(joueur2->getTailleGrille().getLongueur(),joueur2->getTailleGrille().getHauteur()));


	for(PersonnageBN* jou : joueurs)
		jou->restaurerBateaux();
}


void BatailleNavale::jouer(Coordonnees coordonnees){//DONE
	getJoueurs()[getIndiceJoueurCourant()]->getArme()->tirer(coordonnees, getGrilles()[(getIndiceJoueurCourant()+1)%2]);
	changerJoueur();
}


PersonnageBN* BatailleNavale::retournerGagnant(){//DONE
	if(getJoueurs()[0]->flotteCoulee())
        return getJoueurs()[1];
	else if(getJoueurs()[1]->flotteCoulee())
        return getJoueurs()[0];
	else
        return nullptr;
}
Personnage* BatailleNavale::retournerGagnant(Personnage* joueur1, Personnage* joueur2){//DONE
	if(getJoueurs()[0]->flotteCoulee())
        return joueur2;
	else if(getJoueurs()[1]->flotteCoulee())
        return joueur1;
	else
        return nullptr;
}
