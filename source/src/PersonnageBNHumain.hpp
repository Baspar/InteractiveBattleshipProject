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

    private:
        /// \brief Place les bateaux
        ///
        /// Demande au joueur de placer ses bateaux
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
        ///
        /// Demande où le joueur souhaite attaquer
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser();

	public :
	

        /// \fn PersonnageBNHumain(TailleGrille nvtailleGrille, string nvNom, Arme* nvArme, vector<Bateau*> nvbateaux)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe PersonnageBNHumain
	/// \param nvtailleGrille : nouvelle taille de grille
	/// \param nvNom : nom du personnageBN
	/// \param nvArme : nom de l'arme du presonnageBN
	/// \param bateaux: bateaux à ajouter
        PersonnageBNHumain(TailleGrille nvtailleGrille, string nvNom, Arme* nvArme, vector<Bateau*> nvbateaux);
};
#endif
