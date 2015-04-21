#ifndef ACTIONCHANGEMENTCARTE_H
#define ACTIONCHANGEMENTCARTE_H

#include "Carte.hpp"
#include "Coordonnees.hpp"

using namespace std;

class ActionChangementCarte : public Action{
    private:
        Carte* carte;
        Coordonnees coordonnees;

    public:

        virtual void lancerAction();
};
#endif
