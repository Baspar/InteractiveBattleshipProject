#ifndef ARME_H
#define ARME_H

/// \file Arme.hpp
/// \brief Gestion des armes
/// \author

#include "Coordonnees.hpp"
#include <iostream>

using namespace std;

/// \class Arme
/// \brief gestion de l'arme
///
/// Cette classe gère les informations concernant l'arme du joueur

class Arme{
    public:
        /// \brief Attaque
        ///
        /// tire sur une case et inflige des dégâts en fonction de l'arme utilisée
        /// \param Coordonnees : coordonnées de la case que le joueur souhaite viser
        void tirer(Coordonnees coordonnees);

        /// \brief Constructeur
        ///
        /// Constructeur de la classe Arme
        Arme();
    private:
        string nomArme;///nom de l'arme
};
#endif
