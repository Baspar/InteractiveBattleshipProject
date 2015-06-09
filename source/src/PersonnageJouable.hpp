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

    private:
        /// Coordonnées initiales du personnge, sur lesquels il sera remis en cas de perte
        Coordonnees coordInit;
        /// Coordonnées initiales du personnge, sur lesquels il sera remis en cas de perte
        Carte* idCarteInit;

    public :
        /// \fn PersonnageJouable(string nomnv, Coordonnees coord, Carte* idCarte)
        /// \brief constructeur
        ///
        /// \param nomnv : nom du joueur
        /// \param coord : coordonnees du joueur
        /// \param idCarte : pointeur sur carte où se trouve le joueur
        PersonnageJouable(string nomnv, Coordonnees coord, Carte* idCarte);


	/// \fn PersonnageJouable(string nomnv)
        /// \brief constructeur
        ///
        /// \param nomnv : nom du joueur
        PersonnageJouable(string nomnv);

        /// \fn void deplacementInitial()
        /// \brief Remet le personnage à son emplacement initial
        void deplacementInitial();

};
#endif
