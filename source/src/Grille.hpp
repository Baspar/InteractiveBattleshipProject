#ifndef GRILLE_H
#define GRILLE_H
/// \file Grille.hpp
/// \brief Fichier contenant la classe Grille
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN
#include "TailleGrille.hpp"
#include "Case.hpp"
#include "Coordonnees.hpp"

#include <vector>


using namespace std;

/// \class Grille
/// \brief Grille de bataille navale
///
/// La classe Grille contient une grille qui correspondraà la grille d'n joueur pendant une bataille navale
class Grille{
    private:
        /// Taille de la grille
        TailleGrille tailleGrille;
        /// Liste 2D de toutes les grilles
        vector<vector<Case> > cases;

    public:
        /// \fn Grille(int longueur, int hauteur)
        /// \brief Constructeur
        ///
        /// Constructeur paramétré de la classe Grille
        /// \param longueur : longueur de la grille
        /// \param hauteur : hauteur de la grille
        Grille(int longueur, int hauteur);

	/// \fn Case GetCase(Coordonnees coordonnees)
	/// \brief récupere la case à partir de Coordonnees
	///
	/// \param coordonnees : coordonnees de la case
	Case getCase(Coordonnees coordonnees);

	/// \fn void placerBateau(*Bateau bateau, Case caseDepart, Case caseArrivee)
	/// \brief place le bateau
	///
	/// \param bateau : bateau à placer sur la case
	/// \param caseDepart : case de départ sur laquelle nous placons le bateau
	/// \param caseArrivee : case d'arrivee sur laquelle nous placons le bateau
	void placerBateau(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee);


	/// \fn void copy(Grille grille)
	/// \brief copie la grille
	/// \param grille : grille que l'on va copier
	/// copie toutes les données de la grille en entrée dans notre grille 
	void copy(const Grille grille);
};

#endif
