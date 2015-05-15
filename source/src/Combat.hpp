#ifndef COMBAT_H
#define COMBAT_H

 /// \file Combat.hpp
 /// \brief Gestion d'un combat à deux joueurs
 /// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Personnage.hpp"

using namespace std;

/// \class Combat
/// \brief Combat à deux joueurs
///
/// Classe permettant la gestion d'un combat à deux joueurs avec les
/// fonctions génériques qui reviennent pour tous les combats.


class Combat{
     public:
        /// \fn Combat()
        /// \brief Constructeur
        ///
        /// Constructeur paramétré de la classe Combat
        /// Initialise les deux joueurs et lance le combat
        Combat();

        /// \fn Personnage retournerGagnant(Personnage joueur1, Personnage joueur2)
        /// \brief Retourner Gagnant
        /// \param joueur1: représente le premier joueur initial de notre combat
        /// \param joueur2: représente le deuxième joueur initial de notre combat
        ///
        /// Méthode qui renvoie le gagnant du combat
        /// \return un personnage correspondant au gagnant et null si la partie n'est pas finie
        Personnage* retournerGagnant(Personnage* joueur1, Personnage* joueur2);


};
#endif
