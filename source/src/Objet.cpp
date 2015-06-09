#include "Objet.hpp"

Objet::Objet(const string nomObjet){
    nom=nomObjet;
}

string Objet::getNom() const{
    return nom;
}
