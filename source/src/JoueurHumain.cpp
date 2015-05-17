#include "JoueurHumain.hpp"

#include "ArmeClassique.hpp"
#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"
#include "Bateau.hpp"

using namespace std;

JoueurHumain::JoueurHumain(string nomnv):PersonnageJouable(nomnv),PersonnageBNHumain(nomnv){//WIP

	setTailleGrille(TailleGrille(10,10));

	setArme(new ArmeClassique());

	setBateaux(vector<Bateau*>());
	getBateaux().push_back(new Bateau(2));
	getBateaux().push_back(new Bateau(3));
	getBateaux().push_back(new Bateau(3));
	getBateaux().push_back(new Bateau(4));
	getBateaux().push_back(new Bateau(5));
}
