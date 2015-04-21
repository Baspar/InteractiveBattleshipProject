#ifndef PERSONNAGENONJOUABLE_H
#define PERSONNAGENONJOUABLE_H

/// \file PersonnageNonJouable.hpp
/// \brief classe personnage non jouable
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Personnage.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

/// \class PersonnageNonJouable
/// \brief classe définissant un personnage non jouable
///
/// La classe représente un personnage non jouable
class PersonnageNonJouable : public Personnage, PersonnageBNIA{
};
#endif
