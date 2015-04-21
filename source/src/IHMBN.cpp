#include "IHMBN.hpp"

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include "BatailleNavale.hpp"

using namespace std;
IHMBN::IHMBN (BatailleNavale batailleNavale){
}
void IHMBN::afficherJeu (){
}
Coordonnees IHMBN::saisieCoup (){
    return Coordonnees(0, 0);
}
Grille IHMBN::saisirPlacementBateaux (){
    return Grille();
}
