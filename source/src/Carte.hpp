#ifndef CARTE_H
#define CARTE_H

/// \file Carte.hpp
/// \brief représentant carte
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

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

        ///identifiant, numéro de la carte
        int id;
        /// taille de la grille de la carte
        TailleGrille tailleGrille;
        /// tableau de cellule (carte composée de plusieurs cellules)
        vector<vector<Cellule*> > cellules;

    public:
        /// \fn Carte(int id, TailleGrille tailleGrille)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Carte
        /// \param id: entier numero carte
        /// \param tailleGrille: taille de la grille
        Carte(int id, TailleGrille tailleGrilleInit);

        /// \fn void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees)
        /// \brief déplace le personnage
        ///
        /// Méthode permettant de supprimer le personnage en entrée de sa case de départ, et le place sur la case associée aux coordonnées en entrée
        /// \param personnage: pointeur sur personnage
        /// \param coordonnees: coordonnées destination
        void deplacerPersonnage(Personnage* personnage, Coordonnees coordonnees);

        /// \fn vector<vector<Cellule> > getCellules()
        /// \brief Getter Cellules
        /// \return La liste des cellules de la carte
        vector<vector<Cellule*> > getCellules();


        /// \fn Cellule* getCel(Coordonnees coord)
        /// \brief Getter Cel
        /// \param coord : coordonnées de la cellule
        /// \return la cellule de coordonnées coord
        Cellule* getCel(Coordonnees coord);
};
#endif
