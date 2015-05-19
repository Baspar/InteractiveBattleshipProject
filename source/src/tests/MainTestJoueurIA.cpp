#include <iostream>
#include "JoueurDhumainBNia.hpp"

#include "PersonnageJouable.hpp"
#include "PersonnageBNIA.hpp"
#include "Bateau.hpp"


int main(){
    JoueurDhumainBNia ja("pôl");

    cout << "nom du joueur " << ja.getNomBN() << endl;


    cout << "Les PV initiaux du bateau 2: " << ja.getBateaux()[2]->getPV() << endl;
}
