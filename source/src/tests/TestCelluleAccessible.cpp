#include <iostream>
#include "CelluleAccessible.hpp"
#include "PersonnageJouable.hpp"
#include "PersonnageNonJouable.hpp"
#include "Coordonnees.hpp"
#include "Carte.hpp"
#include <vector>

using namespace std;

int main(){
vector vec{0,0,2,0,0};
Coordonnees coordJ(1,1);
Carte* carteJ= new Carte(1,vec);
PersonnageJouable* perso = new PersonnageJouable("Julie",CoordJ,1);
PersonnageNonJouable* pers = new PersonnageNonJouable("Manon");
CelluleAccessible cel();
CelluleAccessible cellu("@");
CelluleAccessible cell(pers*);
cout << "Personnage Jouable:" << perso << endl;
cout << "Personnage Non Jouable:" << pers << endl;
cout << "Personnage Non Jouable associé à la cellule?" << pers << endl;
cell.setPersonnage(perso*);
cout << "Re association du personnage Jouable associé à la cellule. Personnage Jouable associé à la cellule?" << perso << endl;
cout << "Le type de cellule est" << cellu.getType() << endl;
cellu.setType(" ");
cout << "L'action associée à une cellule construite grâce au constructeur prenant en paramètre un type de cellule" << cellu.getAction()<< endl;
}
