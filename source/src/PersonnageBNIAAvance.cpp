#include "PersonnageBNIAAvance.hpp"

#include "Coordonnees.hpp"
#include "PersonnageBN.hpp"
#include <random>
#include <iostream>

using namespace std;

PersonnageBNIAAvance::PersonnageBNIAAvance(string nomnv):PersonnageBN(nomnv),caseTouchee(0,0),casePrecedente(0,0){//DONE
}

//Coordonnees PersonnageBNIAAvance::getCaseTouchee(){//Done
//    return caseTouchee;
//}
//
//void PersonnageBNIAAvance::setCaseTouchee(Coordonnees c){//Done
//    caseTouchee.copy(c);
//}

Coordonnees PersonnageBNIAAvance::getCasePrecedente(){//Done
    return casePrecedente;
}

void PersonnageBNIAAvance::setCasePrecedente(Coordonnees c){//Done
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

    Coordonnees solution(0,0);
    cout<<"Entree"<<endl;
//Si la case precedente est touchee je rentre dans la boucle
    if (grilleAdverse->getCaseElt(casePrecedente).getToucheBateau()){
    cout<<"salut léo"<<endl;
//Je prepare le sondage des cases aux alentours
    Coordonnees coordonneesN(casePrecedente.getAbscisse(),casePrecedente.getOrdonnee()+1);
    Coordonnees coordonneesS(casePrecedente.getAbscisse(),casePrecedente.getOrdonnee()-1);
    Coordonnees coordonneesE(casePrecedente.getAbscisse()+1,casePrecedente.getOrdonnee());
    Coordonnees coordonneesO(casePrecedente.getAbscisse()-1,casePrecedente.getOrdonnee());
    cout<<"Affectation réussie"<<endl;
        //Tant que le bateau n'est pas coule je le sonde
        if (!grilleAdverse->getCaseElt(casePrecedente).getBateau()->estCoule()){
    cout<<"Entree dans la boucle de sondage"<<endl;
            //Si aucune case autour de la case touchee nest touchee je teste la validite
            if (aucuneToucheeAutour(grilleAdverse,casePrecedente).coordonneesVides()){
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
                cout<<"Sortie dans la boucle de sondage"<< endl;
                cout<<aucuneToucheeAutour(grilleAdverse,casePrecedente).coordonneesVides();
            }



            else{

            //Sinon je sonde de haut en bas si le cas est échéant
            if (aucuneToucheeAutour(grilleAdverse,casePrecedente).getAbscisse()==casePrecedente.getAbscisse()){
                cout<<"Entree dans la boucle de vertical"<<endl;
                solution.setAbscisse(aucuneToucheeAutour(grilleAdverse,casePrecedente).getAbscisse());
                solution.setOrdonnee(aucuneToucheeAutour(grilleAdverse,casePrecedente).getOrdonnee()+1);
            //Tant que la case est touchee j'avance
                while (grilleAdverse->coupValide(solution)&&grilleAdverse->getCaseElt(solution).getToucheBateau())
                    solution.setOrdonnee(solution.getOrdonnee()+1);
            //Si la case trouvee n'est pas valide je parcours dans l'autre sens
                if (!grilleAdverse->coupValide(solution))
                    solution.setOrdonnee(aucuneToucheeAutour(grilleAdverse,casePrecedente).getOrdonnee()-1);
            //Tant que la case est touchee je continue
                while (grilleAdverse->coupValide(solution)&&grilleAdverse->getCaseElt(solution).getToucheBateau())
                    solution.setOrdonnee(solution.getOrdonnee()-1);
            //Si la case est non valide la solution est au hasard
                if (!grilleAdverse->coupValide(solution)) solution.copy(tirerAleatoirement(grilleAdverse));

            }
            else{
            //Sinon je sonde de gauche à droite
                solution.setOrdonnee(aucuneToucheeAutour(grilleAdverse,casePrecedente).getAbscisse());
                solution.setAbscisse(aucuneToucheeAutour(grilleAdverse,casePrecedente).getAbscisse()+1);
            //Tant que la case est touchee j'avance
                while (grilleAdverse->coupValide(solution)&&grilleAdverse->getCaseElt(solution).getToucheBateau())
                    solution.setOrdonnee(solution.getAbscisse()+1);
            //Si la case trouvee n'est pas valide je parcours dans l'autre sens
                if (!grilleAdverse->coupValide(solution))
                    solution.setAbscisse(aucuneToucheeAutour(grilleAdverse,casePrecedente).getAbscisse()-1);
            //Tant que la case est touchee je continue
                while (grilleAdverse->coupValide(solution)&&grilleAdverse->getCaseElt(solution).getToucheBateau())
                    solution.setAbscisse(solution.getAbscisse()-1);
            //Si la case est non valide la solution est au hasard
                if (!grilleAdverse->coupValide(solution))
                    solution.copy(tirerAleatoirement(grilleAdverse));
            }
                cout<<"Sortie du double sondage"<<endl;
        }
        cout<<"Sortie du sondage"<<endl;
        }
            casePrecedente.copy(solution);
            cout<<"Fin"<<endl;
            return solution;
        }

    else{
        solution.copy(tirerAleatoirement(grilleAdverse));
    casePrecedente.copy(solution);
    }
    return solution;
}

