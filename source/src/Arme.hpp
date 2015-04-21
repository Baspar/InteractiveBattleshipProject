#ifndef ARME_H
#define ARME_H

#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

class Arme{
    public:
        void tirer(Coordonnees coordonnees);
    private:
        string nomArme;
};
#endif
