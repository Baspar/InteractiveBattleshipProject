#ifndef ARMECROIX_H
#define ARMECROIX_H

/// \file ArmeCroix.hpp
/// \brief Gestion de l'Arme Croix
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <iostream>

#include "Arme.hpp"


using namespace std;

/// \class ArmeCroix
/// \brief gestion de l'Arme Croix
///
/// Cette classe gere les informations concernant l'arme du joueur lorsqu'il utilise celle en Croix

class ArmeCroix : public Arme{
    public:
        /// \fn ArmeCroix()
        /// \brief Construit une Arme ne tirant en forme de croix sur la Case a Viser
        ///
        /// Arme tirant sur une case et inflige des degats sur ladite case et celles adjacentes
        ArmeCroix();


        /// \fn void tirer(Coordonnees coordonnees, Grille *grille)
        /// \brief Attaque en croix
        ///
        ///tire sur une case et inflige des degats sur ladite case et celles adjacentes
        /// \param coordonnees : coordonnees de la case que le joueur souhaite viser
        /// \param *grille : pointeur sur la grille sur lequel le joueur tire
        void tirer(const Coordonnees coordonnees, Grille *grille);
};
#endif