/*Coordonnees PersonnageBNIAAvance::coordonneesAViser(Grille* grilleAdverse){//DONE
    int hauteur=grilleAdverse->getTailleGrille().getHauteur();
    int longueur=grilleAdverse->getTailleGrille().getLongueur();
    for(int i=0; i<hauteur; i++){
        for(int j=0; j<longueur; j++){
            Coordonnees coord(j, i);
            if (grilleAdverse->getCaseElt(coord).getToucheBateau() && !grilleAdverse->getCaseElt(coord).getBateau()->estCoule()){
                Coordonnees coordN(coord.getAbscisse(),coord.getOrdonnee());
                Coordonnees coordS(coord.getAbscisse(),coord.getOrdonnee());
                Coordonnees coordE(coord.getAbscisse(),coord.getOrdonnee());
                Coordonnees coordO(coord.getAbscisse(),coord.getOrdonnee());

                while(grilleAdverse->caseValide(coordS) && grilleAdverse->getCaseElt(coordS).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordS).getToucheBateau() && !grilleAdverse->getCaseElt(coordS).getBateau()->estCoule()){
                    coordS.setOrdonnee(coordS.getOrdonnee()+1);
                    if(grilleAdverse->caseValide(coordS) && !grilleAdverse->getCaseElt(coordS).getTouche())
                        return coordS;
                }

                while(grilleAdverse->caseValide(coordN) && grilleAdverse->getCaseElt(coordN).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordN).getToucheBateau() && !grilleAdverse->getCaseElt(coordN).getBateau()->estCoule()){
                    coordN.setOrdonnee(coordN.getOrdonnee()-1);
                    if(grilleAdverse->caseValide(coordN) && !grilleAdverse->getCaseElt(coordN).getTouche())
                        return coordN;
                }

                while(grilleAdverse->caseValide(coordE) && grilleAdverse->getCaseElt(coordE).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordE).getToucheBateau() && !grilleAdverse->getCaseElt(coordE).getBateau()->estCoule()){
                    coordE.setAbscisse(coordE.getAbscisse()+1);
                    if(grilleAdverse->caseValide(coordE) && !grilleAdverse->getCaseElt(coordE).getTouche())
                        return coordE;
                }

                while(grilleAdverse->caseValide(coordO) && grilleAdverse->getCaseElt(coordO).getBateau()!=nullptr && grilleAdverse->getCaseElt(coordO).getToucheBateau() && !grilleAdverse->getCaseElt(coordO).getBateau()->estCoule()){
                    coordO.setAbscisse(coordO.getAbscisse()-1);
                    if(grilleAdverse->caseValide(coordO) && !grilleAdverse->getCaseElt(coordO).getTouche())
                        return coordO;
                }
            }
        }
    }
    return tirerAleatoirement(grilleAdverse);
}*/

Coordonnees PersonnageBNIAAvance::aucuneToucheeAutour(Grille* grille,Coordonnees coordonneesCT){//DONE
    Coordonnees coordVides(-1, -1);
    Coordonnees coordonneesN(coordonneesCT.getAbscisse(),coordonneesCT.getOrdonnee()+1);
    Coordonnees coordonneesS(coordonneesCT.getAbscisse(),coordonneesCT.getOrdonnee()-1);
    Coordonnees coordonneesE(coordonneesCT.getAbscisse()+1,coordonneesCT.getOrdonnee());
    Coordonnees coordonneesO(coordonneesCT.getAbscisse()-1,coordonneesCT.getOrdonnee());

    if (grille->caseValide(coordonneesN)&&grille->getCaseElt(coordonneesN).getToucheBateau()) return coordonneesN;
    if (grille->caseValide(coordonneesS)&&grille->getCaseElt(coordonneesS).getToucheBateau()) return coordonneesS;
    if (grille->caseValide(coordonneesE)&&grille->getCaseElt(coordonneesE).getToucheBateau()) return coordonneesE;
    if (grille->caseValide(coordonneesO)&&grille->getCaseElt(coordonneesO).getToucheBateau()) return coordonneesO;

    return coordVides;
    //Renvoie une case bateau qui est touchee ou qui est vide
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
