#include <iostream>
#include "Cellule.hpp"
#include "CelluleChangementCarte.hpp"
#include "CelluleAccessible.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"
#include <vector>

int main(){
	vector<int> vec={0,0,2,0,0}
	Carte* cD = new Carte(0,vec,TailleGrille(2,2));
	Carte* cA = new Carte(1,vec,TailleGrille(2,2));
	Coordonnees coordD(0,0);
	Coordonnees coordA(1,0);
	CelluleChangementCarte(cD,cA,coordD,coordA);
}
