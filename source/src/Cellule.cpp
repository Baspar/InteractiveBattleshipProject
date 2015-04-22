#include "Cellule.hpp"

#include "Action.hpp"

using namespace std;

Cellule::Cellule(){

}

Cellule::Cellule(Action actionInit, int typeCell){
    action=actionInit;
    typeDeCellule=typeCell;
}

void Cellule::lancerAction(){
    action->lancerAction();
}

Action* Cellule::getActionCellule(){
    return action;
}

int Cellule::getTypeDeCellule(){
    return typeDeCellule;
}
