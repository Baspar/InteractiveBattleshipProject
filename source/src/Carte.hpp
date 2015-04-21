#ifndef CARTE_H
#define CARTE_H

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include <vector>

using namespace std;

class Carte{
    public:
        void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees);
    private:
        int id;
        TailleGrille tailleGrille;
        vector<vector<Cellule> > cellules;
};
#endif
