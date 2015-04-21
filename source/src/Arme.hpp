#ifndef ARME_H
#define ARME_H

/// \file Arme.hpp
/// \brief Gestion des armes
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

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
        /// \param coordonnees : coordonnées de la case que le joueur souhaite viser
        void tirer(Coordonnees coordonnees);

        /// \brief Constructeur
        ///
        /// Constructeur de la classe Arme
        Arme();
    private:
        ///nom de l'arme
        string nomArme;
};
#endif
