#ifndef PERSONNAGEBN_H
#define PERSONNAGEBN_H

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "Arme.hpp"
#include "Bateau.hpp"
#include "TailleGrille.hpp"

#include <vector>
#include <iostream>

using namespace std;

class PersonnageBN{
    public:
        Grille placerBateaux ();
        Coordonnees caseAViser ();
    private:
        TailleGrille tailleGrille;
        string nom;
        Arme* arme;
        vector<Bateau*> bateaux;
};
#endif
