#include <iostream>
#include "ActionChangementCarte.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"
#include <vector>
#include "PersonnageJouable.hpp"
#include "CelluleAccessible.hpp"

using namespace std;

int main(){
	Carte* carteD = new Carte(0,{{'#','_','#'},{'#','_','#'},{'#','_','_'}});
	Carte* carteA = new Carte(1,{{'_','_','#'},{'#','_','#'},{'#','_','#'}});
	Coordonnees coordD(0,0);
	Coordonnees coordA(1,0);
	PersonnageJouable* pers = new PersonnageJouable("Jerôme",coordD,carteD);
	((CelluleAccessible*)carteD->getCel(coordD))->setPersonnage(pers);
	ActionChangementCarte act(carteD,carteA,coordD,coordA);
	cout << "Personnage présent dans la carte de départ?" << ((CelluleAccessible*)carteD->getCel(coordD))->getPersonnage() << endl;
	cout << "Personnage présent dans la carte d'arrivée?" << ((CelluleAccessible*)carteA->getCel(coordA))->getPersonnage() << endl << endl;
	act.lancerAction();
	cout << "Lancement de l'action déplacer" << endl << endl;
	cout << "Personnage présent dans la carte de départ?" << ((CelluleAccessible*)carteD->getCel(coordD))->getPersonnage() << endl;
	cout << "Personnage présent dans la carte d'arrivée?" << ((CelluleAccessible*)carteA->getCel(coordA))->getPersonnage() << endl << endl;
	cout << "Affichage texte interaction" << endl;
	cout << act.getTexteInteraction() << endl << endl;
	cout << "L'action est-elle toujours active?" << endl;
	cout << "est actif?" << act.isActive() <<endl << endl;
	cout << "On fait un toggle active" << endl << endl;
	act.toggleActive();
	cout << "L'action est-elle toujours active?" << endl;
	cout << "est actif?" << act.isActive() <<endl;
}
