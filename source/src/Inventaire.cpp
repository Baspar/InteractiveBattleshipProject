#include "Inventaire.hpp"


using namespace std;

Inventaire::Inventaire(vector<Objet*> obj){//DONE
    objets=obj;
}

vector<Objet*> Inventaire::getObjet() const{//DONE
    return objets;
}


void Inventaire::ajoutObjet(Objet* obj){//DONE
    objets.push_back(obj);
}

