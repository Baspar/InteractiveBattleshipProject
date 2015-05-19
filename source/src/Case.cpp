#include "Case.hpp"

#include "Bateau.hpp"
#include <iostream>
using namespace std;

Case::Case(){//DONE
	touche=false;
	bateau=0;
}
Case::Case(Bateau* bat){//DONE
	touche=false;
	bateau=bat;
}

void Case::tirerDessus(){//DONE
	if(touche==false){
		touche=true;
		if(bateau!=nullptr)
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

bool Case::getToucheBateau() const{//DONE
	return touche && bateau!=nullptr;
}

Bateau* Case::getBateau() const{//DONE
	return bateau;
}

void Case::copy(const Case kase){//DONE
	setTouche(kase.getTouche());
	setBateau(kase.getBateau());
}

