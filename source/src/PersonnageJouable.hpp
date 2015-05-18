#ifndef PERSONNAGEJOUABLE_H
#define PERSONNAGEJOUABLE_H

/// \file PersonnageJouable.hpp
/// \brief classe personnage jouable
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Personnage.hpp"

using namespace std;

/// \class PersonnageJouable
/// \brief classe definissant un personnage jouable
///
/// La classe représente un personnage jouable
class PersonnageJouable : public Personnage{

    public :
    /// \fn PersonnageJouable(string nomnv)
        /// \brief constructeur
        ///
        /// \param nomnv : nom du joueur
    PersonnageJouable(string nomnv);

};
#endif
