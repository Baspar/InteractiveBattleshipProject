#include "PersonnageBNIAAvance.hpp"

#include "Coordonnees.hpp"
#include "PersonnageBN.hpp"
#include <random>
#include <iostream>

using namespace std;

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv):PersonnageBN(nomnv),caseTouchee(0,0){//DONE
}

Coordonnees PersonnageBNIAAvance::getCaseTouchee(){//Done
    return caseTouchee;
}

void PersonnageBNIAAvance::setCaseTouchee(Coordonnees c){//Done
    caseTouchee.copy(c);
}


Coordonnees PersonnageBNIAAvance::coordonneesAViser1(Grille* grilleAdverse){ //DONE
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

Coordonnees PersonnageBNIAAvance::coordonneesAViser(Grille* grilleAdverse){//WIP
    Coordonnees coordAViser(-1,-1);
    Coordonnees coordonneesTouchee(caseTouchee);
    Coordonnees coordonneesN(coordonneesTouchee.getAbscisse(),coordonneesTouchee.getOrdonnee()+1);
    Coordonnees coordonneesS(coordonneesTouchee.getAbscisse(),coordonneesTouchee.getOrdonnee()-1);
    Coordonnees coordonneesE(coordonneesTouchee.getAbscisse()+1,coordonneesTouchee.getOrdonnee());
    Coordonnees coordonneesO(coordonneesTouchee.getAbscisse()-1,coordonneesTouchee.getOrdonnee());
    Coordonnees solution(0,0);
    Coordonnees casePrecedente(0,0);

if (grilleAdverse->getCaseElt(casePrecedente).getTouche()) caseTouchee.copy(casePrecedente);

if (grilleAdverse->getCaseElt(coordonneesTouchee).getTouche()){
    while (!grilleAdverse->getCaseElt(coordonneesTouchee).getBateau()->estCoule()){
        if (aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).coordonneesVides()){
            if (grilleAdverse->coupValide(coordonneesN))
                solution.copy(coordonneesN);
            else
                if (grilleAdverse->coupValide(coordonneesS))
                    solution.copy(coordonneesS);
                else
                    if (grilleAdverse->coupValide(coordonneesE))
                        solution.copy(coordonneesE);
                    else
                        if (grilleAdverse->coupValide(coordonneesO))
                            solution.copy(coordonneesO);
        }


        if (aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getAbscisse()==coordonneesTouchee.getAbscisse()){
            coordAViser.setAbscisse(aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getAbscisse());
            coordAViser.setOrdonnee(aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getOrdonnee()+1);

            while (grilleAdverse->getCaseElt(coordAViser).getTouche()){
                coordAViser.setOrdonnee(coordAViser.getOrdonnee()+1);
            }
            if (!grilleAdverse->coupValide(coordAViser))
                coordAViser.setOrdonnee(aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getOrdonnee()-1);
                while (grilleAdverse->getCaseElt(coordAViser).getTouche())
                    coordAViser.setOrdonnee(coordAViser.getOrdonnee()-1);
            if (!grilleAdverse->coupValide(coordAViser)) solution.copy(coordonneesAViser1(grilleAdverse));
        }
        else{
            coordAViser.setOrdonnee(aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getAbscisse());
            coordAViser.setAbscisse(aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getAbscisse()+1);
            while (grilleAdverse->getCaseElt(coordAViser).getTouche())
                coordAViser.setOrdonnee(coordAViser.getAbscisse()+1);
            if (!grilleAdverse->coupValide(coordAViser))
                    coordAViser.setAbscisse(aucuneToucheeAutour(grilleAdverse,coordonneesTouchee).getAbscisse()-1);
                    while (!grilleAdverse->coupValide(coordAViser))
                        coordAViser.setAbscisse(coordAViser.getAbscisse()-1);
            if (!grilleAdverse->coupValide(coordAViser))
                solution.copy(coordonneesAViser1(grilleAdverse));
        }
    }

 if (!coordAViser.coordonneesVides())
    solution.copy(coordAViser);
else
    solution.copy(coordonneesAViser1(grilleAdverse));

}
else
    solution.copy(coordonneesAViser1(grilleAdverse));
    casePrecedente.copy(solution);
    return solution;
}

Coordonnees PersonnageBNIAAvance::aucuneToucheeAutour(Grille* grille,Coordonnees coordonneesCT){//Done
    Coordonnees coordVides(-1, -1);
    Coordonnees coordonneesN(coordonneesCT.getAbscisse(),coordonneesCT.getOrdonnee()+1);
    Coordonnees coordonneesS(coordonneesCT.getAbscisse(),coordonneesCT.getOrdonnee()-1);
    Coordonnees coordonneesE(coordonneesCT.getAbscisse()+1,coordonneesCT.getOrdonnee());
    Coordonnees coordonneesO(coordonneesCT.getAbscisse()-1,coordonneesCT.getOrdonnee());

    if (grille->caseValide(coordonneesN)&&grille->getCaseElt(coordonneesN).getTouche()) return coordonneesN;
    if (grille->caseValide(coordonneesS)&&grille->getCaseElt(coordonneesS).getTouche()) return coordonneesS;
    if (grille->caseValide(coordonneesE)&&grille->getCaseElt(coordonneesE).getTouche()) return coordonneesE;
    if (grille->caseValide(coordonneesO)&&grille->getCaseElt(coordonneesO).getTouche()) return coordonneesO;

    return coordVides;

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
