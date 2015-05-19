#ifndef JOUEURIA_H
#define JOUEURIA_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageJouable.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

/// \class JoueurDhumainBNia
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurDhumainBNia : public PersonnageJouable, public PersonnageBNIA{
    public:
        /// \fn JoueurDhumainBNia(string nomnv)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe JoueurDhumainBNia avec le nom en attribut
        /// \param nomnv : string nom du joueur
        JoueurDhumainBNia(string nomnv);
};

#endif
