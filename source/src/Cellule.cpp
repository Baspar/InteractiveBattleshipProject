#include "Cellule.hpp"

#include "Action.hpp"

using namespace std;

Cellule::Cellule(){
    action=nullptr;
    typeDeCellule=0;
}

Cellule::Cellule(Action* actionInit, int typeCell){
    action=actionInit;
    typeDeCellule=typeCell;
}

void Cellule::lancerAction() const{
    action->lancerAction();
}

Action* Cellule::getActionCellule() const{
    return action;
}

int Cellule::getTypeDeCellule() const{
    return typeDeCellule;
}
