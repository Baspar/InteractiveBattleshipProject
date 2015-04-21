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

/// La classe gère la partie: l'initialise, crée les grilles, place les bateaux, 
/// permet aux joueurs de viser les cases, et modifie les grilles à chaque tour

class BatailleNavale : public Combat{

    private:

        int joueurCourant; /// indice joueur courant
        vector<PersonnageBN*> joueurs; /// liste des 2 personnages bataille navale
        vector<Grille> grilles; /// liste des 2 grilles des joueurs

	/// \fn void changerJoueur()
	/// \brief Changer de joueur
	/// Méthode permettant de modifier le joueur courant et la grille courante
        void changerJoueur();

    public:

	/// \fn BatailleNavale(PersonnageBN joueur1, PersonnageBN joueur2)
	/// \brief Constructeur
	/// Constructeur de la classe Bataille Navale
	/// Initialise les 2 joueurs, crée les 2 grilles de taille tailleGrille 
	/// à partir des joueurs puis va demander aux joueurs de placer leurs bateaux 
	/// via la méthode placerBateaux
	/// \param joueur1, joueur2 : 2 joueurs de type PersonnageBN
        BatailleNavale(PersonnageBN joueur1, PersonnageBN joueur2);

	/// \fn void jouer(Coordonnees coordonnees)
 	/// \brief Joueur vise case choisie
	/// Le joueur courant vise la case à jouer et tire avec son arme 
	/// (actualisation des grilles) puis changement de joueur courant
	/// \param coordonnes: coordonnées choisies par le joueur
        void jouer(Coordonnees coordonnees);

};
#endif
