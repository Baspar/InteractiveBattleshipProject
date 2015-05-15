#include "Arme.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

using namespace std;



Arme::Arme(){//DONE
	nomArme="";
}

Arme::Arme(string nomArme){//DONE
	nomArme=nomArme;
}

void Arme::tirer(const Coordonnees coordonnees, Grille *grille){//DONE
	if (nomArme == "classique"){
		tirerClassique(coordonnees,grille);
	}
}

void Arme::tirerClassique(const Coordonnees coordonnees, Grille *grille){//DONE
	(*grille).getCase(coordonnees).tirerDessus();
}

