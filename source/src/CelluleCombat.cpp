#include "CelluleCombat.hpp"

#include "Personnage.hpp"
#include "CelluleAccessible.hpp"
#include "ActionCombat.hpp"

using namespace std;

CelluleCombat::CelluleCombat(Personnage* adv):CelluleAccessible(){//DONE
	adversaire=adv;
    setAction(new ActionCombat(adv, "J'aime les shorts"));
}
