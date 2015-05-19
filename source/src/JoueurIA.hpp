#ifndef JOUEURIA_H
#define JOUEURIA_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

/// \class JoueurDhumainBNia
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIA: public PersonnageNonJouable, public PersonnageBNIA{
    public:
        /// \fn JoueurIA(string nomnv)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe JoueurIA avec le nom en attribut
        /// \param nomnv : string nom du joueur
        JoueurIA(string nomnv);
};

#endif
