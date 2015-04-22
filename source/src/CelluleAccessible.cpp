#include "CelluleAccessible.hpp"

#include "Cellule.hpp"
#include "Personnage.hpp"

using namespace std;

CelluleAccessible::Cellule():Cellule(NULL,0){
}

CelluleAccessible::Cellule(Action actionInit):Cellule(actionInit,0){
    occupant=NULL;
}

bool CelluleAccessible::estAccessible(){
    return true;
}

void CelluleAccessible::setPersonnage(personnage){
    occupant= personnage;
}
