#ifndef CELLULECOMBAT_H
#define CELLULECOMBAT_H

/// \file CelluleCombat.hpp
/// \brief Fichier contenant le classe CelluleCombat
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Personnage.hpp"
#include "CelluleAccessible.hpp"

using namespace std;

/// \class CelluleCombat
/// \brief CelluleAccessible permettant d'engager un Combat
class CelluleCombat : public CelluleAccessible{

    private:
        Personnage* adversaire; /// Joueur adverse que le joueur sur la Case affrontera

    public:
        /// \fn void CelluleCombat()
        /// \brief Construit une Cellule
        CelluleCombat();
};
#endif
