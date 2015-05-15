#include "IHMBN.hpp"

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include "BatailleNavale.hpp"
#include <iostream>

using namespace std;
IHMBN::IHMBN (BatailleNavale* bn){//DONE
	batailleNavale=bn;
}

void IHMBN::afficherJeu (){//WIP
	afficherGrilleBateaux();
	afficherGrilleRadar();
}

Coordonnees IHMBN::saisieCoup (){//DONE
	cout << "Veuillez saisir les coordonnées de la case que vous souhaitez viser";
	int x;
	int y;
	cin >> x;
	cin >> y;
	Coordonnees coord(x, y);
    return coord;
}

Grille IHMBN::saisirPlacementBateaux (PersonnageBN* pers){//DONE
	Grille grille(pers->getTailleGrille().getLongueur(),pers->getTailleGrille().getHauteur());
	for (Bateau* bat : pers->getBateaux()){
		cout << "Veuillez placer le bateau de longueur "<< bat->getLongueur();
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
	}

    return grille;
}

void IHMBN::afficherGrilleBateaux(){//DONE
	Grille grille(bn->getGrilles()[bn->getIndiceJoueurCourant()]);

	cout << endl << "Grille personnelle" << endl;

	for (int i=0;i<grille.getTailleGrille().getHauteur();i++){
		for (int j=0;j<grille.getTailleGrille().getLongueur();j++){
			Coordonnees coord(i,j);
			cout << "|";
			if(grille.getCaseElt(coord).getBateau()==nullptr){
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
		cout << "|" << endl;
	}
	cout<< endl << endl;
}

void IHMBN::afficherGrilleRadar(){//DONE
	Grille grille(bn->getGrilles()[(bn->getIndiceJoueurCourant()+1)%2]);

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
	cout << "La partie est terminée, la flotte de " << bn->getJoueurs()[bn->getIndiceJoueurCourant()] << "a été coulée!" << endl;
	cout << "La flotte de " << bn->getJoueurs()[(bn->getIndiceJoueurCourant()+1)%2] << "a été victorieuse!" << endl;
}

void IHMBN::afficherResultatTour(){//TODO

}


