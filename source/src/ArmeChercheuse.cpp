#include "ArmeChercheuse.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

ArmeChercheuse::ArmeChercheuse() : Arme("Arme Chercheuse"){//DONE
}



void ArmeChercheuse::tirer(Coordonnees coordonnees, Grille* grille){//DONE
    for(int i=0; i<grille->getTailleGrille().getHauteur(); i++){
        for(int j=0; j<grille->getTailleGrille().getLongueur(); j++){
            Case kase = grille->getCaseElt(Coordonnees(j, i));
            if (!kase.getTouche() && kase.getBateau()!=nullptr ){
                grille->tirerDessus(Coordonnees(j,i));
                return;
            }
        }
    }
}
