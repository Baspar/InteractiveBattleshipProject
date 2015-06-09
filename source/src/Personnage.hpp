#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/// \file Personnage.hpp
/// \brief classe d'un personnage du jeu
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Inventaire.hpp"
#include <iostream>

using namespace std;

/// \class Personnage
/// \brief classe définissant un personnage
///
/// La classe représente un personnage du jeu, contrôlable ou non, humain ou non

class Carte;

class Personnage{

    private:
        /// pointeur sur la carte ou se trouve le personnage
        Carte* carte;
        /// coordonnées ou se situe le personnage
        Coordonnees coord;
        /// nom du personnage
        string nom;
	/// inventaire du joueur
	Inventaire* inventaire;

    public:

    	/// \fn Personnage(string nomnv)
        /// \brief constructeur
        ///
        /// \param nomnv : nom du joueur
    	Personnage(string nomnv);


        /// \fn void deplacer(Coordonnees coordonnees, Carte* carte)
        /// \brief fonction déplacer
        ///
        /// Permet le déplacement d'un personnage sur la carte et les coordonnées en entrée
        /// \param coordonnees : coordonnées de destination
        /// \param carte : pointeur sur la carte de destination
        void deplacer(Coordonnees coordonnees, Carte* carteEntree);

        /// \fn Coordonnees getCoordonnees() const
        /// \brief Getter Coordonnees
        /// \return Les coordonnees du personnage
        Coordonnees getCoordonnees() const;

        /// \fn Carte getCarte() const
        /// \brief Getter Carte
        /// \return Un pointeur sur la carte du personnage
        Carte* getCarte() const;

	/// \fn string getNom() const
        /// \brief Getter Nom
        /// \return Le nom du joueur
        string getNom() const;

        /// \fn vodi setCoordonnees(Coordonnees coordSet)
        /// \brief Setter Coordonnees
        /// \param coordSet Les coordonnees du personnage
        void setCoordonnees(Coordonnees coordSet);

        /// \fn void setCarte(Carte* carteSet)
        /// \brief Setter Carte
        /// \param carteSet : la carte à pointer en attribut
        void setCarte(Carte* carteSet);

	/// \fn Inventaire* getInventaire()
        /// \brief Getter Inventaire
        /// \return l'inventaire du personnage
        Inventaire* getInventaire();

};
#endif
