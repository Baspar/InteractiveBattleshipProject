#include "PersonnageBNHumain.hpp"

#include "PersonnageBN.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Coordonnees.hpp"
#include "Bateau.hpp"
#include <vector>

using namespace std;
PersonnageBNHumain::PersonnageBNHumain(TailleGrille nvtailleGrille, string nvNom, Arme* nvArme, vector<Bateau*> nvbateaux){//DONE
	setTailleGrille(nvtailleGrille);
        setNom(nvNom);
        setArme(nvArme);
	setBateaux(nvbateaux);
}

Grille PersonnageBNHumain::placerBateaux(){//DONE
	TailleGrille t=TailleGrille(0,0);
	return Grille(t.getLongueur(),t.getHauteur());
}

Coordonnees PersonnageBNHumain::coordonneesAViser(){//DONE
	return Coordonnees(-1,-1);
}
