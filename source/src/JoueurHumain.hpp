#ifndef JOUEURHUMAIN_H
#define JOUEURHUMAIN_H

/// \file JoueurHumain.hpp
/// \brief classe joueur humain
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN


#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"

using namespace std;

/// \class JoueurHumain
/// \brief classe définissant un joueur humain
///
/// La classe représente un joueur humain se déplaçant sur la carte
class JoueurHumain : public PersonnageJouable, PersonnageBNHumain{

    public :

        /// \fn JoueurHumain(string nomnv)
        /// \brief Constructeur paramétré
        ///
        /// Constructeur de la classe JoueurHumain avec le nom en attribut
        /// \param nomnv : string nom du joueur
        JoueurHumain(string nomnv);

        /// \fn ~JoueurHumain()
        /// \brief Destructeur paramétré
        ///
        /// Destructeur de la classe JoueurHumain avec le nom en attribut

};
#endif
