#ifndef GRILLE_H
#define GRILLE_H
/// \file Grille.hpp
/// \brief Fichier contenant la classe Grille
/// \author
#include "TailleGrille.hpp"
#include "Case.hpp"

#include <vector>


using namespace std;

/// \class Grille
/// \brief Grille de bataille navale
/// La classe Grille contient une grille qui correspondraà la grille d'n joueur pendant une bataille navale
class Grille{
    public:
        /// \fn Grille(int longueur, int hauteur)
        /// \brief Constructeur
        ///
        /// Constructeur paramétré de la classe Grille
        /// \param longueur : longueur de la grille
        /// \param hauteur : hauteur de la grille
        Grille(int longueur, int hauteur);
    private:
        TailleGrille tailleGrille; /// Taille de la grille
        vector<vector<Case> > cases; /// Liste 2D de toutes les grilles
};

#endif
