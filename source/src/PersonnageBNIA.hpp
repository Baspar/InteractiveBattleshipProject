#ifndef PERSONNAGEBNIA_H
#define PERSONNAGEBNIA_H

/// \file PersonnageBNIA.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

/// \class PersonnageBNIA
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
///
/// Cette classe contient les informations sur les personnages de bataille navale dotés d'une intelligence artificielle

class PersonnageBNIA : public PersonnageBN{


    public:
        /// \fn PersonnageBNIA(string nomnv)
        /// \brief Constructeur des persoBNIA
        ///
        /// Constructeur des persoBNIA
        /// \param nomnv : nom du joueur
        PersonnageBNIA(string nomnv);

        /// \fn PersonnageBNIA(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIA(string nomnv, int l, int h, Arme* a);

        /// \fn PersonnageBNIA(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIA(string nomnv, Arme* a);

        /// \fn PersonnageBNIA(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        PersonnageBNIA(string nomnv, int l, int h);

        /// \fn PersonnageBNIA(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNIA
        ///
        /// Constructeur des persoBNIA
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        PersonnageBNIA(string nomnv, vector<int> tBateaux);

        /// \fn PersonnageBNIA(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIA(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn PersonnageBNIA(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNIA(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn PersonnageBNIA(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNIA
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        PersonnageBNIA(string nomnv, int l, int h, vector<int> tBateaux);

        /// \brief Place les bateaux
        ///
        /// Place les bateaux de manière aléatoire
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
        ///
        /// Indique où le PNJ attaque
        /// \param grilleAdverse : grille sur laquelle le joueur visr
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser(Grille* grilleAdverse);
};
#endif
