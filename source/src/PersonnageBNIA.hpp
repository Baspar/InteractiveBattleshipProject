#ifndef PERSONNAGEBNIA_H
#define PERSONNAGEBNIA_H

/// \file PersonnageBNIA.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"

using namespace std;

/// \class PersonnageBNIA
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
///
/// Cette classe contient les informations sur les personnages de bataille navale dotés d'une intelligence artificielle

class PersonnageBNIA : public PersonnageBN{

    private:
        /// \brief Place les bateaux
        ///
        /// Place les bateaux de manière aléatoire
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
        ///
        /// Indique où le PNJ attaque
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser();
	public :
        /// \fn PersonnageBNIA()
        /// \brief Constructeur
        ///
        /// Constructeur de la classe PersonnageBNIA
        PersonnageBNIA();
};
#endif
