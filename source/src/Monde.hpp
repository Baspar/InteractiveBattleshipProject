#ifndef MONDE_H
#define MONDE_H

/// \file Monde.hpp
/// \brief classe du monde du jeu
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Carte.hpp"
#include "Personnage.hpp"
#include "CelluleAccessible.hpp"
#include <vector>

using namespace std;

/// \class Monde
/// \brief classe définissant un monde
///
/// La classe représente un monde constitué de carte sur lequel évolue le joueur

class Monde{

    private :
        /// liste des cartes accessible du monde
        vector<Carte> cartes;

    public:
        /// \fn Monde()
        /// \brief Constructeur par défaut
        ///
        /// Constructeur de la classe Monde par défaut
        Monde();

        /// \fn void placerJoueurs(vector<Personnage> listePerso, vector<int> listeIdCarte, vector<Coordonnees> listeCoord)
        /// \brief Methode placerJoueurs
        ///
        /// méthode qui place les joueurs dans le monde
        void placerJoueurs(vector<Personnage*> listePerso, vector<int> listeIdCarte, vector<Coordonnees> listeCoord);
        
        /// \fn void void placerActions()
        /// \brief Methode placerActions
        ///
        /// méthode qui place les actions dans le monde
        void placerActions(vector<Personnage*> listePerso);
};
#endif
