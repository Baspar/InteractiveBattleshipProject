#ifndef JOUEURHUMAIN_H
#define JOUEURHUMAIN_H

/// \file JoueurHumain.hpp
/// \brief classe joueur humain
/// \author


#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"

using namespace std;

/// \class JoueurHumain
/// \brief classe définissant un joueur humain
/// La classe représente un joueur humain se déplaçant sur la carte
class joueurHumain : public PersonnageJouable, PersonnageBNHumain{
	
	public :
	
		/// \brief Constructeur paramétré
		/// Constructeur de la classe JoueurHumain avec le nom en attribut
		/// \param nom : string nom du joueur
		JoueurHumain(string nom);
};	
#endif
