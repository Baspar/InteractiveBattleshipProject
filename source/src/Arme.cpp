#include "Arme.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

string Arme::getNomArme() const{
	return nomArme;
}

void Arme::setNomArme(const string nvNomArme){
	nomArme = nvNomArme;
}

Arme::Arme(string nom){
	nomArme=nom;
}
