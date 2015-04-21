#ifndef MONDE_H
#define MONDE_H

#include "Carte.hpp"
#include <vector>

using namespace std;

class Monde{
    public:
        void placerJoueurs ();
    private :
        vector<Carte> cartes;
};
#endif
