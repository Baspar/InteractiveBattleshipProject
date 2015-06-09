#include "IHMBN.hpp"

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include "BatailleNavale.hpp"
#include <iostream>

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
	 // Affichage dizaines
   Grille* grille=getBN()->getGrilles()[getBN()->getIndiceJoueurCourant()];
   Grille* grilleAdverse=getBN()->getGrilles()[(getBN()->getIndiceJoueurCourant()+1)%2];
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
    cout << "Adversaire";
    for(int i=10; i<grilleAdverse->getTailleGrille().getLongueur()*2+6; i++)
        cout << " ";
    cout << "Votre grille" << endl;
    cout << "----------";
    for(int i=10; i<grilleAdverse->getTailleGrille().getLongueur()*2+6; i++)
        cout << " ";
    cout << "------------" << endl;
    cout << endl;
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
        cout << endl;
    }
}

Coordonnees IHMBN::saisieCoup () const{//DONE

	Coordonnees coord(-1, -1);
	do{
		cout << "Veuillez saisir les coordonnées de la case que vous souhaitez viser" << endl;
		int x;
		int y;
		cin >> x;
		cin >> y;
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
	afficherGrilleBateaux(grille);
	cout << "DEBUT DU PLACEMENT DES BATEAUX DE " << pers->getNomBN() << endl;
	for (Bateau* bat : pers->getBateaux()){
		cout << "Veuillez placer le bateau de longueur "<< bat->getTailleBateau() << endl;
		cout << "Veuillez saisir les coordonnées de départ"<< endl;
		int x,y;
		cin >> x;
		cin >> y;
		Coordonnees coordDepart(x,y);
		cout << "Veuillez saisir les coordonnées d'arrivée" << endl;
		int a,b;
		cin >> a;
		cin >> b;
		Coordonnees coordArrivee(a,b);
		while(grille.placementBateauValide(bat,coordDepart,coordArrivee)==false){
			cout << "Erreur! Veuillez replacer le bateau de longueur "<< bat->getTailleBateau() <<endl;
			cout << "Veuillez resaisir les coordonnées de départ";
			int x,y;
			cin >> x;
			cin >> y;
			coordDepart.copy(Coordonnees(x,y));
			cout << "Veuillez resaisir les coordonnées d'arrivée";
			int a,b;
			cin >> a;
			cin >> b;
			coordArrivee.copy(Coordonnees(a,b));
		}
	grille.placerBateau(bat,coordDepart,coordArrivee);
	afficherGrilleBateaux(grille);
	}
	cout << "FIN DU PLACEMENT DES BATEAUX DE " << pers->getNomBN() << endl << endl;
    return grille;
}

void IHMBN::afficherGrilleBateaux(Grille grille ){//DONE

	cout << endl << "Grille personnelle" << endl;

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
