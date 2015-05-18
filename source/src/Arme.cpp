#include "Arme.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

string Arme::getNomArme() const{//DONE
	return nomArme;
}

void Arme::setNomArme(const string nvNomArme){//DONE
	nomArme = nvNomArme;
}

Arme::Arme(string nom){//DONE
	nomArme=nom;
}
