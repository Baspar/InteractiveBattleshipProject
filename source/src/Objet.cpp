#include "Objet.hpp"

Objet::Objet(const string nomObjet){//DONE
    nom=nomObjet;
}

string Objet::getNom() const{//DONE
    return nom;
}
