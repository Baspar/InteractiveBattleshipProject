#include "PersonnageBNIACheate.hpp"

#include "PersonnageBN.hpp"
#include "Case.hpp"
#include <random>
#include <iostream>

using namespace std;

PersonnageBNIACheate::PersonnageBNIACheate(string nomnv):PersonnageBN(nomnv){//DONE
}


Coordonnees PersonnageBNIACheate::coordonneesAViser(Grille* grilleAdverse){ //DONE
    for(int i=0; i<grilleAdverse->getTailleGrille().getHauteur(); i++){
        for(int j=0; j<grilleAdverse->getTailleGrille().getLongueur(); j++){
            Case kase = grilleAdverse->getCaseElt(Coordonnees(j, i));
            if (!kase.getTouche() && kase.getBateau()!=nullptr ){
                return Coordonnees(j, i);
            }
        }
    }
    return Coordonnees(-1, -1);
}

Grille PersonnageBNIACheate::placerBateaux(){//DONE
	Grille grilleIA(getTailleGrille().getLongueur(), getTailleGrille().getHauteur());
	Coordonnees coordDebut(-1,-1), coordFin(-1,-1);
	int nbCases = grilleIA.getTailleGrille().getHauteur() * grilleIA.getTailleGrille().getLongueur();

    random_device rd;
    default_random_engine generator(rd());
    uniform_int_distribution<int> directionRandom(1,4);
    uniform_int_distribution<int> pointRandom(0, nbCases);

	for (Bateau* bat : getBateaux()){
		bool toutvabien = false;
		while (toutvabien == false)
		{
			int pointDepart = pointRandom(generator);
			coordDebut.copy(Coordonnees(pointDepart%grilleIA.getTailleGrille().getHauteur(), pointDepart/grilleIA.getTailleGrille().getLongueur()));
			int direction = directionRandom(generator);
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

    return grilleIA;
}
