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
        int indiceJoueurCourant;
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
        /// \fn BatailleNavale()
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Bataille Navale
        /// Initialise les 2 joueurs, crée les 2 grilles de taille tailleGrille
        /// à partir des joueurs puis va demander aux joueurs de placer leurs bateaux
        /// via la méthode placerBateaux
        BatailleNavale();

        /// \fn void jouer(Coordonnees coordonnees)
        /// \brief Joueur vise case choisie
        ///
        /// Le joueur courant vise la case à jouer et tire avec son arme
        /// (actualisation des grilles) puis changement de joueur courant
        /// \param coordonnees: coordonnées choisies par le joueur
        void jouer(Coordonnees coordonnees);

        /// \fn PersonnageBN* getPersonnage1() const
        /// \brief Getter du Joueur 1
        ///
        /// \return PersonnageBN*: pointeur sur personnage 1
        PersonnageBN* getPersonnage1() const ;

        /// \fn PersonnageBN* getPersonnage2() const
        /// \brief Getter du Joueur 2
        ///
        /// \return PersonnageBN*: pointeur sur personnage 2
        PersonnageBN* getPersonnage2() const ;

        /// \fn Grille getGrille1()
        /// \brief Getter de la grille 1
        ///
        /// \return Grille: grille 1
        Grille* getGrille1() ;


        /// \fn Grille getGrille2() const
        /// \brief Getter de la grille 2
        ///
        /// \return Grille: grille 2
        Grille* getGrille2()  ;


        /// \fn int getIndiceJoueurCourant() const
        /// \brief Getter de l indice du joueur courant
        ///
        /// \return int:indice du personnage courant
        int getIndiceJoueurCourant() const;


        /// \fn void setIndiceJoueurCourant(const int nvIndice)
        /// \brief Setter de l indice du joueur courant
        ///
        /// \param nvIndice : indice du personnage courant
        void setIndiceJoueurCourant(const int nvIndice);

        /// \fn vector<PersonnageBN*> getJoueurs() const;
        /// \brief Getter de la liste de Joueurs
        ///
        /// \return vector<PersonnageBN*>:vecteur des 2 joueurs s'affrontant à la Bataille Navale
        vector<PersonnageBN*> getJoueurs() const;

        /// \fn vector<Grille> getGrilles() const;
        /// \brief Getter de l'ensemble des grilles
        ///
        /// \return vector<Grille>: Ensemble des grilles
        vector<Grille*> getGrilles() ;

        /// \fn PersonnageBN* retournerGagnant(PersonnageBN* joueur1, PersonnageBN* joueur2)
        /// \brief Retourner Gagnant
        /// \param joueur1: représente le premier joueur initial de notre combat
        /// \param joueur2: représente le deuxième joueur initial de notre combat
        ///
        /// Méthode qui renvoie le gagnant du combat
        /// \return un personnage correspondant au gagnant et null si la partie n'est pas finie
        Personnage* retournerGagnant(Personnage* joueur1, Personnage* joueur2);

        /// \fn void initialiserJoueurCourant(PersonnageBN* joueur1, PersonnageBN* joueur2);
        /// \brief initialise le joueur et les grilles
        /// \param joueur1 : représente le premier joueur du combat
        /// \param joueur2 : représente le deuxième joueur du combat
        ///
        /// Méthode qui initialise les joueurs
        void initialiserJoueurCourant(PersonnageBN* joueur1, PersonnageBN* joueur2);


};
#endif
