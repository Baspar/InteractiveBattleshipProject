#include "Controleur.hpp"

#include "IHMJeu.hpp"
#include "IHMBN.hpp"

using namespace std;
Controleur::Controleur(){
    jeu = new Jeu();
    ihmJeu = new IHMJeu(jeu);
    lancerjeu();
}	

void Controleur::tourDeJeu (){
    ihmJeu->afficherJeu();
    jeu->jouer(ihmJeu->saisieDeplacement());
    //code pour lancer la partie controleur correspondant à l'action effectuée (si besoin)
    //si bataille navale : this.action bataille navale etc...
}


void Controleur::lancerJeu (){
    while(!jeu->partieFinie())
        tourDeJeu();
}


void Controleur::actionBatailleNavale (){
}


void Controleur::tourDeJeuBatailleNavale (){
}
