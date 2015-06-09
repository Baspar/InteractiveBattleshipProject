#include <iostream>
#include "Cellule.hpp"
#include "CelluleChangementCarte.hpp"
#include "CelluleAccessible.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"
#include <vector>

int main(){
	Carte* cD = new Carte(0,{{'#','_','#'},{'#','_','#'},{'#','_','_'}});
	Carte* cA = new Carte(1,{{'_','_','#'},{'#','_','#'},{'#','_','#'}});
	Coordonnees coordD(0,1);
	Coordonnees coordA(1,2);
	CelluleChangementCarte(cD,cA,coordD,coordA);
}
