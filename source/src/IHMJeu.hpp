#ifndef IHMJEU_H
#define IHMJEU_H

/// \file IHMJeu.hpp
/// \brief IHM gerant jeu
/// \author

#include "Jeu.hpp"
#include "Coordonnees.hpp"

using namespace std;

/// \class IHMJeu
/// \brief classe representant l'IHM gerant le jeu
///
/// La classe gere le jeu
class IHMJeu{

    private:
        Jeu* jeu; /// jeu

        /// \fn void afficherInteraction()
        /// \brief affichage texte du jeu
        ///
        /// Methode permettant l'affichage des textes que le jeu souhaite envoyer aux joueurs
        void afficherInteraction();

        /// \fn afficherCarteCourante()
        /// \brief affichage cellule ou joueur place
        ///
        /// Methode affichant chaque cellule de la carte ou se trouve le joueur
        void afficherCarteCourante();

    public:
        /// \fn IHMJeu(Jeu jeu)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe IHMJeu, initialise le jeu
        IHMJeu(Jeu jeu);

        /// \fn Coordonnees saisieDeplacement()
        /// \brief Saisie deplacement
        ///
        /// Demande au joueur de saisir le déplacement qu'il souhaite effectuer
        /// et renvoie les coordonnées de la case où il va
        Coordonnees saisieDeplacement();

        /// \fn void afficherJeu()
        /// \brief affichage jeu
        ///
        /// Affiche le jeu (utilise afficherCarte, afficherInteraction et afficherSaisie)
        void afficherJeu();

        /// \fn void afficherSaisie()
        /// \brief introduction zone saisie
        ///
        /// Introduit la zone de saisie
        void afficherSaisie();


};
#endif
