#ifndef GRILLE_H
#define GRILLE_H

#include "TailleGrille.hpp"
#include "Case.hpp"

#include <vector>


using namespace std;

class Grille{
    public:
        Grille(int longueur, int hauteur);
    private:
        TailleGrille tailleGrille;
        vector<vector<Case> > cases;
};

#endif
