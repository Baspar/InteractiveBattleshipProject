#ifndef ACTION_H
#define ACTION_H

/// \file Action.hpp
/// \brief Lance l'action associée à la case
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include <iostream>

using namespace std;

/// \class Action
/// \brief gestion actions
///
/// Cette classe gère les actions enclenchées par l'accès à une case particulière

class Action{
    private:
        ///Cette chaine de caractère est affichée au début de l'action, il peut s'agir d'un dialogue, d'un conseil, d'une règle du jeu...
        string texteInteraction;
        ///Ce booléen est true par défaut mais devient false une fois que l'action a eu lieu
        bool active;

    public:
        /// \fn virtual void lancerAction ()
        /// \brief Lancement de l'action
        ///
        /// Cette classe gère le lancement de l'action en fonction de la case où le joueur se trouve
        /// Cette méthode est abstraite, elle sera réimplémentée dans les classes héritant de Action
        virtual void lancerAction()=0;

        /// \fn Action(string txtInt)
        /// \brief Constructeur
        ///
        /// \param txtInteraction : le texte d'interaction
        /// Constructeur de la classe Action
        Action(string txtInt);

        /// \fn string getTexteInteraction()
        /// \brief Getter texteInteraction
        /// \return Le texte correspondant à l'action
        string getTexteInteraction();
        
        /// \fn string setTexteInteraction(string texte)
        /// \brief Setter texteInteraction
        /// \param texte : Le texte correspondant à l'action
        void setTexteInteraction(string texte);

        /// \fn void toggleActive()
        /// \brief Passe la variable active de VRAI a FAUX et vise verca
        void toggleActive();

        /// \fn bool isActive()
        /// \brief dit si l'action est active
        /// \return L'état de l'action
        bool isActive();
};
#endif
