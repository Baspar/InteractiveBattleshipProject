#include "ArmeCroix.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include <iostream>

#include "Arme.hpp"

using namespace std;

ArmeCroix::ArmeCroix() : Arme("Arme Croix"){//DONE
}

void ArmeCroix::tirer(const Coordonnees coordonnees, Grille *grille){//DONE
    Coordonnees coordonneesN(coordonnees.getAbscisse(),coordonnees.getOrdonnee()+1);
    Coordonnees coordonneesS(coordonnees.getAbscisse(),coordonnees.getOrdonnee()-1);
    Coordonnees coordonneesE(coordonnees.getAbscisse()+1,coordonnees.getOrdonnee());
    Coordonnees coordonneesO(coordonnees.getAbscisse()-1,coordonnees.getOrdonnee());

    grille->tirerDessus(coordonnees);
    if (grille->coupValide(coordonneesN)) grille->tirerDessus(coordonneesN);
    if (grille->coupValide(coordonneesS)) grille->tirerDessus(coordonneesS);
    if (grille->coupValide(coordonneesE)) grille->tirerDessus(coordonneesE);
    if (grille->coupValide(coordonneesO)) grille->tirerDessus(coordonneesO);

}

