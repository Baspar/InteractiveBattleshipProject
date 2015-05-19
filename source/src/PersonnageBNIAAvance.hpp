#ifndef PERSONNAGEBNIAAVANCE_H
#define PERSONNAGEBNIAAVANCE_H

/// \file PersonnageBNIAAvance.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

/// \class PersonnageBNIAAvance
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
///
/// Cette classe contient les informations sur les personnages de bataille navale dotés d'une intelligence artificielle

class PersonnageBNIAAvance : public PersonnageBN{
    private:
        Coordonnees caseTouchee;


    public:
        /// \fn PersonnageBNIAAvance(string nomnv)
        /// \brief Constructeur des persoBNIA
        ///
        /// Constructeur des persoBNIA
        /// \param nomnv:nom du joueur
        PersonnageBNIAAvance(string nomnv);

        /// \brief Place les bateaux
        ///
        /// Place les bateaux de manière aléatoire
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
        ///
        /// Indique où le PNJ attaque
        /// \param grilleAdverse : grille sur laquelle le joueur vise
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser1(Grille* grilleAdverse);

        /// \brief Attaque du PNJ lorsqu un bateau est touche
        ///
        /// Indique où le PNJ attaque
        /// \param grilleAdverse : grille sur laquelle le joueur vise
        /// \return les coordonnees de la case à attaquer
        Coordonnees coordonneesAViser(Grille* grilleAdverse);

        /// \brief Booleen autour d une case
        ///
        /// Indique si auncune case autour est touchee
        /// \param grilleAdverse : grille sur laquelle le joueur vise
        /// \param coordonnees : case
        /// \return booleen
        Coordonnees aucuneToucheeAutour(Grille* grille,Coordonnees coordonneesCT);

        /// \brief Getter de case touchee
        ///
        /// Getter de la case touchee
        /// \return case touchee
        Coordonnees getCaseTouchee();

        /// \brief Setter de case touchee
        ///
        /// Setter de la case touchee
        /// \param  case touchee
         void setCaseTouchee(Coordonnees c);

};
#endif
