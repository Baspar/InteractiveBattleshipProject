#ifndef JOUEURIACHEATE_H
#define JOUEURIACHEATE_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIACheate.hpp"

using namespace std;

/// \class JoueurIACheate
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIACheate: public PersonnageNonJouable, public PersonnageBNIACheate{
    public:
        /// \fn JoueurIACheate(string nomnv)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param nomnv : nom du joueur
        JoueurIACheate(string nomnv);

        /// \fn JoueurIACheate(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIACheate(string nomnv, int l, int h, Arme* a);

        /// \fn JoueurIACheate(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIACheate(string nomnv, Arme* a);

        /// \fn JoueurIACheate(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurIACheate(string nomnv, int l, int h);

        /// \fn JoueurIACheate(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        JoueurIACheate(string nomnv, vector<int> tBateaux);

        /// \fn JoueurIACheate(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIACheate(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn JoueurIACheate(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIACheate(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn JoueurIACheate(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurIACheate(string nomnv, int l, int h, vector<int> tBateaux);
};

#endif
