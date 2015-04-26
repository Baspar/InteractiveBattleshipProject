#include "Cellule.hpp"

#include "Action.hpp"

using namespace std;

Cellule::Cellule(){//TODO
    action=nullptr;
    typeDeCellule=0;
}

Cellule::Cellule(Action* actionInit, int typeCell){//TODO
    action=actionInit;
    typeDeCellule=typeCell;
}

void Cellule::lancerAction() const{//DONE
    action->lancerAction();
}

Action* Cellule::getActionCellule() const{//DONE
    return action;
}

int Cellule::getTypeDeCellule() const{//DONE
    return typeDeCellule;
}
