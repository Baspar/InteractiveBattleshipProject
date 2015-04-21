#ifndef BATAILLENAVALE_H
#define BATAILLENAVALE_H

#include "Combat.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "PersonnageBN.hpp"
#include <vector>

using namespace std;

class BatailleNavale : public Combat{
    public:
        BatailleNavale (PersonnageBN joueur1, PersonnageBN joueur2);
        void jouer (Coordonnees coordonnees);
    private:
        void changerJoueur ();
        int joueurCourant;
        vector<PersonnageBN*> joueurs;
        vector<Grille> grilles;
};
#endif
