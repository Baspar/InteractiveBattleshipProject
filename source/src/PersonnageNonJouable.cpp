#include "PersonnageNonJouable.hpp"

#include "Personnage.hpp"
#include "PersonnageBNIA.hpp"
#include "ArmeClassique.hpp"
#include "Bateau.hpp"

using namespace std;


PersonnageNonJouable::PersonnageNonJouable(string nomnv):PersonnageBNIA(nomnv),Personnage(nomnv) {//WIP

	setTailleGrille(TailleGrille(10,10));

	setArme(new ArmeClassique());

	setBateaux(vector<Bateau*>());
	getBateaux().push_back(new Bateau(2));
	getBateaux().push_back(new Bateau(3));
	getBateaux().push_back(new Bateau(3));
	getBateaux().push_back(new Bateau(4));
	getBateaux().push_back(new Bateau(5));
}
