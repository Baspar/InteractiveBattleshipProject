#include <iostream>
#include "Cellule.hpp"
#include "CelluleAccessible.hpp"
#include "PersonnageJouable.hpp"
#include "PersonnageNonJouable.hpp"
#include "Coordonnees.hpp"
#include "Carte.hpp"
#include <vector>

using namespace std;

int main(){
Coordonnees coordJ(1,1);
Carte* carteJ = new Carte(1,{{'#','_','#'},{'#','_','#'},{'#','_','_'}});
PersonnageJouable* perso = new PersonnageJouable("Julie",coordJ,carteJ);
PersonnageNonJouable* pers = new PersonnageNonJouable("Manon");
CelluleAccessible cel();
CelluleAccessible cellu("@");
CelluleAccessible cell(pers);
cout << "Personnage Jouable:" << perso << endl;
cout << "Personnage Non Jouable:" << pers << endl;
cout << "Personnage Non Jouable associé à la cellule?" << pers << endl;
cell.setPersonnage(perso);
cout << "Re association du personnage Jouable associé à la cellule. Personnage Jouable associé à la cellule?" << perso << endl;
cout << "Le type de cellule est '" << cell.getType() << "'"<< endl;
cell.setType(" ");
cout << "L'action associée à une cellule construite grâce au constructeur prenant en paramètre un type de cellule est " << cellu.getAction()<< endl;
}
