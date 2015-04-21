#ifndef CASE_H
#define CASE_H

#include "Bateau.hpp"

using namespace std;

class Case{
    public:
        void tirerDessus();
        Case();
    private:
        bool touche;
        Bateau* bateau;
};
#endif
