#include "PersonnageBN.hpp"

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Bateau.hpp"
#include <iostream>
#include <vector>

using namespace std;

TailleGrille PersonnageBN::getTailleGrille(){
	return tailleGrille;
}

string PersonnageBN::getNom(){
	return nom;
}

Arme* PersonnageBN::getArme(){
	return arme;
}

vector<Bateau*> PersonnageBN::getBateaux(){
	return bateaux;
}

void PersonnageBN::setTailleGrille(TailleGrille tg){
	tailleGrille = tg;
}

void PersonnageBN::setArme(Arme* nvArme){
	arme = nvArme;
}

void PersonnageBN::setBateaux(vector<Bateau*> nvBateaux){
	bateaux = nvBateaux;
}

