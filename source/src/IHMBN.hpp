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
    private:
        /// \fn void afficherGrilleRadar ()
        /// \brief Affichage grille radar
        ///
        /// Affiche la grille radar du joueur courant
        void afficherGrilleRadar();

        /// \fn void afficherGrilleBateaux ()
        /// \brief Affichage grille bateaux
        ///
        /// Affiche la grille où les bateaux du joueur courant sont placés
        /// \param Grille* que l'on
        void afficherGrilleBateaux(Grille grille);

        /// \fn void ClearScreen()
        /// \brief Nettoi l'écran
        void ClearScreen();

        // Pointeur sur la bataille navale affichée
        BatailleNavale* batailleNavale;



    public:

        /// \fn IHMBN(BatailleNavale* bn)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur parametré de la classe IHMBN
        /// \param bn : la bataille navale utilisée
        IHMBN(BatailleNavale* bn);

        /// \fn batailleNavale* getBN()
        /// \brief getter de bataille navale
        ///
        /// \return batailleNavale* : pointeur sur bataille navale
        BatailleNavale* getBN();

        /// \fn void afficherJeu()
        /// \brief Affichage jeu
        ///
        /// Affiche l'état courant du jeu
        void afficherJeu();

        /// \fn void afficherFinBN()
        /// \brief Affichage phrase fin BN
        ///
        /// Affiche le gagnant
        void afficherFinBN();

        /// \fn void afficherResultatTour()
        /// \brief Affichage phrase après tour
        ///
        /// Affiche le résultat du coup joué
        void afficherResultatTour(Coordonnees coord);


        /// \fn Coordonnees saisieCoup()
        /// \brief Saisie du coup
        ///
        /// Permet une saisie du coup
        /// \return Les coordonnees du coup saisi
        Coordonnees saisieCoup() const;

        /// \fn Grille saisirPlacementBateaux(PersonnageBN* pers)
        /// \brief Saisie placements bateaux
        ///
        /// Permet une saisie des placements de chacun des bateaux du joueur
        /// \param pers : personnage plaçant ses bateaux
        /// \return La grille après placement des bateaux
        Grille saisirPlacementBateaux(PersonnageBN* pers);



};
#endif
