#include "PersonnageBN.hpp"

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Bateau.hpp"
#include <iostream>
#include <vector>

using namespace std;


PersonnageBNHumain::PersonnageBN(string nomnv){//WIP
	nomBN=nomnv;
}


TailleGrille PersonnageBN::getTailleGrille() const{//DONE
	return tailleGrille;
}

string PersonnageBN::getNomBN() const{//DONE
	return nomBN;
}

Arme* PersonnageBN::getArme() const{//DONE
	return arme;
}

vector<Bateau*> PersonnageBN::getBateaux() const{//DONE
	return bateaux;
}

void PersonnageBN::setNomBN(const string nvnom){//DONE
	nomBN=nvnom;
}

void PersonnageBN::setTailleGrille(const TailleGrille tg){//DONE
	tailleGrille = tg;
}

void PersonnageBN::setArme(Arme* nvArme ){//DONE
	arme = nvArme;
}

void PersonnageBN::setBateaux(const vector<Bateau*> nvBateaux){//DONE
	bateaux = nvBateaux;
}

void PersonnageBN::restaurerBateaux(){//DONE
	for(Bateau* bat : getBateaux()) bat->restaurerPV();
}

bool PersonnageBN::flotteCoulee(){//DONE
	for(Bateau* bat : getBateaux())
		if(!(bat->estCoule())) return false;
	return true;
}

