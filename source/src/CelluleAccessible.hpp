#ifndef CELLULEACCESSIBLE_H
#define CELLULEACCESSIBLE_H

/// \file CelluleAccessible.hpp
/// \brief Fichier contenant la classe CelluleAccessible
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Personnage.hpp"
#include "Cellule.hpp"

using namespace std;

/// \class CelluleAccessible
/// \brief classe représentant les cellules du monde auquelles les personnages peuvent accéder

class CelluleAccessible:public Cellule{

    private:
        /// Pointeur sur le personnage qui se trouve dans la cellule
        Personnage* occupant;

    public :
        /// \fn CelluleAccessible()
        /// \brief Construit une CelluleAccessible
        CelluleAccessible();

        /// \fn CelluleAccessible(Action* actionInit)
        /// \brief Construit une CelluleAccessible
        CelluleAccessible(Action* actionInit);

        /// \fn virtual bool estAccessible()
        /// \brief Vérifie si une classe est bien accessible
        /// \return un booleen vrai si la classe est accessible, faux sinon
        bool estAccessible();

        /// \fn void setPersonnage(Personnage* personnage)
        /// \brief place un personnage sur une cellule
        /// \param personnage : pointeur sur personnage à placer sur la cellule
        void setPersonnage(Personnage* personnage);

        /// \fn getPersonnage(CelluleAccessible celluleAccessible);
        /// \brief Getter de Cellule Accessible
        /// \param celluleAccessible : une cellule accessible
        /// \return personnage : pointeur sur un personnage
        Personnage* getPersonnage(CelluleAccessible celluleAccessible);
};
#endif
