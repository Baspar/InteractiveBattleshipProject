#include <iostream>
#include "BadgeFinal.hpp"
#include "Objet.hpp"

using namespace std;
int main(){
	BadgeFinal* badge = new BadgeFinal();
	cout << "Met fin au jeu? " << badge->metFinAuJeu() << endl;
}
