#include "PersonnageBN.hpp"

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Bateau.hpp"
#include <iostream>
#include <vector>

using namespace std;

TailleGrille PersonnageBN::getTailleGrille(){//DONE
	return tailleGrille;
}

string PersonnageBN::getNom(){//DONE
	return nom;
}

Arme* PersonnageBN::getArme(){//DONE
	return arme;
}

vector<Bateau*> PersonnageBN::getBateaux(){//DONE
	return bateaux;
}

void PersonnageBN::setTailleGrille(TailleGrille tg){//DONE
	tailleGrille = tg;
}

void PersonnageBN::setArme(Arme* nvArme){//DONE
	arme = nvArme;
}

void PersonnageBN::setBateaux(vector<Bateau*> nvBateaux){//DONE
	bateaux = nvBateaux;
}

