#include <iostream>
#include "CelluleCombat.hpp"
#include "Personnage.hpp"
#include "ActionCombat.hpp"
#include "CelluleAccessible.hpp"
#include "Coordonnees.hpp"

int main(){
	Personnage* advers = new Personnage("Ann");
	cout << "Nom de l'adversaire passé en paramètre? " << advers->getNom() <<endl;
	CelluleCombat cellu(advers);
	cout << "cellu est elle accesssible? " << cellu.estAccessible() << endl;
	cout << "nom de l'adversaire pendant le combat? " <<((ActionCombat*)cellu.getAction())->getAdversaire()->getNom() << endl;
	cout << "Le type de cellule est " << cellu.getType() << endl;
}
