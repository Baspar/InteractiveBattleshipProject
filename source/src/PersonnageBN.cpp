#include "PersonnageBN.hpp"

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Bateau.hpp"
#include <iostream>
#include <vector>

using namespace std;

TailleGrille PersonnageBN::getTailleGrille() const{//DONE
	return tailleGrille;
}

string PersonnageBN::getNom() const{//DONE
	return nom;
}

Arme* PersonnageBN::getArme() const{//DONE
	return arme;
}

vector<Bateau*> PersonnageBN::getBateaux() const{//DONE
	return bateaux;
}

void PersonnageBN::setNom(const string nvnom){//DONE
	nom=nvnom;
}

void PersonnageBN::setTailleGrille(const TailleGrille tg){//DONE
	tailleGrille = tg;
}

void PersonnageBN::setArme(const Arme* nvArme){//DONE
	arme = nvArme;
}

void PersonnageBN::setBateaux(const vector<Bateau*> nvBateaux){//DONE
	bateaux = nvBateaux;
}

