#include "Controleur.hpp"
#include "BatailleNavale.hpp"

#include "IHMJeu.hpp"
#include "IHMBN.hpp"

using namespace std;
Controleur::Controleur(){//DONE
    jeu = new Jeu();
    ihmJeu = new IHMJeu(jeu);
    lancerJeu();
}


void Controleur::tourDeJeu(){//TODO
    ihmJeu->afficherJeu();
    jeu->jouer(ihmJeu->saisieDeplacement());
    //code pour lancer la partie controleur correspondant à l'action effectuée (si besoin)
    //si bataille navale : this.action bataille navale etc...
}


void Controleur::lancerJeu(){//DONE
    while(!jeu->partieFinie())
        tourDeJeu();
}


void Controleur::actionBatailleNavale(){//DONE
	batailleNavale = new BatailleNavale();
	ihmBN = new IHMBN(batailleNavale);

	//si placerBateaux renvoie NULL, on demande une saisie dans l'IHM sinon on copie les données de l'IA
	if (batailleNavale->getPersonnage1()->placerBateaux().grilleVide())
		batailleNavale->getGrille1().copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage1()));
	else batailleNavale->getGrille1().copy(batailleNavale->getPersonnage1()->placerBateaux());

	if (batailleNavale->getPersonnage2()->placerBateaux().grilleVide())
		batailleNavale->getGrille2().copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage2()));
	else batailleNavale->getGrille2().copy(batailleNavale->getPersonnage2()->placerBateaux());

	//Verifie si la BN est finie, sinon continue la partie
	while(batailleNavale->retournerGagnant(batailleNavale->getPersonnage1(),batailleNavale->getPersonnage2())==nullptr)
		tourDeJeuBatailleNavale();

	//Affiche gagnant
	ihmBN->afficherFinBN();

}


void Controleur::tourDeJeuBatailleNavale(){//DONE
	Coordonnees coord=Coordonnees(-1,-1);

	//Affiche les grilles des joueurs
	ihmBN->afficherJeu();

	//caseAViser renvoie null si c'est un joueur humain, et des coordonnees si c'est joueurIA
	if (batailleNavale->getJoueurs()[batailleNavale->getIndiceJoueurCourant()]->coordonneesAViser().coordonneesVides()){
		coord.copy(ihmBN->saisieCoup());
		batailleNavale->jouer(coord);
	}
	else { 
		coord.copy(batailleNavale->getJoueurs()[batailleNavale->getIndiceJoueurCourant()]->coordonneesAViser());
		batailleNavale->jouer(coord);
	}

	//Affiche le résultat du tour
	ihmBN->afficherResultatTour(coord);
}

