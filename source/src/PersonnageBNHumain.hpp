#ifndef PERSONNAGEBNHUMAIN_H
#define PERSONNAGEBNHUMAIN_H

/// \file PersonnageBNHumain.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author

#include "PersonnageBN.hpp"

using namespace std;

/// \class PersonnageBNHumain 
/// \brief Personnage de bataille navale associé au joueur
/// Cette classe contient les informations sur le personnage de bataille navale associé au joueur

class PersonnageBNHumain : public PersonnageBN{

    private:
/// \brief Place les bateaux
/// Demande au joueur de placer ses bateaux
/// \return une grille avec les bateaux placés
        Grille placerBateaux();
/// \brief Attaque du PNJ
/// Demande où le joueur souhaite attaquer
/// \return les coordonnées de la case à attaquer
        Coordonnees caseAViser();

	public : 
/// \brief Constructeur
/// Constructeur de la classe PersonnageBNHumain
		PersonnageBNHumain();
};
#endif
