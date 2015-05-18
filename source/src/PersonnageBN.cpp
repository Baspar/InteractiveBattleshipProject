#include "PersonnageBN.hpp"

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "ArmeClassique.hpp"
#include "Bateau.hpp"
#include <iostream>
#include <vector>

using namespace std;


PersonnageBN::PersonnageBN(string nomnv):tailleGrille(10,10){//DONE
	nomBN=nomnv;

	arme=new ArmeClassique();

	bateaux=vector<Bateau*>();
	bateaux.push_back(new Bateau(2));
	bateaux.push_back(new Bateau(3));
	bateaux.push_back(new Bateau(3));
	bateaux.push_back(new Bateau(4));
	bateaux.push_back(new Bateau(5));
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

