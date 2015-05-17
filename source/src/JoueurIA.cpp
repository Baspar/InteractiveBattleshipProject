#include "JoueurIA.hpp"

#include "PersonnageJouable.hpp"
#include "PersonnageBNIA.hpp"
#include "ArmeClassique.hpp"
#include "Bateau.hpp"

using namespace std;

JoueurIA::JoueurIA(string nomnv):PersonnageJouable(nomnv),PersonnageBNIA(nomnv){//WIP

	setTailleGrille(TailleGrille(10,10));

	setArme(new ArmeClassique());

	setBateaux(vector<Bateau*>());
	getBateaux().push_back(new Bateau(2));
	getBateaux().push_back(new Bateau(3));
	getBateaux().push_back(new Bateau(3));
	getBateaux().push_back(new Bateau(4));
	getBateaux().push_back(new Bateau(5));
}
