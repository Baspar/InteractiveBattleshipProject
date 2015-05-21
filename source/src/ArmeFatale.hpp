#ifndef ARMEFATALE_H
#define ARMEFATALE_H

/// \file ArmeFatale.hpp
/// \brief Gestion de l'Arme Classique
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <iostream>

#include "Arme.hpp"


using namespace std;

/// \class ArmeFatale
/// \brief gestion de l'Arme Fatale
///
/// Cette classe gère les informations concernant l'arme du joueur

class ArmeFatale : public Arme{
    public:
        /// \fn ArmeFatale()
        /// \brief Construit une Arme Fatale
        ///
        /// Arme qui détruit tout un bateau si elle en touche un sinon tire normalement
        ArmeFatale();


        /// \fn void tirer(Coordonnees coordonnees, Grille *grille)
        /// \brief Attaque classique
        ///
        /// Arme qui détruit tout un bateau si elle en touche un sinon tire normalement
        /// \param coordonnees : coordonnées de la case que le joueur souhaite viser
        /// \param *grille : pointeur sur la grille sur lequel le joueur tire
        void tirer(const Coordonnees coordonnees, Grille *grille);
};
#endif
