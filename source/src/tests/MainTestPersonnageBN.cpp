#include <iostream>
#include "PersonnageBN.hpp"

int main(){

	PersonnageBN pbn("pôl_é_kockduhi");

	cout << "nom du joueur " << pbn.getNomBN() << endl;

	cout << "Le PV initial du bateau 2 est " << pbn.getBateaux()[2]->getPV() << endl;
	
}
