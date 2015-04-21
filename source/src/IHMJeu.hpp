#ifndef IHMJEU_H
#define IHMJEU_H

#include "Jeu.hpp"
#include "Coordonnees.hpp"

using namespace std;

class IHMJeu{
    public:
        IHMJeu (Jeu jeu);
        Coordonnees saisieDeplacement ();
        void afficherJeu ();
        void afficherSaisie ();
    private:
        void afficherInteraction ();
        void afficherCarteCourante ();
        Jeu* jeu;
};
#endif
