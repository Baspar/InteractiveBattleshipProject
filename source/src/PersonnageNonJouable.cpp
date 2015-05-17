#include "PersonnageNonJouable.hpp"

#include "Personnage.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;


PersonnageNonJouable::PersonnageNonJouable(string nomnv):TailleGrille(10,10) {//WIP
	carte=nullptr;
	coord.copy(coord(-1,-1));
	nom=nomnv;
	nomBN=nomnv;

	arme = new ArmeClassique();

	bateaux = new vector<bateau>();
	bateaux.push_back(new Bateau(2));
	bateaux.push_back(new Bateau(3));
	bateaux.push_back(new Bateau(3));
	bateaux.push_back(new Bateau(4));
	bateaux.push_back(new Bateau(5));
}
