#ifndef ACTIONCOMBAT_H
#define ACTIONCOMBAT_H

#include "Personnage.hpp"
#include "Action.hpp"

using namespace std;

class ActionCombat : public Action{
    private:
        Personnage* joueurAdverse;
    public:
        virtual void lancerAction();
};
#endif
