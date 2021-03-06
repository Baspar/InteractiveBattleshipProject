#include "Controleur.hpp"
#include "BatailleNavale.hpp"
#include <iostream>
#include "IHMJeu.hpp"
#include "IHMBN.hpp"
#include "ActionCombat.hpp"
#include "PersonnageBN.hpp"
#include "JoueurHumain.hpp"
#include "JoueurIA.hpp"

using namespace std;
Controleur::Controleur(){//DONE
    batailleNavale = new BatailleNavale();
    jeu = new Jeu(batailleNavale);
    ihmJeu = new IHMJeu(jeu);
    controlBN= new ControleurBN(batailleNavale);
    lancerJeu();
}


void Controleur::tourDeJeu(){//DONE
    ihmJeu->afficherJeu();
    jeu->jouer(ihmJeu->saisieDeplacement());
    //code pour lancer la partie controleur correspondant à l'action effectuée (si besoin)



    //Si l'action est un Combaaat
    if(jeu->getActionEnCours()!=nullptr){
        if( ( (jeu->getActionEnCours()->getTexteInteraction()=="COMBAT!!!") || (jeu->getActionEnCours()->getTexteInteraction()=="COMBAT!!! Vous avez perdu") )  && jeu->getActionEnCours()->isActive() ) {
            batailleNavale->initialiserJoueurCourant((PersonnageBN*) (JoueurHumain*) jeu->getPersonnageJouable(),(PersonnageBN*) (JoueurIA*) ((ActionCombat*) jeu->getActionEnCours())->getAdversaire());
            controlBN->actionBatailleNavale();
            if (batailleNavale->retournerGagnant((Personnage*) jeu->getPersonnageJouable(),(Personnage*) ((ActionCombat*) jeu->getActionEnCours())->getAdversaire())==jeu->getPersonnageJouable()){
                jeu->getActionEnCours()->toggleActive();
                for(Objet* obj: ((ActionCombat*) jeu->getActionEnCours())->getAdversaire()->getInventaire()->getObjet() )
                    jeu->getPersonnageJouable()->getInventaire()->ajoutObjet(obj);
                jeu->getActionEnCours()->setTexteInteraction("Vous m'avez battu");
            }
            else {
                jeu->getPersonnageJouable()->deplacementInitial();
                jeu->getActionEnCours()->setTexteInteraction("COMBAT!!! Vous avez perdu");
            }
        }
    }
}


void Controleur::lancerJeu(){//DONE
    ihmJeu->afficherDebut();
    while(!jeu->partieFinie())
        tourDeJeu();
}


void Controleur::actionBatailleNavale(){//DONE

    batailleNavale->initialiserJoueurCourant((PersonnageBN*) jeu->getPersonnageJouable(),(PersonnageBN*) ((ActionCombat*) jeu->getActionEnCours())->getAdversaire());

    //si placerBateaux renvoie NULL, on demande une saisie dans l'IHM sinon on copie les données de l'IA
    if (batailleNavale->getPersonnage1()->placerBateaux().grilleVide())
        batailleNavale->getGrille1()->copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage1()));
    else batailleNavale->getGrille1()->copy(batailleNavale->getPersonnage1()->placerBateaux());

    if (batailleNavale->getPersonnage2()->placerBateaux().grilleVide())
        batailleNavale->getGrille2()->copy(ihmBN->saisirPlacementBateaux(batailleNavale->getPersonnage2()));
    else batailleNavale->getGrille2()->copy(batailleNavale->getPersonnage2()->placerBateaux());

    //Verifie si la BN est finie, sinon continue la partie
    while(batailleNavale->retournerGagnant()==nullptr)
        tourDeJeuBatailleNavale();

    //Affiche gagnant
    ihmBN->afficherFinBN();

}


void Controleur::tourDeJeuBatailleNavale(){//DONE
    Coordonnees coord=Coordonnees(-1,-1);

    //Affiche les grilles des joueurs
    ihmBN->afficherJeu();

    //caseAViser renvoie null si c'est un joueur humain, et des coordonnees si c'est joueurIA
    if (batailleNavale->getJoueurs()[batailleNavale->getIndiceJoueurCourant()]->coordonneesAViser(nullptr).coordonneesVides()){
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

