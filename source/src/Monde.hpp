#ifndef MONDE_H
#define MONDE_H

/// \file Monde.hpp
/// \brief classe du monde du jeu
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Carte.hpp"
#include <vector>

using namespace std;

/// \class Monde
/// \brief classe définissant un monde
///
/// La classe représente un monde constitué de carte sur lequel évolue le joueur

class Monde{

	private :
        /// liste des cartes accessible du monde
        vector<Carte> cartes;

    public:
        /// \fn Monde()
        /// \brief Constructeur par défaut
        ///
        /// Constructeur de la classe Monde par défaut
        Monde();

        /// \fn void placerJoueurs ()
        /// \brief Methode placerJoueurs
        ///
        /// méthode qui place les joueurs dans le monde
        void placerJoueurs ();
};
#endif
