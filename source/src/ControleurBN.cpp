#include "ControleurBN.hpp"
#include "BatailleNavale.hpp"

#include "IHMJeu.hpp"
#include "IHMBN.hpp"
#include "ActionCombat.hpp"
#include "PersonnageBN.hpp"

using namespace std;
ControleurBN::ControleurBN(BatailleNavale* batnav){//DONE
    batailleNavale=batnav;
}



void ControleurBN::actionBatailleNavale(){//DONE

    IHMBN* ihmBN = new IHMBN(batailleNavale);

    //si placerBateaux renvoie NULL, on demande une saisie dans l'IHM sinon on copie les données de l'IA
    Grille g1 = batailleNavale->getPersonnage1()->placerBateaux();
    if (g1.grilleVide())
        batailleNavale->getGrille1()->copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage1()));
    else
        batailleNavale->getGrille1()->copy(g1);

    Grille g2 = batailleNavale->getPersonnage2()->placerBateaux();
    if (g2.grilleVide())
        batailleNavale->getGrille2()->copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage2()));
    else
        batailleNavale->getGrille2()->copy(g2);

    //Verifie si la BN est finie, sinon continue la partie
    while(batailleNavale->retournerGagnant()==nullptr)
        tourDeJeuBatailleNavale(ihmBN);

    //Affiche gagnant
    ihmBN->afficherFinBN();


}


void ControleurBN::tourDeJeuBatailleNavale(IHMBN* ihmBN){//DONE
    Coordonnees coord=Coordonnees(-1,-1);

    //Affiche les grilles des joueurs
    ihmBN->afficherJeu();

    //caseAViser renvoie null si c'est un joueur humain, et des coordonnees si c'est joueurIA
    if (batailleNavale->getJoueurs()[batailleNavale->getIndiceJoueurCourant()]->coordonneesAViser(batailleNavale->getGrilles()[batailleNavale->getIndiceJoueurCourant()]).coordonneesVides()){
        coord.copy(ihmBN->saisieCoup());
        batailleNavale->jouer(coord);
    }
    else {
        coord.copy(batailleNavale->getJoueurs()[batailleNavale->getIndiceJoueurCourant()]->coordonneesAViser(batailleNavale->getGrilles()[(batailleNavale->getIndiceJoueurCourant()+1)%2]));
        batailleNavale->jouer(coord);
    }

    //Affiche le résultat du tour
    ihmBN->afficherResultatTour(coord);
}
