#include "Cellule.hpp"

#include "Action.hpp"

using namespace std;

Cellule::Cellule(){//DONE
    action=nullptr;
    typeDeCellule="0";

}

Cellule::Cellule(Action* actionInit, string typeCell){//DONE
    action=actionInit;
    typeDeCellule=typeCell;
}

void Cellule::lancerAction() const{//DONE
    action->lancerAction();
}

Action* Cellule::getActionCellule() const{//DONE
    return action;
}

string Cellule::getTypeDeCellule() const{//DONE
    return typeDeCellule;
}
