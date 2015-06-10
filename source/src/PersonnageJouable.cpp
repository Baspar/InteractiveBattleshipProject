#include "PersonnageJouable.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"

using namespace std;


PersonnageJouable::PersonnageJouable(string nomnv):Personnage(nomnv), coordInit(-1,-1){//DONE
}

PersonnageJouable::PersonnageJouable(string nomnv, Coordonnees coord, Carte* idCarte):Personnage(nomnv), coordInit(coord){//DONE
    idCarteInit = idCarte;
}

void PersonnageJouable::deplacementInitial(){//DONE
    deplacer(coordInit, idCarteInit);
}


Carte* PersonnageJouable::getIdCarteInit() const{//DONE
	return idCarteInit;
}

	
Coordonnees PersonnageJouable::getCoordonneesInit() const{//DONE
	return coordInit;
}
