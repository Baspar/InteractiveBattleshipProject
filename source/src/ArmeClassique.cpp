#include "ArmeClassique.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

#include "Arme.hpp"

using namespace std;

ArmeClassique::ArmeClassique() : Arme("Arme Classique"){//DONE
}

void ArmeClassique::tirer(const Coordonnees coordonnees, Grille *grille){//DONE
    grille->tirerDessus(coordonnees);
}
