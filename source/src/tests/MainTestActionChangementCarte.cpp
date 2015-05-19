#include <iostream>
#include "ActionChangementCarte.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"

using namespace std;

int main(){
carteD = new Carte();
carteA = new Carte();
coordD(1,1);

ActionChangementCarte act(carteD,carteA,coordD,coordA);
cout << act.getTexteInteraction() << endl;
cout << "est actif?" << act.isActive() <<endl;
act.toggleActive();
cout << "est actif?" << act.isActive() <<endl;
}
