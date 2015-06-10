#include <iostream>
#include "ActionVide.hpp"


using namespace std;

int main(){
ActionVide act("test action vide");
cout << "Affichage texte interaction" << endl;
cout << act.getTexteInteraction() << endl << endl;
}
