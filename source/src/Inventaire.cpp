#include "Inventaire.hpp"
#include "Objet.hpp"


using namespace std;

Inventaire(vector<*Objet> obj){
	objets=obj;
}

        
vector<*Objet> getObjet() const{
	return objets;
}


		
void ajoutObjet(*Objet obj){
	objets.push_back(obj);
}

