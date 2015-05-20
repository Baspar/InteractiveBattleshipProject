#ifndef CELLULECHANGEMENTCARTE_H
#define CELLULECHANGEMENTCARTE_H

/// \file CelluleChangementCarte.hpp
/// \brief Fichier contenant le classe CelluleChangementCarte
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "CelluleAccessible.hpp"
#include "Carte.hpp"
#include "Coordonnees.hpp"

using namespace std;

/// \class CelluleChangementCarte
/// \brief CelluleAccessible permettant d'engager un ChangementCarte
class CelluleChangementCarte : public CelluleAccessible{

    private:
        /// Carte de destination
        Carte* carte;
        /// Coordonnees de desination
        Coordonnees coordonnees;

    public:
        /// \fn CelluleChangementCarte(Carte* carteCp, Coordonnees coordCp)
        /// \brief Construit une Cellule
        CelluleChangementCarte(Carte* carteCp, Coordonnees coordCp);
};
#endif
