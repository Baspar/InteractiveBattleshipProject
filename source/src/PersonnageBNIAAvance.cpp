#include "PersonnageBNIAAvance.hpp"

#include "PersonnageBN.hpp"
#include <random>
#include <iostream>

using namespace std;

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv):PersonnageBN(nomnv){//DONE
}


Coordonnees PersonnageBNIAAvance::coordonneesAViser(Grille* grilleAdverse){ //DONE
	Coordonnees impact(-1,-1);
    int hauteur = grilleAdverse->getTailleGrille().getHauteur();
    int longueur = grilleAdverse->getTailleGrille().getLongueur();
    int nbCases = hauteur*longueur;


    random_device rd;
    default_random_engine generator(rd());
    uniform_int_distribution<int> pointRandom(0, nbCases-1);

	do {
		int pointVise = pointRandom(generator);
		impact.copy(
                Coordonnees(
                    pointVise%longueur,
                    pointVise/longueur
                    )
                );
        //cout << hauteur << "x" << longueur << " = " << nbCases << "   point vise :" << pointVise << " (" << impact.getAbscisse() << ", " << impact.getOrdonnee() << ")" << endl;
	}
	while (!grilleAdverse->coupValide(impact));
	return impact ;
}

Grille PersonnageBNIAAvance::placerBateaux(){//DONE
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
