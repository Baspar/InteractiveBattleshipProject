#include <iostream>
#include "PersonnageNonJouable.hpp"

#include "Personnage.hpp"
#include "PersonnageBNIA.hpp"
#include "Bateau.hpp"


int main(){
 

cout << "Constructeur PersonnageNonJouable(string nomnv)" << endl;
PersonnageNonJouable pj("pj");
cout << "nom du joueur " << pj.getNom() << endl;
cout << "Coordonnees de depart " << pj.getCoordonnees().getAbscisse() << "," << pj.getCoordonnees().getOrdonnee() << endl;
cout << "Carte de depart " << pj.getCarte() << endl;
cout << endl;

   
}
