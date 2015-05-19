#include "CelluleAccessible.hpp"

#include "Cellule.hpp"
#include "Personnage.hpp"

using namespace std;

CelluleAccessible::CelluleAccessible():Cellule(nullptr," "){//DONE
	occupant=nullptr;
}

CelluleAccessible::CelluleAccessible(Action* actionInit):Cellule(actionInit," "){//DONE
	occupant=nullptr;
}

bool CelluleAccessible::estAccessible(){//DONE
    return true;
}

void CelluleAccessible::setPersonnage(Personnage* personnage){//DONE
    occupant= personnage;
}


Personnage* CelluleAccessible:: getPersonnage(){//DONE
    return occupant;
}
