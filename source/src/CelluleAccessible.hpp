#ifndef CELLULEACCESSIBLE_H
#define CELLULEACCESSIBLE_H

#include "Personnage.hpp"
#include "Cellule.hpp"

using namespace std;

class CelluleAccessible:public Cellule{
    private:
        Personnage* occupant;
    public :
        virtual bool estAccessible();
};
#endif
