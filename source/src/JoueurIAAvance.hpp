#ifndef JOUEURIAAVANCE_H
#define JOUEURIAAVANCE_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIAAvance.hpp"

using namespace std;

/// \class JoueurDhumainBNia
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIAAvance: public PersonnageNonJouable, PersonnageBNIAAvance{
    public:
        /// \fn JoueurIAAvance(string nomnv)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe JoueurIAAvance avec le nom en attribut
        /// \param nomnv : string nom du joueur
        JoueurIAAvance(string nomnv);
};

#endif
