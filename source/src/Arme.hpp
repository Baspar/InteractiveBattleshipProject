#ifndef ARME_H
#define ARME_H

/// \file Arme.hpp
/// \brief Gestion des armes
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Grille.hpp"
#include <iostream>

using namespace std;

/// \class Arme
/// \brief gestion de l'arme
///
/// Cette classe gère les informations concernant l'arme du joueur

class Arme{
    private:
        ///nom de l'arme
        string nomArme;

	

    public:
        /// \fn string getNomArme() const
        /// \brief getter de nomArme
        ///
        /// retourne le nom de l'Arme
        /// \return string nom de l'arme
        string getNomArme() const;

        /// \fn void setNomArme(const string nvNomArme)
        /// \brief setter de nomArme
        ///
        /// modifie le nom de l'Arme
        /// \param nvNomArme: nom de l'Arme
        void setNomArme(const string nvNomArme);
       
        /// \fn void tirer(Coordonnees coordonnees)
        /// \brief Attaque
        ///
        /// tire sur une case et inflige des dégâts en fonction de l'arme utilisée
        /// \param coordonnees : coordonnées de la case que le joueur souhaite viser
	/// \param *grille : pointeur sur la grille sur lequel le joueur tire
        virtual void tirer(const Coordonnees coordonnees, Grille *grille){};
	
	/// \fn Arme(string nom)
	/// \brief Constructeur parametre de la classe Arme
	/// \param nom : nom de l'arme
	Arme(string nom){};

};
#endif
