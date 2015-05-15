#include "Bateau.hpp"

using namespace std;

Bateau::Bateau(int tailleIn){//DONE
    taille = tailleIn;
    PV = tailleIn;
}
bool Bateau::estCoule(){//DONE
    return (PV==0);
}
void Bateau::retirerPV (){//DONE
    if(PV>0)
        PV--;
}
int Bateau::getTailleBateau() const{//DONE
	return taille;
}
