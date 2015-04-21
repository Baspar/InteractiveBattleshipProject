#ifndef CARTE_H
#define CARTE_H

/// \file Carte.hpp
/// \brief représentant carte
/// \author

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include <vector>

using namespace std;

/// \class Carte
/// \brief classe représentant une carte
///
/// La classe représente une carte

class Carte{

    private:

        int id; ///identifiant, numéro de la carte
        TailleGrille tailleGrille; /// taille de la grille de la carte
        vector<vector<Cellule> > cellules; /// tableau de cellule (carte composée de plusieurs cellules)

    public:

	/// \fn Carte(int id, TailleGrille tailleGrille)
	/// \brief Constructeur
///
	/// Constructeur de la classe Carte
	/// \param id: entier numero carte
	/// \param tailleGrille: taille de la grille
	Carte(int id, TailleGrille tailleGrille);

	/// \fn void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees)
	/// \brief déplace le personnage
///
	/// Méthode permettant de supprimer le personnage en entrée de sa case de départ, et le place sur la case associée aux coordonnées en entrée
	/// \param personnage: pointeur sur personnage
	/// \param coordonnees: coordonnées destination
        void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees);

};
#endif
