#ifndef JOUEURIA_H
#define JOUEURIA_H

/// \file JoueurIA.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageJouable.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

/// \class JoueurIA
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIA : public PersonnageJouable, PersonnageBNIA{
	public:
        /// \fn JoueurIA(string nomnv)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe JoueurIA avec le nom en attribut
        /// \param nomnv : string nom du joueur
        JoueurIA(string nomnv);
};

#endif
