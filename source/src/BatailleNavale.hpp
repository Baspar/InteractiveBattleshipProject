#ifndef BATAILLENAVALE_H
#define BATAILLENAVALE_H

/// \file BatailleNavale.hpp
/// \brief Gestion d'un combat bataille navale
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Combat.hpp"
#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "PersonnageBN.hpp"
#include <vector>

using namespace std;

/// \class BatailleNavale
/// \brief classe combat bataille navale
///
/// La classe gère la partie: l'initialise, crée les grilles, place les bateaux,
/// permet aux joueurs de viser les cases, et modifie les grilles à chaque tour

class BatailleNavale : public Combat{
    private:
        /// indice joueur courant
        int joueurCourant;
        /// liste des 2 personnages bataille navale
        vector<PersonnageBN*> joueurs;
        /// liste des 2 grilles des joueurs
        vector<Grille> grilles;

        /// \fn void changerJoueur()
        /// \brief Changer de joueur
        ///
        /// Méthode permettant de modifier le joueur courant et la grille courante
        void changerJoueur();

    public:
        /// \fn BatailleNavale(PersonnageBN joueur1, PersonnageBN joueur2)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Bataille Navale
        /// Initialise les 2 joueurs, crée les 2 grilles de taille tailleGrille
        /// à partir des joueurs puis va demander aux joueurs de placer leurs bateaux
        /// via la méthode placerBateaux
        /// \param joueur1 : joueur de type PersonnageBN
        /// \param joueur2 : joueur de type PersonnageBN
        BatailleNavale();

        /// \fn void jouer(Coordonnees coordonnees)
        /// \brief Joueur vise case choisie
        ///
        /// Le joueur courant vise la case à jouer et tire avec son arme
        /// (actualisation des grilles) puis changement de joueur courant
        /// \param coordonnees: coordonnées choisies par le joueur
        void jouer(Coordonnees coordonnees);

        PersonnageBN* getPersonnage1();
        /// \fn PersonnageBN* getPersonnage1()
        /// \brief Getter du Joueur 1
        ///
        /// \return PersonnageBN*: pointeur sur personnage 1

        PersonnageBN* getPersonnage2();
        /// \fn PersonnageBN* getPersonnage2()
        /// \brief Getter du Joueur 2
        ///
        /// \return PersonnageBN*: pointeur sur personnage 2

        Grille getGrille1();
        /// \fn Grille getGrille1()
        /// \brief Getter de la grille 1
        ///
        /// \return Grille: grille 1

        Grille getGrille2();
        /// \fn Grille getGrille2()
        /// \brief Getter de la grille 2
        ///
        /// \return Grille: grille 2
};
#endif
