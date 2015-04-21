#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

class Carte;
class Personnage{
    public:
        void deplacer(Coordonnees coordonnees, Carte* carte);
    private:
        Carte* carte;
        Coordonnees coord;
        string nom;
};
#endif
