#ifndef PERSONNAGEBNIACheateCHEATE_H
#define PERSONNAGEBNIACheateCHEATE_H

/// \file PersonnageBNIACheateCheate.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

/// \class PersonnageBNIACheate
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
///
/// Cette classe contient les informations sur les personnages de bataille navale dotés d'une intelligence artificielle

class PersonnageBNIACheate : public PersonnageBN{


    public:
    /// \fn PersonnageBNIACheate(string nomnv)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
    /// \param nomnv:nom du joueur
        PersonnageBNIACheate(string nomnv);

        /// \brief Place les bateaux
        ///
        /// Place les bateaux de manière aléatoire
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
        ///
        /// Indique où le PNJ attaque
    /// \param grilleAdverse : grille sur laquelle le joueur visr
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser(Grille* grilleAdverse);
};
#endif
