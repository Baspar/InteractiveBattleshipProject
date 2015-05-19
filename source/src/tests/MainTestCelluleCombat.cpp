#include <iostream>
#include "CelluleCombat.hpp"
#include "Personnage.hpp"
#include "ActionCombat.hpp"
#include "CelluleAccessible.hpp"

int main(){
	Personnage* advers = new Personnage("Ann");
	ActionCombat* actCombat = new ActionCombat(advers,"bla");
	CelluleCombat cell();
	CelluleCombat cellu(advers,actCombat);
	cout << "cell est elle accesssible? " << cell.estAccessible() << endl;
	cout << "cellu est elle accesssible? " << cellu.estAccessible() << endl;
}
