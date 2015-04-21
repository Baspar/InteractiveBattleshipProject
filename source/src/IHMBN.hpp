#ifndef IHMBN_H
#define IHMBN_H

/// \file IHMBN.hpp
/// \brief Fichier contenant la classe IHMBN
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN
#include "BatailleNavale.hpp"
#include "Coordonnees.hpp"
#include "Grille.hpp"

using namespace std;

/// \class IHMBN
/// \brief IHM pour Bataille Navale
///
/// Interface Homme Machine utilisée pour afficher la Bataille Navale et capturer les coups.
class IHMBN{
    public:
        /// \fn IHMBN(BatailleNavale batailleNavale)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur parametré de la classe IHMBN
        /// \param batailleNavale : la bataille navale utilisée
        IHMBN(BatailleNavale batailleNavale);
        /// \fn void afficherJeu()
        /// \brief Affichage jeu
        ///
        /// Affiche l'état courant du jeu
        void afficherJeu();
        /// \fn Coordonnees saisieCoup()
        /// \brief Saisie du coup
        ///
        /// Permet une saisie du coup
        /// \return Les coordonnees du coup saisi
        Coordonnees saisieCoup();
        /// \fn Grille saisirPlacementBateaux()
        /// \brief Saisie placements bateaux
        ///
        /// Permet une saisie des placements de chacun des bateaux du joueur
        /// \return La grille après placement des bateaux
        Grille saisirPlacementBateaux();
    private:
        /// \fn void afficherGrilleRadar ()
        /// \brief Affichage grille radar
        ///
        /// Affiche la grille radar du joueur courant
        void afficherGrilleRadar();
        /// \fn void afficherGrilleBateau ();
        /// \brief Affichage grille bateau
        ///
        /// Affiche la grille où les bateaux du joueur courant sont placés
        void afficherGrilleBateau();
        // Pointeur sur la bataille navale affichée
        BatailleNavale* batailleNavale;
};
#endif
