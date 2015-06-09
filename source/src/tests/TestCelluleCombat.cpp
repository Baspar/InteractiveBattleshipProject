#include <iostream>
#include "CelluleCombat.hpp"
#include "Personnage.hpp"
#include "ActionCombat.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"

int main(){
	Personnage* advers = new Personnage("Ann");
	ActionCombat* actCombat = new ActionCombat(advers,"bla");
	CelluleCombat cellu(advers);
	cout << "cellu est elle accesssible? " << cellu.estAccessible() << endl;
}
