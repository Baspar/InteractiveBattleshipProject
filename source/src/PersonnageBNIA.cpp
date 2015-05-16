#include "PersonnageBNIA.hpp"

#include "PersonnageBN.hpp"
#include <stdlib.h>     
#include <time.h> 

using namespace std;
Coordonnees PersonnageBNIA::coordonneesAViser(Grille* grilleAdverse){ //DONE
	Coordonnees impact(-1,-1);
	do {
		srand(time(NULL)); 
		int nbCases = grilleAdverse->getTailleGrille().getHauteur()* grilleAdverse->getTailleGrille().getLongueur(); 
		int pointVise = rand()%nbCases; 
		impact.copy(Coordonnees(pointVise%grilleAdverse->getTailleGrille().getHauteur(),pointVise/grilleAdverse->getTailleGrille().getLongueur()));
	}
	while (!grilleAdverse->coupValide(impact));
	return impact ; 
}

Grille PersonnageBNIA::placerBateaux(){//DONE
	
	Grille grilleIA(getTailleGrille().getLongueur(), getTailleGrille().getHauteur());
	Coordonnees coordDebut(-1,-1), coordFin(-1,-1);
	srand(time(NULL));
	int nbCases = grilleIA.getTailleGrille().getHauteur() * grilleIA.getTailleGrille().getLongueur();
	for (Bateau* bat : getBateaux()){
		bool toutvabien = false;
		while (toutvabien == false)
		{
			int pointDepart = rand()%nbCases;
			coordDebut.copy(Coordonnees(pointDepart%grilleIA.getTailleGrille().getHauteur(), pointDepart/grilleIA.getTailleGrille().getLongueur()));
			int direction = rand()%4;
			int x,y;
			switch(direction)
			{
				case 1 :
					x = coordDebut.getAbscisse();
					y = coordFin.getOrdonnee() + bat->getTailleBateau()- 1;
					break ;
				case 2 :
					x = coordDebut.getAbscisse()+ bat->getTailleBateau()- 1;
					y = coordFin.getOrdonnee();
					break ;
				case 3 :
					x = coordDebut.getAbscisse();
					y = coordFin.getOrdonnee() - bat->getTailleBateau() + 1;
					break ;
				case 4 :
					x = coordDebut.getAbscisse() - bat->getTailleBateau() + 1;
					y = coordFin.getOrdonnee();
					break ;
			}
			coordFin.copy(Coordonnees(x,y));
			toutvabien = grilleIA.placementBateauValide(bat, coordDebut, coordFin);
		}
		grilleIA.placerBateau(bat, coordDebut, coordFin);
	}
}
