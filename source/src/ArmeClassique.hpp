#ifndef ARMECLASSIQUE_H
#define ARMECLASSIQUE_H

/// \file ArmeClassique.hpp
/// \brief Gestion de l'Arme Classique
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <iostream>

#include "Arme.hpp"


using namespace std;

/// \class ArmeClassique
/// \brief gestion de l'Arme Classique
///
/// Cette classe gère les informations concernant l'arme du joueur

class ArmeClassique : public Arme{
    public:
        /// \fn ArmeClassique()
        /// \brief COnstruit une Arme ne tirant que sur la Case à Viser
        ///
        /// Arme tirant sur une case et inflige des dégats sur ladite case
        ArmeClassique();


        /// \fn void tirer(Coordonnees coordonnees, Grille *grille)
        /// \brief Attaque classique
        ///
        ///tire sur une case et inflige des dégats sur ladite case
        /// \param coordonnees : coordonnées de la case que le joueur souhaite viser
        /// \param *grille : pointeur sur la grille sur lequel le joueur tire
        void tirer(const Coordonnees coordonnees, Grille *grille);
};
#endif


