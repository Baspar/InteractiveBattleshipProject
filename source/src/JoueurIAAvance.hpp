#ifndef JOUEURIAAVANCE_H
#define JOUEURIAAVANCE_H

/// \file JoueurDhumainBNia.hpp
/// \brief classe joueur IA
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIAAvance.hpp"

using namespace std;

/// \class JoueurIAAvance
/// \brief classe définissant un joueur IA
///
/// La classe représente un joueur IA se déplaçant sur la carte
class JoueurIAAvance: public PersonnageNonJouable, public PersonnageBNIAAvance{
    public:
        /// \fn JoueurIAAvance(string nomnv)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param nomnv : nom du joueur
        JoueurIAAvance(string nomnv);

        /// \fn JoueurIAAvance(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIAAvance(string nomnv, int l, int h, Arme* a);

        /// \fn JoueurIAAvance(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIAAvance(string nomnv, Arme* a);

        /// \fn JoueurIAAvance(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurIAAvance(string nomnv, int l, int h);

        /// \fn JoueurIAAvance(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNIACheate
        ///
        /// Constructeur des persoBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        JoueurIAAvance(string nomnv, vector<int> tBateaux);

        /// \fn JoueurIAAvance(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIAAvance(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn JoueurIAAvance(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        JoueurIAAvance(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn JoueurIAAvance(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNIACheate
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        JoueurIAAvance(string nomnv, int l, int h, vector<int> tBateaux);
};

#endif
