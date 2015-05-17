#include "PersonnageBNHumain.hpp"

#include "PersonnageBN.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Coordonnees.hpp"
#include "Bateau.hpp"
#include <vector>

using namespace std;


PersonnageBNHumain::PersonnageBNHumain(string nomnv):PersonnageBN(nomnv){//WIP
}


Grille PersonnageBNHumain::placerBateaux(){//DONE
	TailleGrille t=TailleGrille(0,0);
	return Grille(t.getLongueur(),t.getHauteur());
}

Coordonnees PersonnageBNHumain::coordonneesAViser(Grille* grilleAdverse){//DONE
	return Coordonnees(-1,-1);
}
