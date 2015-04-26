#ifndef ACTIONCOMBAT_H
#define ACTIONCOMBAT_H

/// \file ActionCombat.hpp
/// \brief Lance un combat quand besoin
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Personnage.hpp"
#include "Action.hpp"

using namespace std;

/// \class ActionCombat
/// \brief gestion lancement du combat
///
/// Cette classe lance un Combat lorsque le Joueur se trouve sur une case où il est menacé

class ActionCombat : public Action{
    private:
        /// Joueur contre lequel le joueur va effectuer un combat
        Personnage* adversaire;
    public:
        /// \fn virtual void lancerAction()
        /// \brief Lancement de l'action
        ///
        /// Cette classe gère le lancement du combat en fonction de la case où le joueur se trouve
        void lancerAction();

        /// \fn ActionCombat()
        /// \brief Constructeur
        ///
        /// Constructeur de la classe ActionCombat
        ActionCombat();
};
#endif
