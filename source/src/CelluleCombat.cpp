#include "CelluleCombat.hpp"

#include "Personnage.hpp"
#include "CelluleAccessible.hpp"

using namespace std;

CelluleCombat::CelluleCombat():CelluleAccessible(){//DONE
}

CelluleCombat::CelluleCombat(Personnage* adv, Action* actionCombat):CelluleAccessible(actionCombat){//DONE
	adversaire=adv;
}
