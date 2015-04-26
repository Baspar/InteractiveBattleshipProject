#include "CelluleAccessible.hpp"

#include "Cellule.hpp"
#include "Personnage.hpp"

using namespace std;

CelluleAccessible::CelluleAccessible(){//TODO
}

CelluleAccessible::CelluleAccessible(Action actionInit):Cellule(actionInit,0){//TODO
    occupant=NULL;
}

bool CelluleAccessible::estAccessible(){//TODO
    return true;
}

void CelluleAccessible::setPersonnage(Personnage* personnage){//DONE
    occupant= personnage;
}
