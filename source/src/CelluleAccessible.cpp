#include "CelluleAccessible.hpp"

#include "Cellule.hpp"
#include "Personnage.hpp"

using namespace std;

CelluleAccessible::CelluleAccessible(Personnage* perso):Cellule(" "){//DONE
	occupant=perso;
}

CelluleAccessible::CelluleAccessible():Cellule(" "){//DONE
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
