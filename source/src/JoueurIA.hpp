#ifndef JOUEURIA_H
#define JOUEURIA_H

/// \file JoueurIA.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

/// \class JoueurIA
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIA: public PersonnageNonJouable, public PersonnageBNIA{
    public:
        /// \fn JoueurIA(string nomnv)
        /// \brief Constructeur des persoBNIA
        ///
        /// Constructeur des persoBNIA
        /// \param nomnv : nom du joueur
        JoueurIA(string nomnv);

        /// \fn JoueurIA(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIA(string nomnv, int l, int h, Arme* a);

        /// \fn JoueurIA(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIA(string nomnv, Arme* a);

        /// \fn JoueurIA(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurIA(string nomnv, int l, int h);

        /// \fn JoueurIA(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNIA
        ///
        /// Constructeur des persoBNIA
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        JoueurIA(string nomnv, vector<int> tBateaux);

        /// \fn JoueurIA(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIA(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn JoueurIA(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIA(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn JoueurIA(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurIA(string nomnv, int l, int h, vector<int> tBateaux);
};

#endif
