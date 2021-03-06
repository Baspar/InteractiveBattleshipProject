#include <iostream>
#include <algorithm>
#include <cstdlib>
#include "IHMBN.hpp"
#include "PersonnageNonJouable.hpp"
#include "JoueurHumain.hpp"
#include "Coordonnees.hpp"
#include "Carte.hpp"
#include "JoueurIA.hpp"


using namespace std;

int main(){
	BatailleNavale bn=BatailleNavale();
	Carte* cD = new Carte(0,{{'#','_','#'},{'#','_','#'},{'#','_','_'}});
	JoueurIA* pbn1=new JoueurIA("Joueur1");
	
    JoueurHumain* pbn2= new JoueurHumain("Joueur2",Coordonnees(1,1), cD);

    pbn1->setTailleGrille(TailleGrille(10, 10));
    pbn2->setTailleGrille(TailleGrille(10, 10));

    bn.initialiserJoueurCourant((PersonnageBN*) pbn1, (PersonnageBN*) pbn2);

	IHMBN* i=new IHMBN(&bn);

	bn.getGrilles()[0]->copy(pbn1->placerBateaux());
    bn.getGrilles()[1]->copy(i->saisirPlacementBateaux(bn.getJoueurs()[1]));

	while(bn.retournerGagnant()==nullptr){
		bn.jouer(((JoueurIA*) pbn1)->coordonneesAViser(bn.getGrilles()[(bn.getIndiceJoueurCourant()+1)%2]));
		i->afficherJeu();
		Coordonnees coord=i->saisieCoup();
		bn.jouer(coord);
		i->afficherJeu();
		i->afficherResultatTour(coord);
	}
	i->afficherFinBN();
    
}
