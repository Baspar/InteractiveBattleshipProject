#include <iostream>
#include "Coordonnees.hpp"

using namespace std;

int main(){


    Coordonnees coordonneesNulle(0,0);
    cout << "On cree une coordonnee nulle" << endl;
    cout << "   coordonneesNulle nulle? " << coordonneesNulle.getAbscisse() << coordonneesNulle.getOrdonnee() << endl;

    Coordonnees coordonnees(5,5);
    cout << "On cree une coordonnee 5 5" << endl;
    cout << "   Coordonnees : (" << coordonnees.getAbscisse()  << " et " << coordonnees.getOrdonnee() << ")" << endl;
    cout << "   Coordonnees nulles? " << endl;

    cout << "On crée une coordonnee par recopie" << endl;
    Coordonnees coordonneesCopy(coordonnees);
    cout << "   coordonneesCopy nulle? " << coordonneesCopy.getAbscisse()  << " et " << coordonneesCopy.getOrdonnee() << ")"   << endl;

    cout << "On copie notre coordonnee nulle dans coordonnees" << endl;
    coordonnees.copy(coordonneesNulle);
    cout << "   Coordonnees nulle? " << coordonnees.getAbscisse() << coordonnees.getOrdonnee()<< endl;
    cout << "   coordonneesNulle nulle? " << coordonneesNulle.getAbscisse() << coordonneesNulle.getOrdonnee() << endl;
    cout << "   tailleGrilleCopy nulle? " << coordonneesCopy.getAbscisse() << coordonneesCopy.getOrdonnee() << endl;

    return 0;
}
