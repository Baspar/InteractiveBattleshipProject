
#ifndef TAILLEGRILLE_H
#define TAILLEGRILLE_H

/// \file TailleGrille.hpp
/// \brief Fichier de la classe TailleGrille
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

using namespace std;

/// \class TailleGrille
/// \brief Classe représentant la taille de la grille.
///
/// La classe gère la création de la taille de la grille.
class TailleGrille {
    private:
        ///Longueur de la grille
        int longueur;
        ///Hauteur de la grille
        int hauteur;

    public:
        /// \brief Constructeur de la classe TailleGrille
        /// \param lon : longueur de la grille
        ///	\param hau : hauteur de la grille
        TailleGrille(int lon, int hau);
};
#endif
