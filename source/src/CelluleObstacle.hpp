#ifndef CELLULEOBSTACLE_H
#define CELLULEOBSTACLE_H

/// \file CelluleObstacle.hpp
/// \brief Cellule contenant un obstacle
/// \author

#include "Cellule.hpp"
#include <iostream>

using namespace std;

/// \class CelluleObstacle
/// \brief Cellule contenant un obstacle
/// Classe générant une cellule contenant un obstacle sur laquelle le joueur
/// ne peut donc pas accéder

class CelluleObstacle :public Cellule{
    private:
        string nomObstacle; ///Chaine de caractère contenant le nom de l'obstacle
    public:
    /// \fn CelluleObstacle(string nomObstacle)
    /// \brief Constructeur de notre classe
    /// \param nomObstacle: nom correspondant à notre obstacle(mur, eau, ...)
		CelluleObstacle(string nomObstacle);

    /// \fn virtual bool estAccessible()
    /// \brief vérifie si une case est accessible
    /// \return retourne faux car la cellule contient un obstacle
        virtual bool estAccessible();
};
#endif
