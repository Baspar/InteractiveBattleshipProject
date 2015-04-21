#ifndef CELLULEOBSTACLE_H
#define CELLULEOBSTACLE_H

/// \file CelluleObstacle.hpp
/// \brief Cellule contenant un obstacle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Cellule.hpp"
#include <iostream>

using namespace std;

/// \class CelluleObstacle
/// \brief Cellule contenant un obstacle
///
/// Classe générant une cellule contenant un obstacle sur laquelle le joueur
/// ne peut donc pas accéder

class CelluleObstacle :public Cellule{
    public:
        /// \fn CelluleObstacle(string nomObstacle)
        /// \brief Constructeur de notre classe
        /// \param nomObstacle: nom correspondant à notre obstacle(mur, eau, ...)
        CelluleObstacle();

        /// \fn virtual bool estAccessible()
        /// \brief vérifie si une case est accessible
        /// \return retourne faux car la cellule contient un obstacle
        virtual bool estAccessible();
};
#endif
