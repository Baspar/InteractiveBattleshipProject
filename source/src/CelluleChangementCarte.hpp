#ifndef CELLULECHANGEMENTCARTE_H
#define CELLULECHANGEMENTCARTE_H

/// \file CelluleChangementCarte.hpp
/// \brief Fichier contenant le classe CelluleChangementCarte
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "CelluleAccessible.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"
#include "ActionChangementCarte.hpp"

using namespace std;

/// \class CelluleChangementCarte
/// \brief CelluleAccessible permettant d'engager un ChangementCarte
class CelluleChangementCarte : public CelluleAccessible{
    public:
        /// \fn CelluleChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest)
        /// \brief Construit une Cellule
        CelluleChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest);
};
#endif
