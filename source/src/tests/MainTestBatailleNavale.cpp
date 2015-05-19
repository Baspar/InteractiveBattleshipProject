#include <iostream>
#include <algorithm>
#include "BatailleNavale.hpp"
#include <cstdlib>
#include "JoueurIA.hpp"
#include "ArmeCroix.hpp"
#include "JoueurIACheate.hpp"

using namespace std;

void afficher(Grille* grille, Grille* grilleAdverse){
    // Affichage dizaines
    if(grilleAdverse->getTailleGrille().getLongueur()>10 || grille->getTailleGrille().getLongueur()>10 ){
        for (int i=0;i<grilleAdverse->getTailleGrille().getLongueur();i++){
            cout << "|";
            if(i/10 == 0)
                cout << " ";
            else
                cout << i/10;

        }
        cout << "|     ";
        if(grilleAdverse->getTailleGrille().getHauteur()>10)
            cout << " ";
        for (int i=0;i<grille->getTailleGrille().getLongueur();i++){
            cout << "|";
            if(i/10 == 0)
                cout << " ";
            else
                cout << i/10;

        }
        cout << "|" << endl;
    }

    // Affichage unités
    for (int i=0;i<grilleAdverse->getTailleGrille().getLongueur();i++)
        cout << "|" << i%10;
    cout << "|     ";
    if(grilleAdverse->getTailleGrille().getHauteur()>10)
        cout << " ";
    for (int i=0;i<grille->getTailleGrille().getLongueur();i++)
        cout << "|" << i%10;
    cout << "|" << endl;

    // Affichage ligne separation
    for (int i=0;i<grilleAdverse->getTailleGrille().getLongueur();i++)
        cout << "--";
    cout << "-     ";
    if(grilleAdverse->getTailleGrille().getHauteur()>10)
        cout << " ";
    for (int i=0;i<grille->getTailleGrille().getLongueur();i++)
        cout << "--";
    cout << "-" << endl;

    // Affichage tableau
    for (int i=0;i<max(grilleAdverse->getTailleGrille().getHauteur(), grille->getTailleGrille().getHauteur());i++){
        if(i<grilleAdverse->getTailleGrille().getHauteur()){
            for (int j=0;j<grilleAdverse->getTailleGrille().getLongueur();j++){
                Coordonnees coord(j,i);
                cout << "|";
                if(grilleAdverse->getCaseElt(coord).getBateau()!=nullptr){
                    if(grilleAdverse->getCaseElt(coord).getTouche()==false)
                        cout << " ";
                    else cout << "x";
                }
                else {
                    if(grilleAdverse->getCaseElt(coord).getTouche()==false)
                        cout << " ";
                    else cout << "-";
                }
            }
            cout << "|" << i  << "    ";
            if(i<10 && grilleAdverse->getTailleGrille().getHauteur()>10)
                cout << " ";
        } else {
            for (int j=0;j<grilleAdverse->getTailleGrille().getLongueur();j++)
                cout << "  ";
            cout << "     ";
            if(grilleAdverse->getTailleGrille().getHauteur()>10)
                cout << "  ";
            else
                cout << " ";
        }
        if(i<grille->getTailleGrille().getHauteur()){
            for (int j=0;j<grille->getTailleGrille().getLongueur();j++){
                Coordonnees coord(j,i);
                cout << "|";
                if(grille->getCaseElt(coord).getBateau()!=nullptr){
                    if(grille->getCaseElt(coord).getTouche()==false)
                        cout << "o";
                    else cout << "x";
                }
                else {
                    if(grille->getCaseElt(coord).getTouche()==false)
                        cout << " ";
                    else cout << "-";
                }
            }
            cout << "|" << i  << "    ";
            if(i<10 && grille->getTailleGrille().getHauteur()>10)
                cout << " ";
        } else {
            for (int j=0;j<grille->getTailleGrille().getLongueur();j++)
                cout << "  ";
            cout << "     ";
            if(i<10 && grille->getTailleGrille().getHauteur()>10)
                cout << "  ";
            if(grille->getTailleGrille().getHauteur()>10)
                cout << " ";
        }
        cout << endl;
    }
}

int main(){
    BatailleNavale bn=BatailleNavale();
    JoueurIA pbn1("Joueur1");
    JoueurIACheate pbn2("Joueur2");
    //JoueurIA pbn1("Joueur1");

    pbn1.setTailleGrille(TailleGrille(25, 23));
    pbn1.setArme(new ArmeCroix());
    pbn2.setTailleGrille(TailleGrille(15, 13));

    bn.initialiserJoueurCourant((PersonnageBN*)&pbn1,(PersonnageBN*)&pbn2);

    bn.getGrilles()[0]->copy(pbn1.placerBateaux());
    bn.getGrilles()[1]->copy(pbn2.placerBateaux());

    int coups=0;
    while(bn.retournerGagnant() == nullptr){
        if(coups%2==0){
            system("sleep 0.1");
            system("clear");
        }
        coups++;
        int joueurCourant = bn.getIndiceJoueurCourant();
        int joueurNonCourant = (joueurCourant+1)%2;
        cout << bn.getJoueurs()[joueurCourant]->getNomBN() << ", à votre tour de jouer." << endl;

        Grille* grilleCourante = bn.getGrilles()[joueurCourant];
        Grille* grilleAdverse = bn.getGrilles()[joueurNonCourant];
        afficher(grilleCourante, grilleAdverse);

        Coordonnees coord = bn.getJoueurs()[joueurCourant]->coordonneesAViser(grilleAdverse);

        cout << "Vous jouez en (" << coord.getAbscisse() << ", " << coord.getOrdonnee() << ")" << endl << endl;

        bn.jouer(coord);
    }

    cout << "Le gagnant est " << bn.retournerGagnant()->getNomBN() << " en " << (coups/2) << " coups."<< endl;
}
