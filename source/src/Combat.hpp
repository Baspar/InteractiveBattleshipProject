#ifndef COMBAT_H
#define COMBAT_H

#include "Personnage.hpp"

using namespace std;

class Combat{
    public:
        Personnage retournerGagnant ();
        Combat(Personnage joueur1, Personnage joueur2);
    private:
        Personnage* personnage1;
        Personnage* personnage2;
};
#endif
