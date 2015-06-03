#ifndef CELLULE_H
#define CELLULE_H

/// \file Cellule.hpp
/// \brief Fichier contenant la classe Cellule
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Action.hpp"
#include <iostream>


using namespace std;

/// \class Cellule
/// \brief Cellule composant les Zones du Monde où le joueur se déplace
class Cellule{
    private:
        /// Pointeur sur une action qui sera appliquée au joueur
        Action* action;
        /// Type de cellule (0=accessible, 1=obstacle)
        string typeDeCellule;

    public:
        /// \fn Cellule(Action* actionInit, string typeCell)
        /// \brief Construit une Cellule de manière paramétrée
        Cellule(string typeCell);

        /// \fn void setAction(const Action* const actionCp)
        /// \brief set l'action
        void setAction(Action* const actionCp);

        /// \fn void lancerAction()
        /// \brief Lance l'action et effectue les modifications nécessaires suite à cette action
        void lancerAction() const;

        /// \fn bool estAccessible();
        /// \brief Vérifie si la Cellule est Accessible ou non
        ///
        /// Cette méthode est virtuelle car la classe est abstraite, elle sera
        /// implémentée dans les classes filles
        /// \return un booleen: vrai si la cellule est accessible, faux sinon
        virtual bool estAccessible()=0;

        /// \fn string getTypeDeCellule() const
        /// \brief Getter typeDeCellule
        /// \return Type de cellule
        string getTypeDeCellule() const;

        /// \fn Action* getActionCellule()
        /// \brief Getter Action
        /// \return action de la cellule
        Action* getActionCellule() const;
};
#endif
