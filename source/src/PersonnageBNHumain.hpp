#ifndef PERSONNAGEBNHUMAIN_H
#define PERSONNAGEBNHUMAIN_H

/// \file PersonnageBNHumain.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Coordonnees.hpp"
#include "Bateau.hpp"
#include <vector>

using namespace std;

/// \class PersonnageBNHumain
/// \brief Personnage de bataille navale associé au joueur
///
/// Cette classe contient les informations sur le personnage de bataille navale associé au joueur

class PersonnageBNHumain : public PersonnageBN{


    public:
    /// \fn PersonnageBNHumain(string nomnv)
        /// \brief Constructeur des persoBNHumain
        ///
        /// Constructeur des persoBNHumain
    /// \param nomnv:nom du joueur
        PersonnageBNHumain(string nomnv);
        

    private:
        /// \brief Place les bateaux
        ///
        /// Demande au joueur de placer ses bateaux
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
    ///
    /// Demande où le joueur souhaite attaquer
    /// \param grilleAdverse : grille de l'adversaire
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser(Grille* grilleAdverse);


      
};
#endif
