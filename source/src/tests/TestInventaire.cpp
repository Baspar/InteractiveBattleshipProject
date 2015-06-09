#include <iostream>
#include "Inventaire.hpp"
#include "Objet.hpp"
#include "BadgeFinal.hpp"
#include <vector>

using namespace std;

int main(){
vector<Objet*> vec;
cout << "taille du vecteur d'objet? " << vec.size() << endl;
vec.push_back(new BadgeFinal());
cout << "On ajoute un element. taille du vecteur d'objet? " << vec.size() << endl;
Inventaire inv(vec);
Inventaire inv2();
inv.ajoutObjet(new BadgeFinal());
int n=20;
for(int i=0;i!=n;i++){
	inv.ajoutObjet(new BadgeFinal());
}
cout << "On ajoute 20 element. taille de l'inventaire? " << inv.getObjet().size() << endl;
}
