#include <iostream>
#include "CelluleObstacle.hpp"

using namespace std;

int main(){
	Cellule* cell = new CelluleObstacle();
	cout << "La cellule est-elle accessible? " << cell->estAccessible() << endl;
	



}
