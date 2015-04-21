#ifndef COMBAT_H
#define COMBAT_H

 /// \file Combat.hpp
 /// \brief Gestion d'un combat à deux joueurs
 /// \author

#include "Personnage.hpp"

using namespace std;

/// \class Combat
/// \brief Combat à deux joueurs
///
/// Classe permettant la gestion d'un combat à deux joueurs avec les
/// fonctions génériques qui reviennent pour tous les combats.


class Combat{
     private:
        Personnage* personnage1; /// Personnage représentant le premier joueur du combat
        Personnage* personnage2; /// Personnage représentant le deuxième joueur du combat

     public:
        /// \fn Combat(Personnage joueur1, Personnage joueur2)
        /// \brief Constructeur
        ///
        /// Constructeur paramétré de la classe Combat
        /// Initialise les deux joueurs et lance le combat
        /// \param joueur1: représente le premier joueur initial de notre combat
        /// \param joueur2: représente le deuxième joueur initial de notre combat
        Combat(Personnage joueur1, Personnage joueur2);

        /// \fn Personnage retournerGagnant()
        /// \brief Retourner Gagnant
        ///
        /// Méthode qui renvoie le gagnant du combat
        /// \return un personnage correspondant au gagnant et null si la partie n'est pas finie
        Personnage retournerGagnant();


};
#endif
