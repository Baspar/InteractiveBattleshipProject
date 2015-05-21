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


void PersonnageBNIAAvance::addCases(const Coordonnees c){
casesT.push_back(c);
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
    if (grilleAdverse->getCaseElt(casesT[i]).getBateau()->estCoule())
        casesT.erase(casesT.begin());
}
 //On tire aléatoirement si la case precedente n'a pas ete touchee
if (casesT.size()==0){
    solution.copy(tirerAleatoirement(grilleAdverse));
    casePrecedente.copy(solution);
    return solution;
}
if (casesT.size()==1){
            Coordonnees coordonneesN(casesT[0].getAbscisse(),casesT[0].getOrdonnee()+1);
            Coordonnees coordonneesS(casesT[0].getAbscisse(),casesT[0].getOrdonnee()-1);
            Coordonnees coordonneesE(casesT[0].getAbscisse()+1,casesT[0].getOrdonnee());
            Coordonnees coordonneesO(casesT[0].getAbscisse()-1,casesT[0].getOrdonnee());
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
if (casesT.size()>1){
        solution.setAbscisse(casesT[0].getAbscisse());
        solution.setOrdonnee(casesT[0].getOrdonnee()+1);
        while(!grilleAdverse->coupValide(solution)){
            solution.setOrdonnee(casesT[0].getOrdonnee()+1);
        }
        if(grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
        }
        else{
            solution.setOrdonnee(casesT[0].getOrdonnee()-1);
            while(!grilleAdverse->coupValide(solution)){
                solution.setOrdonnee(casesT[0].getOrdonnee()-1);
            }
            if(grilleAdverse->coupValide(solution)){
            casePrecedente.copy(solution);
            return solution;
            }
            else{
                solution.setOrdonnee(casesT[0].getOrdonnee());
                solution.setOrdonnee(casesT[0].getAbscisse()+1);
                while(!grilleAdverse->coupValide(solution)){
                    solution.setOrdonnee(casesT[0].getAbscisse()+1);
                }
                if(grilleAdverse->coupValide(solution)){
                    casePrecedente.copy(solution);
                    return solution;
                }
                else{
                    solution.setOrdonnee(casesT[0].getOrdonnee());
                    solution.setOrdonnee(casesT[0].getAbscisse()-1);
                    while(!grilleAdverse->coupValide(solution)){
                        solution.setOrdonnee(casesT[0].getAbscisse()-1);
                    }
                 casePrecedente.copy(solution);
                 return solution;
                }
            }
        }
}
}


//Coordonnees PersonnageBNIAAvance::coordonneesAViser(Grille* grilleAdverse){//DONE
//    int hauteur=grilleAdverse->getTailleGrille().getHauteur();
//    int longueur=grilleAdverse->getTailleGrille().getLongueur();
//    for(int i=0; i<hauteur; i++){
//        for(int j=0; j<longueur; j++){
//            Coordonnees coord(j, i);
//            if (grilleAdverse->getCaseElt(coord).getToucheBateau() && !grilleAdverse->getCaseElt(coord).getBateau()->estCoule()){
//                Coordonnees coordN(coord.getAbscisse(),coord.getOrdonnee());
//                Coordonnees coordS(coord.getAbscisse(),coord.getOrdonnee());
//                Coordonnees coordE(coord.getAbscisse(),coord.getOrdonnee());
//                Coordonnees coordO(coord.getAbscisse(),coord.getOrdonnee());
//
//                while(grilleAdverse->caseValide(coordS) && grilleAdverse->getCaseElt(coordS).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordS).getToucheBateau() && !grilleAdverse->getCaseElt(coordS).getBateau()->estCoule()){
//                    coordS.setOrdonnee(coordS.getOrdonnee()+1);
//                    if(grilleAdverse->caseValide(coordS) && !grilleAdverse->getCaseElt(coordS).getTouche())
//                        return coordS;
//                }
//
//                while(grilleAdverse->caseValide(coordN) && grilleAdverse->getCaseElt(coordN).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordN).getToucheBateau() && !grilleAdverse->getCaseElt(coordN).getBateau()->estCoule()){
//                    coordN.setOrdonnee(coordN.getOrdonnee()-1);
//                    if(grilleAdverse->caseValide(coordN) && !grilleAdverse->getCaseElt(coordN).getTouche())
//                        return coordN;
//                }
//
//                while(grilleAdverse->caseValide(coordE) && grilleAdverse->getCaseElt(coordE).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordE).getToucheBateau() && !grilleAdverse->getCaseElt(coordE).getBateau()->estCoule()){
//                    coordE.setAbscisse(coordE.getAbscisse()+1);
//                    if(grilleAdverse->caseValide(coordE) && !grilleAdverse->getCaseElt(coordE).getTouche())
//                        return coordE;
//                }
//
//                while(grilleAdverse->caseValide(coordO) && grilleAdverse->getCaseElt(coordO).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordO).getToucheBateau() && !grilleAdverse->getCaseElt(coordO).getBateau()->estCoule()){
//                    coordO.setAbscisse(coordO.getAbscisse()-1);
//                    if(grilleAdverse->caseValide(coordO) && !grilleAdverse->getCaseElt(coordO).getTouche())
//                        return coordO;
//                }
//            }
//        }
//    }
//    return tirerAleatoirement(grilleAdverse);
//}



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
