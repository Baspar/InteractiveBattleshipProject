#include "PersonnageBNIAAvance.hpp"

#include "Coordonnees.hpp"
#include "PersonnageBN.hpp"
#include <random>
#include <iostream>

using namespace std;

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv):PersonnageBN(nomnv), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, int l, int h, Arme* a):PersonnageBN(nomnv, l, h, a), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, Arme* a):PersonnageBN(nomnv, a), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, int l, int h):PersonnageBN(nomnv, l, h), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, vector<int> tBateaux):PersonnageBN(nomnv, tBateaux), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBN(nomnv, l, h, tBateaux, a), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBN(nomnv, tBateaux, a), casePrecedente(0, 0){//DONE
}

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBN(nomnv, l, h, tBateaux), casePrecedente(0, 0){//DONE
}

void PersonnageBNIAAvance::addCases(const Coordonnees c){//DONE
    casesT.push_back(c);
}

Coordonnees PersonnageBNIAAvance::getCases(const int c) const{
return casesT[c];
}

Coordonnees PersonnageBNIAAvance::getCasePrecedente(){//DONE
    return casePrecedente;
}

void PersonnageBNIAAvance::setCasePrecedente(Coordonnees c){//DONE
    casePrecedente.copy(c);
}

Coordonnees PersonnageBNIAAvance::tirerAleatoirement(Grille* grilleAdverse){ //DONE
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
    }
    while (!grilleAdverse->coupValide(impact) || ( (impact.getAbscisse()+impact.getOrdonnee()) %2==1));
    return impact ;
}

Coordonnees PersonnageBNIAAvance::coordonneesAViser(Grille* grilleAdverse){//WIP
//Initialisation de la solution
Coordonnees solution(0,0);
int i;
//On regarde si la case prevedente a ete touchee
if (grilleAdverse->caseValide(casePrecedente)&&grilleAdverse->getCaseElt(casePrecedente).getToucheBateau())
    addCases(casePrecedente);
for (i=0;i<casesT.size();i++){
    if (grilleAdverse->getCaseElt(casePrecedente).getBateau()->estCoule())
        casesT.erase(casesT.begin()+i-1);
}
 //On tire aléatoirement si la case precedente n'a pas ete touchee
if (casesT.size()==0){
    solution.copy(tirerAleatoirement(grilleAdverse));
    casePrecedente.copy(solution);
    return solution;
}
if (casesT.size()>0&&casesT.size()<2){
            Coordonnees coordonneesN(getCases(0).getAbscisse(),getCases(0).getOrdonnee()+1);
            Coordonnees coordonneesS(getCases(0).getAbscisse(),getCases(0).getOrdonnee()-1);
            Coordonnees coordonneesE(getCases(0).getAbscisse()+1,getCases(0).getOrdonnee());
            Coordonnees coordonneesO(getCases(0).getAbscisse()-1,getCases(0).getOrdonnee());
            if(grilleAdverse->coupValide(coordonneesN))
                solution.copy(coordonneesN);
            if(grilleAdverse->coupValide(coordonneesS))
                solution.copy(coordonneesS);
            if(grilleAdverse->coupValide(coordonneesE))
                solution.copy(coordonneesE);
            if(grilleAdverse->coupValide(coordonneesO))
                solution.copy(coordonneesO);
            casePrecedente.copy(solution);
            return solution;
        }
if (casesT.size()>2){
    if(casesT[0].getAbscisse()==casesT[1].getAbscisse()){
        solution.setAbscisse(casesT[1].getAbscisse());
        solution.setOrdonnee(casesT[1].getOrdonnee()+casesT[1].getOrdonnee()-casesT[0].getOrdonnee());
        if (grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }
        else{
        solution.setOrdonnee(casesT[0].getOrdonnee()+casesT[0].getOrdonnee()-casesT[1].getOrdonnee());
        };
        if (grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }else{
        solution.setAbscisse(casesT[0].getAbscisse()+1);
        solution.setOrdonnee(casesT[0].getOrdonnee());
        };
        if (grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }else{
        solution.setAbscisse(casesT[0].getAbscisse()-1);
        solution.setOrdonnee(casesT[0].getOrdonnee());
        casePrecedente.copy(solution);
        return solution;
        }

    }

    if(casesT[0].getOrdonnee()==casesT[1].getOrdonnee()){
        solution.setOrdonnee(casesT[1].getOrdonnee());
        solution.setAbscisse(casesT[1].getAbscisse()+casesT[1].getAbscisse()-casesT[0].getAbscisse());
        if (grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }
        else{
            solution.setAbscisse(casesT[0].getAbscisse()+casesT[0].getAbscisse()-casesT[1].getAbscisse());
        };
        if (grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }else{
        solution.setAbscisse(casesT[0].getAbscisse());
        solution.setOrdonnee(casesT[0].getOrdonnee()+1);
        };
        if (grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }else{
        solution.setAbscisse(casesT[0].getAbscisse());
        solution.setOrdonnee(casesT[0].getOrdonnee()-1);
        casePrecedente.copy(solution);
        return solution;
        }
    }

}

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
