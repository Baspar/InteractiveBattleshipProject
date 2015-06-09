#ifndef TAILLEGRILLE_H
#define TAILLEGRILLE_H

/// \file TailleGrille.hpp
/// \brief Fichier de la classe TailleGrille
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

using namespace std;

/// \class TailleGrille
/// \brief Clase representant la taille de la Grille
///
/// La classe gere la creation de la taille de la grille
class TailleGrille{
    private:
        /// Longueur de la grille
        int longueur;
        /// Hauteur de la grille
        int hauteur;

    public:
        /// \fn TailleGrille(int lon, int hau)
        /// \brief Constructeur de la classe TailleGrille
        /// \param lon : longueur de la grille
        /// \param hau : hauteur de la grille
        TailleGrille(int lon, int hau);

        /// \fn TailleGrille(const TailleGrille &tailleGrilleCp)
        /// \brief Constructeur par recopie de la classe TailleGrille
        /// \param tailleGrilleCp : TailleGrill a recopier
        TailleGrille(const TailleGrille& tailleGrilleCp);

        /// \fn int getLongueur()
        /// \brief Getter de longueur
        /// return La longueur de la Grille
        int getLongueur() const;

        /// \fn int getHauteur()
        /// \brief Getter de hauteur
        /// return La hauteur de la Grille
        int getHauteur() const;

        /// \fn void setLongueur(const int longueurcp)
        /// \brief Setter de longueur
        /// \param longueurcp : La longueur de la Grille
        void setLongueur(const int longueurcp) ;

        /// \fn int setHauteur(const int hauteurcp)
        /// \brief Setter de hauteur
        /// \param hauteurcp : La hauteur de la Grille
        void setHauteur(const int hauteurcp);

        /// \fn copy(TailleGrille tailleGrille)
        /// \brief copie de tailleGrille
        /// \param tailleGrille : tailleGrille que l'on veut copier
        /// Effectue la copie de la tailleGrille en entrée dans notre tailleGrille
        void copy(const TailleGrille tailleGrille);
};
#endif
