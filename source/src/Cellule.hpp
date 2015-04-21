#ifndef CELLULE_H
#define CELLULE_H

#include "Action.hpp"

using namespace std;

class Cellule{
    private:
        Action* action;
    public:
        void lancerAction();
        virtual bool estAccessible();
};
#endif
