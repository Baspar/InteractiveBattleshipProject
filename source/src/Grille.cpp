#include "Grille.hpp"

#include "TailleGrille.hpp"
#include "Case.hpp"
#include <vector>

using namespace std;

Grille::Grille(int longueur, int hauteur) : tailleGrille(longueur, hauteur){//TODO
    cases.resize(longueur);
    for(int i=0; i<longueur; i++)
        cases[i].resize(hauteur);
}
