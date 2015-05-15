#include "ArmeClassique.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

#include "Arme.hpp"

using namespace std;

ArmeClassique::ArmeClassique(){//DONE
	setNomArme("Arme Classique");
}

void ArmeClassique::tirer(const Coordonnees coordonnees, Grille *grille){//DONE
	(*grille).getCaseElt(coordonnees).tirerDessus();
}
