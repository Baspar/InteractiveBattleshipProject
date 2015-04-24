#include "Bateau.hpp"

using namespace std;

Bateau::Bateau(int tailleIn){
    taille = tailleIn;
    PV = tailleIn;
}

bool Bateau::estCoule(){
    return (PV==0);
}
void Bateau::retirerPV (){
    if(PV>0)
        PV--;
}
