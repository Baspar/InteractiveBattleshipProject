#include <iostream>
#include "PersonnageBN.hpp"

int main(){

	PersonnageBN pbn("pôl_é_kockduhi");

	cout << "nom du joueur " << pbn.getNomBN() << endl;

	cout << "Le PV initial du bateau 2 est " << pbn.getBateaux()[2]->getPV() << endl;
	pbn.getBateaux()[0]->retirerPV();
	pbn.getBateaux()[0]->retirerPV();

	pbn.getBateaux()[1]->retirerPV();
	pbn.getBateaux()[1]->retirerPV();
	pbn.getBateaux()[1]->retirerPV();

	pbn.getBateaux()[2]->retirerPV();
	pbn.getBateaux()[2]->retirerPV();
	pbn.getBateaux()[2]->retirerPV();

	pbn.getBateaux()[3]->retirerPV();
	pbn.getBateaux()[3]->retirerPV();
	pbn.getBateaux()[3]->retirerPV();
	pbn.getBateaux()[3]->retirerPV();
	cout << "Coulee?? " << pbn.flotteCoulee() << endl;

	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	cout << "Le PV initial du bateau 2 est " << pbn.getBateaux()[2]->getPV() << endl;
	cout << "Coulee?? " << pbn.flotteCoulee() << endl;
	
}
