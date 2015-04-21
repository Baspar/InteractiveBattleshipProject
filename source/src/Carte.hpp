#ifndef CARTE_H
#define CARTE_H

/// \file Carte.hpp
/// \brief representant carte
/// \author

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Cellule.hpp"
#include <vector>

using namespace std;

/// \class Carte
/// \brief classe representant une carte
/// La classe represente une carte 

class Carte{

    private:

        int id; ///identifiant, numero de la carte
        TailleGrille tailleGrille; /// taille de la grille de la carte
        vector<vector<Cellule> > cellules; /// tableau de cellule (carte composee de plusieurs cellules)

    public:

	/// \fn Carte(int id, TailleGrille tailleGrille)
	/// \brief Constructeur
	/// Constructeur de la classe Carte
	/// \param id: entier numero carte
	/// \param tailleGrille: taille de la grille
	Carte(int id, TailleGrille tailleGrille);

	/// \fn void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees)
	/// \brief deplace le personnage
	/// Methode permettant de supprimer le personnage en entree de sa case de depart, et le place sur la case associee aux coordonnees en entree
	/// \param personnage: pointeur sur personnage
	/// \param coordonnees: coordonnees destination
        void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees);

};
#endif
