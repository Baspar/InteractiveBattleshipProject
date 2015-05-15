#include "IHMBN.hpp"

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include "BatailleNavale.hpp"
#include <iostream>

using namespace std;
IHMBN::IHMBN (BatailleNavale* bn){//DONE
	batailleNavale=bn;
}

void IHMBN::afficherJeu (){//WIP
	afficherGrilleBateaux();
	afficherGrilleRadar();
}

Coordonnees IHMBN::saisieCoup (){//DONE
	cout << "Veuillez saisir les coordonnées de la case que vous souhaitez viser";
	int x;
	int y;
	cin >> x;
	cin >> y;
	Coordonnees coord(x, y);
    return coord;
}

Grille IHMBN::saisirPlacementBateaux (Personnage* pers){//TODO
	for (Bateau bat : pers->
    return Grille();
}

void IHMBN::afficherGrilleBateaux(){//TODO

}

void IHMBN::afficherGrilleRadar(){//TODO

}

void IHMBN::afficherFinBN(){//TODO

}

void IHMBN::afficherResultatTour(){//TODO

}


