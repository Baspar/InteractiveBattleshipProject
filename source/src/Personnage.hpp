#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/// \file Personnage.hpp
/// \brief classe d'un personnage du jeu
/// \author

#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

/// \class Personnage
/// \brief classe définissant un personnage
///
/// La classe représente un personnage du jeu, contrôlable ou non, humain ou non

class Carte;

class Personnage{

	    private:
        Carte* carte; /// pointeur sur la carte ou se trouve le personnage
        Coordonnees coord; /// coordonnées ou se situe le personnage
        string nom; /// nom du personnage

	public:
        /// \fn Personnage(string nom)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe Personnage avec le nom en attribut
        /// \param nom : string nom du personnage
        Personnage(string nom);

        /// \fn void deplacer(Coordonnees coordonnees, Carte* carte)
        /// \brief fonction déplacer
        ///
        /// Permet le déplacement d'un personnage sur la carte et les coordonnées en entrée
        /// \param coordonnees : coordonnées de destination
        /// \param carte : pointeur sur la carte de destination
        void deplacer(Coordonnees coordonnees, Carte* carte);
};
#endif
