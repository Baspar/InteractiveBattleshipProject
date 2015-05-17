
#include "TailleGrille.hpp"
#include <iostream>


int main(){
    TailleGrille tailleGrilleNulle(0,0);
    cout << "On cree une taille de grille nulle" << endl;
    cout << "   tailleGrilleNulle nulle? " << tailleGrilleNulle.getHauteur() << tailleGrilleNulle.getLongueur() << endl;

    TailleGrille tailleGrille(5,5);
    cout << "On cree une taille de grille 5 5" << endl;
    cout << "   Taille : (" << tailleGrile.getLongueur()  << "x" << tailleGrille.getHauteur() << ")" << endl;
    cout << "   Grille vide? " << endl;

    cout << "On crée une taille de grille par recopie" << endl;
    Grille tailleGrilleCopy(tailleGrille);
    cout << "   tailleGrilleCopy nulle? " << tailleGrileCopy.getLongueur()  << "x" << tailleGrilleCopy.getHauteur() << ")"   << endl;

    cout << "On copie notre taille de grille nulle dans tailleGrille" << endl;
    tailleGrille.copy(tailleGrilleNulle);
    cout << "   Grille nulle? " << tailleGrille.getHauteur() << tailleNulle.getLongueur()<< endl;
    cout << "   tailleGrilleNulle nulle? " << tailleGrilleNulle.getHauteur() << tailleGrilleNulle.getLongueur() << endl;
    cout << "   tailleGrilleCopy nulle? " << tailleGrilleCopy.getHauteur() << tailleGrilleCopy.getLongueur() << endl;

    return 0;
}
