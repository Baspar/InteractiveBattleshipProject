#ifndef PERSONNAGEBNIAAVANCE_H
#define PERSONNAGEBNIAAVANCE_H

/// \file PersonnageBNIAAvance.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

/// \class PersonnageBNIAAvance
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
///
/// Cette classe contient les informations sur les personnages de bataille navale dotés d'une intelligence artificielle

class PersonnageBNIAAvance : public PersonnageBN{

    public:
        /// \fn PersonnageBNIAAvance(string nomnv)
        /// \brief Constructeur des persoBNIAAvance
        ///
        /// Constructeur des persoBNIAAvance
        /// \param nomnv : nom du joueur
        PersonnageBNIAAvance(string nomnv);

        /// \fn PersonnageBNIAAvance(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIAAvance
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIAAvance(string nomnv, int l, int h, Arme* a);

        /// \fn PersonnageBNIAAvance(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIAAvance
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIAAvance(string nomnv, Arme* a);

        /// \fn PersonnageBNIAAvance(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNIAAvance
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        PersonnageBNIAAvance(string nomnv, int l, int h);

        /// \fn PersonnageBNIAAvance(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNIAAvance
        ///
        /// Constructeur des persoBNIAAvance
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        PersonnageBNIAAvance(string nomnv, vector<int> tBateaux);

        /// \fn PersonnageBNIAAvance(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIAAvance
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIAAvance(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn PersonnageBNIAAvance(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIAAvance
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIAAvance(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn PersonnageBNIAAvance(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNIAAvance
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        PersonnageBNIAAvance(string nomnv, int l, int h, vector<int> tBateaux);

        /// \fn Grille placerBateaux()
        /// \brief Place les bateaux
        ///
        /// Place les bateaux de manière aléatoire
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \fn Coordonnees tirerAleatoirement(Grille* grilleAdverse)
        /// \brief Attaque du PNJ
        ///
        /// Indique où le PNJ attaque
        /// \param grilleAdverse : grille sur laquelle le joueur vise
        /// \return les coordonnées de la case à attaquer
        Coordonnees tirerAleatoirement(Grille* grilleAdverse);

        /// \brief Attaque du PNJ lorsqu un bateau est touche
        ///
        /// Indique où le PNJ attaque
        /// \param grilleAdverse : grille sur laquelle le joueur vise
        /// \return les coordonnees de la case à attaquer
        Coordonnees coordonneesAViser(Grille* grilleAdverse);
};
#endif
