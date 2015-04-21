#ifndef JEU_H
#define JEU_H

#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "Monde.hpp"
#include "Combat.hpp"
#include "Coordonnees.hpp"

using namespace std;

class Jeu{
    public:
        void initialiserJeu ();
        bool partieFinie ();
        void jouer(Coordonnees coordonnees);
    private:
        Action actionEnCours;
        vector<PersonnageNonJouable*> personnagesNonJouables;
        PersonnageJouable* personnageJouable;
        Monde monde;
        Combat combat;
};
#endif
