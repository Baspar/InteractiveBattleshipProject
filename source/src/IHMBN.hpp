#ifndef IHMBN_H
#define IHMBN_H

#include "BatailleNavale.hpp"
#include "Coordonnees.hpp"
#include "Grille.hpp"

using namespace std;

class IHMBN{
    public:
        IHMBN (BatailleNavale batailleNavale);
        void afficherJeu ();
        Coordonnees saisieCoup ();
        Grille saisirPlacementBateaux ();
    private:
        void afficherGrilleRadar ();
        void afficherGrilleBateau ();
        BatailleNavale* batailleNavale;
};
#endif
