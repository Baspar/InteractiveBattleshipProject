#ifndef ACTION_H
#define ACTION_H

/// \file Action.hpp
/// \brief Lance l'action associée à la case
/// \author

#include <iostream>

using namespace std;

/// \class Action
/// \brief gestion actions
///
/// Cette classe gère les actions enclenchées par l'accès à une case particulière

class Action{
    public:
        /// \brief Lancement de l'action
        ///
        /// Cette classe gère le lancement de l'action en fonction de la case où le joueur se trouve
        /// Cette méthode est abstraite, elle sera réimplémentée dans les classes héritant de Action
        virtual void lancerAction ();
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Action
        Action();

    private:
        string texteInteraction; ///Cette chaine de caractère est affichée au début de l'action, il peut s'agir d'un dialogue, d'un conseil, d'une règle du jeu...
        bool active; ///Ce booléen est true par défaut mais devient false une fois que l'action a eu lieu
};
#endif
