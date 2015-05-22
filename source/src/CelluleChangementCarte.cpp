#include "CelluleChangementCarte.hpp"
#include "ActionChangementCarte.hpp"

using namespace std;

CelluleChangementCarte::CelluleChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest):CelluleAccessible(){//DONE
    //ActionChangementCarte* ac = new ActionChangementCarte(carteInit, carteDest, coordInit, coordDest);
    //setAction(ac);
    setTypeDeCellule("@");
}
