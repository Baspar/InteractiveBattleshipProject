#include "Cellule.hpp"

#include "Action.hpp"

using namespace std;

void Cellule::setAction(Action* const actionCp){//DONE
    action=actionCp;
}

void Cellule::setTypeDeCellule(const string type){//DONE
    typeDeCellule=type;
}

Cellule::Cellule(string typeCell){//DONE
    action=nullptr;
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
