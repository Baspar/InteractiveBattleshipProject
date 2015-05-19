#ifndef JOUEURDHUMAINBNIA_H
#define JOUEURDHUMAINBNIA_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageJouable.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

/// \class JoueurDhumainBNia
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurDhumainBNia : public PersonnageJouable, public PersonnageBNIA{
    public:
        /// \fn JoueurDhumainBNia(string nomnv)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param nomnv : nom du joueur
        JoueurDhumainBNia(string nomnv);

        /// \fn JoueurDhumainBNia(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurDhumainBNia(string nomnv, int l, int h, Arme* a);

        /// \fn JoueurDhumainBNia(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurDhumainBNia(string nomnv, Arme* a);

        /// \fn JoueurDhumainBNia(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurDhumainBNia(string nomnv, int l, int h);

        /// \fn JoueurDhumainBNia(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        JoueurDhumainBNia(string nomnv, vector<int> tBateaux);

        /// \fn JoueurDhumainBNia(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurDhumainBNia(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn JoueurDhumainBNia(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurDhumainBNia(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn JoueurDhumainBNia(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurDhumainBNia(string nomnv, int l, int h, vector<int> tBateaux);
};

#endif
