#include "ArmeFatale.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

#include "Arme.hpp"

using namespace std;

ArmeFatale::ArmeFatale() : Arme("Arme Fatale"){//DONE
}

void ArmeFatale::tirer(const Coordonnees coordonnees, Grille *grille){//DONE
	if (grille->getCaseElt(coordonnees).getBateau()==nullptr)
    	grille->tirerDessus(coordonnees);
	else 
	{
		for(int i=0;i<grille->getTailleGrille().getHauteur();i++) {
			for(int j=0; j<grille->getTailleGrille().getLongueur();j++){			
				Coordonnees coord(j,i);
				if(grille->getCaseElt(coordonnees).getBateau()==grille->getCaseElt(coord).getBateau())
					grille->tirerDessus(coord);
			}
		}
	}
}
