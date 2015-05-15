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

	/// \fn void tirerClassique(Coordonnees coordonnees, Grille *grille)
	/// \brief Attaque classique
	///
	///tire sur une case et inflige des dégats sur ladite case
	/// \param coordonnees : coordonnées de la case que le joueur souhaite viser
	/// \param *grille : pointeur sur la grille sur lequel le joueur tire
	void tirerClassique(const Coordonnees coordonnees, Grille *grille);

    public:
        /// \fn Arme()
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Arme
        Arme();


	/// \fn Arme(string nomArme)
        /// \brief Constructeur
        ///
        /// Constructeur parmetre de la classe Arme
	/// \param nomArme : nom de l'Arme 
        Arme(string nomArme);


        /// \fn void tirer(Coordonnees coordonnees)
        /// \brief Attaque
        ///
        /// tire sur une case et inflige des dégâts en fonction de l'arme utilisée
        /// \param coordonnees : coordonnées de la case que le joueur souhaite viser
	/// \param *grille : pointeur sur la grille sur lequel le joueur tire
        void tirer(const Coordonnees coordonnees, Grille *grille);


};
#endif
