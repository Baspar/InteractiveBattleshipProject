#ifndef JOUEURIACHEATE_H
#define JOUEURIACHEATE_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIACheate.hpp"

using namespace std;

/// \class JoueurDhumainBNia
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIACheate: public PersonnageNonJouable, public PersonnageBNIACheate{
    public:
        /// \fn JoueurIACheate(string nomnv)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe JoueurIACheate avec le nom en attribut
        /// \param nomnv : string nom du joueur
        JoueurIACheate(string nomnv);
};

#endif
