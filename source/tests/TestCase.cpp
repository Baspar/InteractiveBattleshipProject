#include <iostream>
#include "Case.hpp"
#include "Bateau.hpp"
using namespace std;

int main(){
Bateau bateau(5);
Bateau* bat=&bateau;
Case quase();
Case kase(bat);
cout << "le bateau a (PV) " << bat->getPV() << endl;
kase.tirerDessus();
cout << "le bateau a (PV) " << bat->getPV() << endl;
kase.tirerDessus();
cout << "le bateau a (PV) " << bat->getPV() << endl;
}
