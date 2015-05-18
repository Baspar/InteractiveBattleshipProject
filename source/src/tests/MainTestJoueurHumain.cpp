#include <iostream>
#include "JoueurHumain.hpp"

#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"
#include "Bateau.hpp"


int main(){
    JoueurHumain jh("pôl");

    cout << "nom du joueur " << jh.getNomBN() << endl;

    cout << "Les PV initiaux du bateau 2" << jh.getBateaux()[2]->getPV() << endl;
}
