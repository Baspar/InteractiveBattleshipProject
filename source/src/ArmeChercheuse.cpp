#include "ArmeChercheuse.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

ArmeChercheuse::ArmeChercheuse() : Arme("Arme Chercheuse"){//DONE
}



void ArmeChercheuse::tirer(Coordonnees coordonnees, Grille* grilleAdverse){//DONE
  for(int i=0; i<grilleAdverse->getTailleGrille().getHauteur(); i++){
        for(int j=0; j<grilleAdverse->getTailleGrille().getLongueur(); j++){
            Case kase = grilleAdverse->getCaseElt(Coordonnees(j, i));
            if (!kase.getTouche() && kase.getBateau()!=nullptr ){
                grilleAdverse->tirerDessus(Coordonnees(j,i));
		return;
            }
        }
    }
}
