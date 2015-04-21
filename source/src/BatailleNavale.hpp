#ifndef BATAILLENAVALE_H
#define BATAILLENAVALE_H

/// \file BatailleNavale.hpp
/// \brief Gestion d'un combat bataille navale
/// \author 

#include "Combat.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "PersonnageBN.hpp"
#include <vector>

using namespace std;

/// \class BatailleNavale
/// \brief classe combat bataille navale

/// La classe gere la partie: l'initialise, cree les grilles, place les bateaux, 
/// permet aux joueurs de viser les cases, et modifie les grilles a chaque tour

class BatailleNavale : public Combat{

    private:

        int joueurCourant; /// indice joueur courant
        vector<PersonnageBN*> joueurs; /// liste des 2 personnages bataille navale
        vector<Grille> grilles; /// liste des 2 grilles des joueurs

	/// \fn void changerJoueur()
	/// \brief Changer de joueur
	/// Methode permettant de modifier le joueur courant et la grille courante
        void changerJoueur();

    public:

	/// \fn BatailleNavale(PersonnageBN joueur1, PersonnageBN joueur2)
	/// \brief Constructeur
	/// Constructeur de la classe Bataille Navale
	/// Initialise les 2 joueurs, cree les 2 grilles de taille tailleGrille 
	///a partir des joueurs puis va demander aux joueurs de placer leurs bateaux 
	/// via la methode placerBateaux
	/// \param joueur1, joueur2 : 2 joueur de type PersonnageBN
        BatailleNavale(PersonnageBN joueur1, PersonnageBN joueur2);

	/// \fn void jouer(Coordonnees coordonnees)
 	/// \brief Joueur vise case choisie
	/// Le joueur courant vise la case a jouer et tire avec son arme 
	/// (actualisation les grilles) puis changement de joueur courant
	/// \param coordonnes: coordonnees choisies par le joueur
        void jouer(Coordonnees coordonnees);

};
#endif
