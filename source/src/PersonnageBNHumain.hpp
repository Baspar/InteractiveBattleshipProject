#ifndef PERSONNAGEBNHUMAIN_H
#define PERSONNAGEBNHUMAIN_H

/// \file PersonnageBNHumain.hpp
/// \brief Personnages de bataille navale dotés d'une intelligence artificielle
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "PersonnageBN.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "Coordonnees.hpp"
#include "Bateau.hpp"
#include <vector>

using namespace std;

/// \class PersonnageBNHumain
/// \brief Personnage de bataille navale associé au joueur
///
/// Cette classe contient les informations sur le personnage de bataille navale associé au joueur

class PersonnageBNHumain : public PersonnageBN{


    public:
        /// \fn PersonnageBNHumain(string nomnv)
        /// \brief Constructeur des persoBNHumain
        ///
        /// Constructeur des persoBNHumain
        /// \param nomnv : nom du joueur
        PersonnageBNHumain(string nomnv);

        /// \fn PersonnageBNHumain(string nomnv, int l, int h, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNHumain
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNHumain(string nomnv, int l, int h, Arme* a);

        /// \fn PersonnageBNHumain(string nomnv, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNHumain
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNHumain(string nomnv, Arme* a);

        /// \fn PersonnageBNHumain(string nomnv, int l, int h)
        /// \brief Constructeur (très) parametre de personnageBNHumain
        /// \param nomnv : nom du personnage
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        PersonnageBNHumain(string nomnv, int l, int h);

        /// \fn PersonnageBNHumain(string nomnv, vector<int> tBateaux)
        /// \brief Constructeur des persoBNHumain
        ///
        /// Constructeur des persoBNHumain
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du joueur
        PersonnageBNHumain(string nomnv, vector<int> tBateaux);

        /// \fn PersonnageBNHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNHumain
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a);

        /// \fn PersonnageBNHumain(string nomnv, vector<int> tBateaux, Arme* a)
        /// \brief Constructeur (très) parametre de personnageBNHumain
        /// \param tBateaux : vector de taille de bateaux
        /// \param nomnv : nom du personnage
        /// \param a : pointeur sur l'arme souhaitée
        PersonnageBNHumain(string nomnv, vector<int> tBateaux, Arme* a);

        /// \fn PersonnageBNHumain(string nomnv, int l, int h, vector<int> tBateaux)
        /// \brief Constructeur (très) parametre de personnageBNHumain
        /// \param nomnv : nom du personnage
        /// \param tBateaux : vector de taille de bateaux
        /// \param l : longueur de la grille
        /// \param h : hauteur de la grille
        PersonnageBNHumain(string nomnv, int l, int h, vector<int> tBateaux);

        /// \brief Place les bateaux
        ///
        /// Demande au joueur de placer ses bateaux
        /// \return une grille avec les bateaux placés
        Grille placerBateaux();

        /// \brief Attaque du PNJ
    ///
    /// Demande où le joueur souhaite attaquer
    /// \param grilleAdverse : grille de l'adversaire
        /// \return les coordonnées de la case à attaquer
        Coordonnees coordonneesAViser(Grille* grilleAdverse);



};
#endif
