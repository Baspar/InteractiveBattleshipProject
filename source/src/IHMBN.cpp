#include "IHMBN.hpp"

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include "BatailleNavale.hpp"
#include <iostream>
#include <limits>

using namespace std;

void IHMBN::ClearScreen(){//DONE
    cout << string( 100, '\n' );
}

IHMBN::IHMBN (BatailleNavale* bn){//DONE
    batailleNavale=bn;
}

BatailleNavale* IHMBN::getBN(){//DONE
    return batailleNavale;
}

void IHMBN::afficherJeu(){//DONE
    ClearScreen();

    cout << "Legende :" << endl;
    cout << "---------" << endl;
    cout << endl;
    cout <<"   ' ' représente une case vierge, non touchée" << endl;
    cout <<"   'x' représente un bateau touché, mais non coulé" << endl;
    cout <<"   '#' représente un bateau coulé" << endl;
    cout <<"   '-' représente un coup dans l'eau" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // Affichage dizaines
    Grille* grille=getBN()->getGrilles()[getBN()->getIndiceJoueurCourant()];
    Grille* grilleAdverse=getBN()->getGrilles()[(getBN()->getIndiceJoueurCourant()+1)%2];
    cout << "Adversaire";
    for(int i=10; i<grilleAdverse->getTailleGrille().getLongueur()*2+6; i++)
        cout << " ";
    cout << "Votre grille" << endl;
    cout << "----------";
    for(int i=10; i<grilleAdverse->getTailleGrille().getLongueur()*2+6; i++)
        cout << " ";
    cout << "------------" << endl;
    cout << endl;
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
    cout << "|";
    cout << "        Bateaux adverses" << endl;

    // Affichage ligne separation
    for (int i=0;i<grilleAdverse->getTailleGrille().getLongueur();i++)
        cout << "--";
    cout << "-     ";
    if(grilleAdverse->getTailleGrille().getHauteur()>10)
        cout << " ";
    for (int i=0;i<grille->getTailleGrille().getLongueur();i++)
        cout << "--";
    cout << "-";
    cout << "        ---------------" << endl;

    vector<Bateau*> bateaux = batailleNavale->getJoueurs()[(batailleNavale->getIndiceJoueurCourant()+1)%2]->getBateaux();

    // Affichage tableau
    for (int i=0;i<max(grilleAdverse->getTailleGrille().getHauteur(), grille->getTailleGrille().getHauteur());i++){
        if(i<grilleAdverse->getTailleGrille().getHauteur()){
            for (int j=0;j<grilleAdverse->getTailleGrille().getLongueur();j++){
                Coordonnees coord(j,i);
                cout << "|";
                if(grilleAdverse->getCaseElt(coord).getBateau()!=nullptr){
                    if(grilleAdverse->getCaseElt(coord).getTouche()==false)
                        cout << " ";
                    else if(grilleAdverse->getCaseElt(coord).getBateau()->estCoule()==false)
                        cout << "x";
                    else
                        cout << "#";
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
                    else if(grille->getCaseElt(coord).getBateau()->estCoule()==false)
                        cout << "x";
                    else
                        cout << "#";
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

        if (i<bateaux.size()){
            cout << "   ";
            int tailleBateau = bateaux[i]->getTailleBateau();
            bool estCoule = bateaux[i]->estCoule();
            for(int k=0; k<tailleBateau; k++)
                cout << (estCoule?"#":"o");
        }
        cout << endl;
    }
}

Coordonnees IHMBN::saisieCoup () const{//DONE

    Coordonnees coord(-1, -1);
    do{
        cout << "Veuillez saisir les coordonnées de la case que vous souhaitez viser" << endl;
        int x;
        int y;
        while(!(cin >> x)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrée invalide, réessayez: ";
        }
        while(!(cin >> y)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrée invalide, réessayez: ";
        }
        coord.copy(Coordonnees(x,y));
        if(batailleNavale->getGrilles()[(batailleNavale->getIndiceJoueurCourant()+1)%2]->coupValide(coord)==false)
            cout << "Erreur! ";
    }
    while(batailleNavale->getGrilles()[(batailleNavale->getIndiceJoueurCourant()+1)%2]->coupValide(coord)==false);
    return coord;
}

Grille IHMBN::saisirPlacementBateaux (PersonnageBN* pers){//DONE
    ClearScreen();
    Grille grille(pers->getTailleGrille().getLongueur(),pers->getTailleGrille().getHauteur());
    cout << "DEBUT DU PLACEMENT DES BATEAUX DE " << pers->getNomBN() << endl;
    int cpt=0;
    for (Bateau* bat : pers->getBateaux()){
        ClearScreen();




        cout << "Grille personnelle" << endl;
        cout << "------------------" << endl;
        cout << endl;

        if(grille.getTailleGrille().getLongueur()>10){
            for (int i=0;i<grille.getTailleGrille().getLongueur();i++){
                cout << "|";
                if(i/10 == 0)
                    cout << " ";
                else
                    cout << i/10;
            }
            cout << "|" << endl;
        }
        for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
            cout << "|" << i%10;
        cout << "|";
        cout << "     Vos bateaux encore a placer"<< endl;

        for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
            cout << "--";

        cout << "-";
        cout << "     ---------------------------"<< endl;
        for (int i=0;i<grille.getTailleGrille().getHauteur();i++){
            for (int j=0;j<grille.getTailleGrille().getLongueur();j++){
                Coordonnees coord(j,i);
                cout << "|";
                if(grille.getCaseElt(coord).getBateau()!=nullptr){
                    if(grille.getCaseElt(coord).getTouche()==false)
                        cout << "o";
                    else cout << "x";
                }
                else {
                    if(grille.getCaseElt(coord).getTouche()==false)
                        cout << " ";
                    else cout << "-";
                }
            }
            cout << "|" << i ;
            cout << "     ";
            if(i<pers->getBateaux().size()){
                if(i==cpt)
                    cout << "-> ";
                else
                    cout << "   ";
                for(int k=0; k<pers->getBateaux()[i]->getTailleBateau(); k++)
                    if(i<cpt)
                        cout << "o";
                    else
                        cout << "#";
            }
            cout << endl;
        }
        cout<< endl << endl;
        cpt++;




        cout << "Veuillez placer le bateau de longueur "<< bat->getTailleBateau() << endl;
        cout << "Veuillez saisir les coordonnées de départ"<< endl;
        int x,y;
        while(!(cin >> x)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrée invalide, réessayez: ";
        }
        while(!(cin >> y)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrée invalide, réessayez: ";
        }
        Coordonnees coordDepart(x,y);
        cout << "Veuillez saisir les coordonnées d'arrivée" << endl;
        int a,b;
        while(!(cin >> a)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrée invalide, réessayez: ";
        }
        while(!(cin >> b)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrée invalide, réessayez: ";
        }
        Coordonnees coordArrivee(a,b);
        while(grille.placementBateauValide(bat,coordDepart,coordArrivee)==false){
            cout << "Erreur! Veuillez replacer le bateau de longueur "<< bat->getTailleBateau() <<endl;
            cout << "Veuillez resaisir les coordonnées de départ" << endl;
            int x,y;
            cin >> x;
            cin >> y;
            coordDepart.copy(Coordonnees(x,y));
            cout << "Veuillez resaisir les coordonnées d'arrivée" << endl;
            int a,b;
            cin >> a;
            cin >> b;
            coordArrivee.copy(Coordonnees(a,b));
        }
        grille.placerBateau(bat,coordDepart,coordArrivee);
    }
    cout << "FIN DU PLACEMENT DES BATEAUX DE " << pers->getNomBN() << endl << endl;
    return grille;
}

void IHMBN::afficherGrilleBateaux(Grille grille ){//DONE

    cout << "Grille personnelle" << endl;

    if(grille.getTailleGrille().getLongueur()>10){
        for (int i=0;i<grille.getTailleGrille().getLongueur();i++){
            cout << "|";
            if(i/10 == 0)
                cout << " ";
            else
                cout << i/10;
        }
        cout << "|" << endl;
    }
    for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
        cout << "|" << i%10;
    cout << "|" << endl;

    for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
        cout << "--";

    cout << "-" << endl;
    for (int i=0;i<grille.getTailleGrille().getHauteur();i++){
        for (int j=0;j<grille.getTailleGrille().getLongueur();j++){
            Coordonnees coord(j,i);
            cout << "|";
            if(grille.getCaseElt(coord).getBateau()!=nullptr){
                if(grille.getCaseElt(coord).getTouche()==false)
                    cout << "o";
                else cout << "x";
            }
            else {
                if(grille.getCaseElt(coord).getTouche()==false)
                    cout << " ";
                else cout << "-";
            }
        }
        cout << "|" << i << endl;
    }
    cout<< endl << endl;
}

void IHMBN::afficherGrilleRadar(){//DONE
    Grille grille(*getBN()->getGrilles()[(getBN()->getIndiceJoueurCourant()+1)%2]);

    if(grille.getTailleGrille().getLongueur()>10){
        for (int i=0;i<grille.getTailleGrille().getLongueur();i++){
            cout << "|";
            if(i/10 == 0)
                cout << " ";
            else
                cout << i/10;

        }
        cout << "|" << endl;
    }
    for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
        cout << "|" << i%10;
    cout << "|" << endl;

    for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
        cout << "--";
    cout << "-" << endl;

    for (int i=0;i<grille.getTailleGrille().getHauteur();i++){
        for (int j=0;j<grille.getTailleGrille().getLongueur();j++){
            Coordonnees coord(j,i);
            cout << "|";
            if(grille.getCaseElt(coord).getBateau()!=nullptr){
                if(grille.getCaseElt(coord).getTouche()==false)
                    cout << " ";
                else cout << "x";
            }
            else {
                if(grille.getCaseElt(coord).getTouche()==false)
                    cout << " ";
                else cout << "-";
            }
        }
        cout << "|" << i << endl;
    }
    cout<< endl << endl;
}

void IHMBN::afficherFinBN(){//DONE
    cout << "La partie est terminée, la flotte de " << getBN()->getJoueurs()[getBN()->getIndiceJoueurCourant()]->getNomBN() << "a été coulée! " << endl;
    cout << "La flotte de " << getBN()->getJoueurs()[(getBN()->getIndiceJoueurCourant()+1)%2]->getNomBN() << "a été victorieuse! " << endl;
}

void IHMBN::afficherResultatTour(Coordonnees coord){//DONE
    Grille grille(*getBN()->getGrilles()[getBN()->getIndiceJoueurCourant()]);
    if(grille.getCaseElt(coord).getBateau()==nullptr)
        cout << "A l'eau !!";
    else{
        if(grille.getCaseElt(coord).getBateau()->estCoule())
            cout <<"Touché coulé un bateau de taille " << grille.getCaseElt(coord).getBateau()->getTailleBateau();
        else
            cout <<"Touché";

    }
    cout << endl;
}
