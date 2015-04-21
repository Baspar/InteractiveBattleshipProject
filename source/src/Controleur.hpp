#ifndef CONTROLEUR_H
#define CONTROLEUR_H

 /// \file Controleur.hpp
 /// \brief Controleur de notre jeu
 /// \author

#include "IHMJeu.hpp"
#include "IHMBN.hpp"
#include "Jeu.hpp"
#include "BatailleNavale.hpp"

using namespace std;

class Controleur{

/// \class Controleur
/// \brief Controleur de notre partie
///
/// Classe Controleur permettant la connexion entre notre modèle et notre vue
/// Le Controleur contient le jeu courant et la bataille navale en cours

	private:
        IHMJeu* ihmJeu; ///IHM gérant la partie correspondant au déplacement sur la carte
        IHMBN* ihmBN; ///IHM gérant la partie Bataille Navale de notre jeu
        Jeu* jeu; ///Jeu en cours
        BatailleNavale* batailleNavale; ///Bataille Navale en cours ou null si il n'y en a pas
    public:
        /// \fn Controleur()
        /// \brief Constructeur
        ///
        /// Constructeur de notre Controleur
        /// On crée un nouveau jeu, et une IHM ayant comme paramètre ce jeu
        Controleur();

        /// \fn void tourDeJeu()
        /// \brief tour De Jeu
        ///
        /// Affiche la carte, saisie, joue le déplacement saisi, et effectue l'action
        /// en cours
        void tourDeJeu();

        /// \fn  void lancerJeu()
        /// \brief lancement du jeu
        /// Tant que la partie n'est pas terminée, on continue à faire des tours de jeu
        void lancerJeu();

        /// \fn void actionBatailleNavale()
        /// \brief lancement de la bataille navale
        ///
        /// Tant que la partie n'est pas terminée, on continue à faire des tours de jeu
        void actionBatailleNavale();

        /// \fn void tourDeJeuBatailleNavale()
        /// \brief tour de jeu Bataille Navale
        ///
        /// Tant que la bataille navale n'est pas terminée, on continue à faire des tours de bataille navale
        void tourDeJeuBatailleNavale();
};
#endif
