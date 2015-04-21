#ifndef CONTROLEUR_H
#define CONTROLEUR_H

#include "IHMJeu.hpp"
#include "IHMBN.hpp"

using namespace std;

class Controleur{
    public:
        void tourDeJeu ();
        void lancerJeu ();
        void actionBatailleNavale ();
        void tourDeJeuBatailleNavale ();
    private:
        IHMJeu* ihmJeu;
        IHMBN* ihmBN;
};
#endif
