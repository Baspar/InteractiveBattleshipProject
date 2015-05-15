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
	if (batailleNavale->getPersonnage1()->placerBateaux()==nullptr)
		batailleNavale->grille1.copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage1()));
	else batailleNavale->grille1.copy(batailleNavale->getPersonnage1()->placerBateaux();

	if (batailleNavale->getPersonnage2()->placerBateaux()==nullptr)
		batailleNavale->grille2.copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage2()));
	else batailleNavale->grille2.copy(batailleNavale->getPersonnage2()->placerBateaux();

	//Verifie si la BN est finie, sinon continue la partie
	while(!batailleNavale->BNFinie())
		tourDeJeuBatailleNavale();

	//Affiche gagnant
	ihmBN->afficherFinBN();

}


void Controleur::tourDeJeuBatailleNavale(){//DONE

	//Affiche les grilles des joueurs
	ihmBN->afficherJeu();

	//caseAViser renvoie null si c'est un joueur humain, et des coordonnees si c'est joueurIA
	if (batailleNavale->joueurCourant->caseAViser()==NULLPTR)
		batailleNavale->jouer(ihmBN->saisieCoup);
	else batailleNavale->jouer(batailleNavale->joueurCourant->caseAViser());

	//Affiche le résultat du tour
	ihmBN->afficherResultatTour();
}

