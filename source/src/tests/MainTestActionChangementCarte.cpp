#include <iostream>
#include "ActionChangementCarte.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"

using namespace std;

int main(){
Carte* carteD = new Carte(3,TailleGrille(2,2));
Carte* carteA = new Carte(3,TailleGrille(2,2));
Coordonnees coordD(1,1);
Coordonnees coordA(2,1);

ActionChangementCarte act(carteD,carteA,coordD,coordA);
cout << act.getTexteInteraction() << endl;
cout << "est actif?" << act.isActive() <<endl;
act.toggleActive();
cout << "est actif?" << act.isActive() <<endl;
}
