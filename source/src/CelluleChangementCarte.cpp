#include "CelluleChangementCarte.hpp"

using namespace std;

CelluleChangementCarte::CelluleChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest){//DONE
    setAction(new ActionChangementCarte(carteInit, carteDest, coordInit, coordDest));
    setTypeDeCellule("@");
}
