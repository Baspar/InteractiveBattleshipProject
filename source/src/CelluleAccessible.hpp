#ifndef CELLULEACCESSIBLE_H
#define CELLULEACCESSIBLE_H

/// \file CelluleAccessible.hpp
/// \brief Fichier contenant la classe CelluleAccessible
/// \author 

#include "Personnage.hpp"
#include "Cellule.hpp"

using namespace std;

/// \class CelluleAccessible
/// \brief classe representant les Cellules du monde auquel les Personnage peuvent acceder

class CelluleAccessible:public Cellule{
    private:
        Personnage* occupant; /// Pointeur sur le personnage qui se trouve dans la cellule
    public :
	/// \fn void CelluleAccessible()
	/// \brief Construit une CelluleAccessible
	void CelluleAccessible();
	/// \fn virtual bool estAccessible()
	/// \brief Verifie si une classe est bien accessible
	/// \return un booleen vrai si la classe est accessible, faux sinon
        virtual bool estAccessible();
};
#endif
