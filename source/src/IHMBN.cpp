#include "IHMBN.hpp"

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include "BatailleNavale.hpp"
#include <iostream>

using namespace std;
IHMBN::IHMBN (BatailleNavale* bn){//DONE
	batailleNavale=bn;
}

BatailleNavale* IHMBN::getBN(){//DONE
	return batailleNavale;
}

void IHMBN::afficherJeu (){//WIP
	afficherGrilleBateaux();
	afficherGrilleRadar();
}

Coordonnees IHMBN::saisieCoup () const{//DONE

	Coordonnees coord(-1, -1);
	do{
		cout << "Veuillez saisir les coordonnées de la case que vous souhaitez viser";
		int x;
		int y;
		cin >> x;
		cin >> y;
		coord.copy(Coordonnees(x,y));
		if(batailleNavale->getGrilles()[batailleNavale->getIndiceJoueurCourant()].coupValide(coord)==false)
			cout << "Erreur! ";
	}
	while(batailleNavale->getGrilles()[batailleNavale->getIndiceJoueurCourant()].coupValide(coord)==false);
	return coord;
}

Grille IHMBN::saisirPlacementBateaux (PersonnageBN* pers){//DONE
	Grille grille(pers->getTailleGrille().getLongueur(),pers->getTailleGrille().getHauteur());
	for (Bateau* bat : pers->getBateaux()){
		cout << "Veuillez placer le bateau de longueur "<< bat->getTailleBateau();
		cout << "Veuillez saisir les coordonnées de départ";
		int x,y;
		cin >> x;
		cin >> y;
		Coordonnees coordDepart(x,y);
		cout << "Veuillez saisir les coordonnées d'arrivée";
		int a,b;
		cin >> a;
		cin >> b;
		Coordonnees coordArrivee(a,b);
		grille.placerBateau(bat,coordDepart,coordArrivee);

		while(batailleNavale->getGrilles()[batailleNavale->getIndiceJoueurCourant()].placementBateauValide(bat,coordDepart,coordArrivee)==false){
			cout << "Erreur! Veuillez replacer le bateau de longueur "<< bat->getTailleBateau();
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

			grille.placerBateau(bat,coordDepart,coordArrivee);
		}
	}

    return grille;
}

void IHMBN::afficherGrilleBateaux(){//DONE
	Grille grille(getBN()->getGrilles()[getBN()->getIndiceJoueurCourant()]);

	cout << endl << "Grille personnelle" << endl;

	for (int i=0;i<grille.getTailleGrille().getLongueur();i++){
        cout << "|";
        if(i/10 == 0)
            cout << " ";
        else
            cout << i/10;

    }
    cout << "|" << endl;

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
	Grille grille(getBN()->getGrilles()[(getBN()->getIndiceJoueurCourant()+1)%2]);

	cout << endl << "Grille adversaire" << endl;

	for (int i=0;i<grille.getTailleGrille().getHauteur();i++){
		for (int j=0;j<grille.getTailleGrille().getLongueur();j++){
			Coordonnees coord(i,j);
			cout << "|";
			if(grille.getCaseElt(coord).getBateau()==nullptr){
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
		cout << "|" << endl;
	}
	cout<< endl << endl;
}

void IHMBN::afficherFinBN(){//DONE
	cout << "La partie est terminée, la flotte de " << getBN()->getJoueurs()[getBN()->getIndiceJoueurCourant()] << "a été coulée!" << endl;
	cout << "La flotte de " << getBN()->getJoueurs()[(getBN()->getIndiceJoueurCourant()+1)%2] << "a été victorieuse!" << endl;
}

void IHMBN::afficherResultatTour(Coordonnees coord){//DONE
	Grille grille(getBN()->getGrilles()[getBN()->getIndiceJoueurCourant()]);
	if(grille.getCaseElt(coord).getBateau()==nullptr)
		cout << "A l'eau !!";
	else{
		if(grille.getCaseElt(coord).getBateau()->estCoule())
			cout <<"Touché coulé un bateau de taille" << grille.getCaseElt(coord).getBateau()->getTailleBateau();
		else
			cout <<"Touché";

	}
}


