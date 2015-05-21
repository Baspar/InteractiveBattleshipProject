#include "ArmeClassique.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

#include "ArmeChercheuse.hpp"

using namespace std;

ArmeChercheuse::ArmeChercheuse() : Arme("Arme Chercheuse"){//DONE
}



void ArmeChercheuse::coordonneesAViser(Grille* grilleAdverse){ //DONE
  for(int i=0; i<grilleAdverse->getTailleGrille().getHauteur(); i++){
        for(int j=0; j<grilleAdverse->getTailleGrille().getLongueur(); j++){
            Case kase = grilleAdverse->getCaseElt(Coordonnees(j, i));
            if (!kase.getTouche() && kase.getBateau()!=nullptr ){
                grille->tirerDessus(Coordonnees(j,i));
            }
        }
    }
}
