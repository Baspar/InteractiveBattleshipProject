#ifndef ARMECHERCHEUSE_H
#define ARMECHERCHEUSE_H

/// \file ArmeChercheuse.hpp
/// \brief Gestion de l'Arme Chercheuse
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <iostream>

#include "Arme.hpp"


using namespace std;

/// \class ArmeChercheuse
/// \brief gestion de l'Arme Chercheuse
///
/// Cette classe gère les informations concernant l'arme du joueur

class ArmeChercheuse : public Arme{
    public:
        /// \fn ArmeChercheuse()
        /// \brief Construit une Arme qui tire sur une case bateau de manière aléatoire
        ///
        /// Arme tirant sur une case et inflige des dégats sur ladite case
        ArmeChercheuse();


        /// \fn void tirer(Coordonnees coordonnees, Grille *grille)
        /// \brief Attaque Chercheuse
        ///
        ///tire sur une case et inflige des dégats sur ladite case
        ///
        /// \param *grille : pointeur sur la grille sur lequel le joueur tire
        void tirer(Coordonnees coordonnees, Grille *grille);
};
#endif



