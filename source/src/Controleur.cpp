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

void Controleur::actionBatailleNavale(){//TODO
}


void Controleur::tourDeJeuBatailleNavale(){//TODO
}
