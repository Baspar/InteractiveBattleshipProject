#include "Case.hpp"

#include "Bateau.hpp"

using namespace std;

Case::Case(){//DONE
	touche=false;
	bateau=0;
}
Case::Case(Bateau* bateau){//DONE
	touche=false;
	bateau=bateau;
}

void Case::tirerDessus(){//DONE
	if(touche==false){
		touche=true;
		(*bateau).retirerPV();
	}
}

void Case::setBateau(Bateau *bateaucp){//DONE
	bateau=bateaucp;
}

void Case::setTouche(bool touchecp){//DONE
	touche=touchecp;
}

bool Case::getTouche() const{//DONE
	return touche;
}

Bateau* Case::getBateau() const{//DONE
	return bateau;
}

void Case::copy(const Case kase){//DONE
	setTouche(kase.getTouche());
	setBateau(kase.getBateau());
}

