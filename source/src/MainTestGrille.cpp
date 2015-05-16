#include "Grille.hpp"
#include <iostream>

int main(){
    Grille grille(1, 2);

    cout << grille.getTailleGrille().getLongueur() << endl;
    return 0;
}
