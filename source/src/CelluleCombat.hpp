#ifndef CELLULECOMBAT_H
#define CELLULECOMBAT_H

#include "Personnage.hpp"
#include "CelluleAccessible.hpp"

using namespace std;

class CelluleCombat : public CelluleAccessible{
    private:
        Personnage* combattant;
};
#endif
