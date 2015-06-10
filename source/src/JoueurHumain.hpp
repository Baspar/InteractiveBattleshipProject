#ifndef JOUEURHUMAIN_H
#define JOUEURHUMAIN_H

/// \file JoueurHumain.hpp
/// \brief classe joueur humain
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN


#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"

using namespace std;

/// \class JoueurHumain
/// \brief classe définissant un joueur humain
///
/// La classe représente un joueur humain se déplaçant sur la carte
class JoueurHumain : public PersonnageJouable, public PersonnageBNHumain{

    public :
        /// \fn JoueurHumain(string nomnv, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param nomnv : nom du joueur
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, int l, int h, Arme* a, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, int l, int h, Arme* a, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, Arme* a, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, Arme* a, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, int l, int h, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, int l, int h, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, vector<int> tBateaux, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, vector<int> tBateaux, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, vector<int> tBateaux, Arme* a, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, vector<int> tBateaux, Arme* a, Coordonnees coord, Carte* idCarte);

        /// \fn JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Coordonnees coord, Carte* idCarte)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param coord : coordonnees initiale du personnage
        /// \param idCarte : carte initiale du personnage
        JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Coordonnees coord, Carte* idCarte);
};
#endif
