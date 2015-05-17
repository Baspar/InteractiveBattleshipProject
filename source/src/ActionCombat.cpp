#include "ActionCombat.hpp"

#include "Action.hpp"
#include "PersonnageBN.hpp"

using namespace std;

ActionCombat::ActionCombat(Personnage* adversairenv, string texte):Action(texte){//DONE
	adversaire=adversairenv;
}

void ActionCombat::lancerAction(){//DONE

}


Personnage* ActionCombat::getAdversaire() const{//DONE
	return adversaire;
}

