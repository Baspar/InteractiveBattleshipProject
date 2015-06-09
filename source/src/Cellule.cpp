#include "Cellule.hpp"

#include "Action.hpp"

using namespace std;

void Cellule::setAction(Action* const actionCp){//DONE
    action=actionCp;
}

Cellule::Cellule(string typeCell){//DONE
    action=nullptr;
    typeDeCellule=typeCell;
}

void Cellule::lancerAction() const{//DONE
    action->lancerAction();
}

void Cellule::setType(string const typeCp){
    typeDeCellule=typeCp;
}

Action* Cellule::getAction() const{//DONE
    return action;
}

string Cellule::getType() const{//DONE
    return typeDeCellule;
}
