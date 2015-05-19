#include "PersonnageBNHumain.hpp"

#include "PersonnageBN.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Coordonnees.hpp"
#include "Bateau.hpp"
#include <vector>

using namespace std;


PersonnageBNHumain::PersonnageBNHumain(string nomnv):PersonnageBN(nomnv){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, int l, int h, Arme* a):PersonnageBN(nomnv, l, h, a){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, Arme* a):PersonnageBN(nomnv, a){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, int l, int h):PersonnageBN(nomnv, l, h){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, vector<int> tBateaux):PersonnageBN(nomnv, tBateaux){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBN(nomnv, l, h, tBateaux, a){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBN(nomnv, tBateaux, a){//DONE
}

PersonnageBNHumain::PersonnageBNHumain(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBN(nomnv, l, h, tBateaux){//DONE
}



Grille PersonnageBNHumain::placerBateaux(){//DONE
	TailleGrille t=TailleGrille(0,0);
	return Grille(t.getLongueur(),t.getHauteur());
}

Coordonnees PersonnageBNHumain::coordonneesAViser(Grille* grilleAdverse){//DONE
	return Coordonnees(-1,-1);
}
