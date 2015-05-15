#include "Controleur.hpp"

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
	if (batailleNavale->personnage1->placerBateaux()==NULLPTR)
		batailleNavale->grille1.copy(ihmBN->saisirPlacementBateaux(batailleNavale->personnage1));
	else batailleNavale->grille1.copy(batailleNavale->personnage1->placerBateaux();

	if (batailleNavale->personnage2->placerBateaux()==NULLPTR)
		batailleNavale->grille2.copy(ihmBN->saisirPlacementBateaux(batailleNavale->personnage2));
	else batailleNavale->grille2.copy(batailleNavale->personnage2->placerBateaux();

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

