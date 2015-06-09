#include <iostream>
#include "CelluleAccessible.hpp"
#include "PersonnageJouable.hpp"
#include "PersonnageNonJouable.hpp"

using namespace std;

int main(){
PersonnageJouable* perso = new PersonnageJouable("Julie");
PersonnageNonJouable* pers = new PersonnageNonJouable("Manon");
CelluleAccessible cel();
CelluleAccessible cell(pers*);
cout << "Personnage Jouable:" << perso << endl;
cout << "Personnage Non Jouable:" << pers << endl;
cout << "Personnage Non Jouable associé à la cellule?" << pers << endl;
cell.setPersonnage(perso*);
cout << "Re association du personnage Jouable associé à la cellule. Personnage Jouable associé à la cellule?" << perso << endl;

}
