#ifndef GRILLE_H
#define GRILLE_H
/// \file Grille.hpp
/// \brief Fichier contenant la classe Grille
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN
#include "TailleGrille.hpp"
#include "Case.hpp"
#include "Coordonnees.hpp"

#include <vector>
#include <cmath>


using namespace std;

/// \class Grille
/// \brief Grille de bataille navale
///
/// La classe Grille contient une grille qui correspondraà la grille d'n joueur pendant une bataille navale
class Grille{
    private:
        /// Taille de la grille
        TailleGrille tailleGrille;
        /// Liste 2D de toutes les grilles
        vector<vector<Case> > cases;

        /// \fn verifierCase(const Coordonnees caseDepart, const Coordonnees caseArrivee)
        /// \brief verifie les cases
        ///
        /// Vérifie le placement des cases, dans la grille et aligné
        /// \param caseDepart : coordonnees de la case de départ
        /// \param caseArrivee : coordonnees de la case d'arrivee
        /// \return bool : vrai si tt bon, non sinon
        bool verifierCase(const Coordonnees caseDepart, const Coordonnees caseArrivee);

        /// \fn bool verifierPlacement(Coordonnees caseDepart, Coordonnees caseArrivee)
        /// \brief verifie le placement
        ///
        /// Vérifie si l'écartement est bon et s'il n'y a pas de bateau déjà présent sur la ligne
        /// \param caseDepart : coordonnees de la case de départ
        /// \param caseArrivee : coordonnees de la case d'arrivee
        /// \param bateau : bateau que l'on veut placer
        /// \return bool : vrai si tt bon, non sinon
        bool verifierPlacement(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee);

    public:
        /// \fn Grille(int longueur, int hauteur)
        /// \brief Constructeur
        ///
        /// Constructeur paramétré de la classe Grille
        /// \param longueur : longueur de la grille
        /// \param hauteur : hauteur de la grille
        Grille(int longueur, int hauteur);

        /// \fn Grille(const Grille& grille)
        /// \brief Constructeur par recopie
        ///
        /// Constructeur par recopie de la classe Grille
        /// \param longueur : longueur de la grille
        Grille(const Grille& grille);

        /// \fn Case getCaseElt(Coordonnees coordonnees)
        /// \brief récupere la case à partir de Coordonnees
        ///
        /// \param coordonnees : coordonnees de la case
        /// \return Coordonnees
        Case getCaseElt(Coordonnees coordonnees);


        /// \fn void placerBateau(Bateau* bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee)
        /// \brief place le bateau
        ///
        /// \param bateau : bateau à placer sur la case
        /// \param caseDepart : case de départ sur laquelle nous placons le bateau
        /// \param caseArrivee : case d'arrivee sur laquelle nous placons le bateau
        void placerBateau(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee);


        /// \fn bool placementBateauValide(Bateau* bateau, const Coordonnnes caseDepart, const Coordonnes caseArrivee)
        /// \brief vérifie le placement bateau
        ///
        /// \param bateau : bateau à placer sur la case
        /// \param caseDepart : case de départ sur laquelle nous placons le bateau
        /// \param caseArrivee : case d'arrivee sur laquelle nous placons le bateau
        /// \return bool : retourne vrai si on peut placer le bateau faux sinon
        bool placementBateauValide(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee);


        /// \fn bool coupValide(const Coordonnees kase)
        /// \brief vérifie la validité du coup
        ///
        /// \param kase : case que l'on veux vérifier
        /// \return bool : retourne vrai si on peut toucher la case
        bool coupValide(const Coordonnees kase);


        /// \fn void copy(Grille grille)
        /// \brief copie la grille
        /// \param grille : grille que l'on va copier
        ///
        /// copie toutes les données de la grille en entrée dans notre grille
        void copy(const Grille grille);

        /// \fn setTailleGrille(const TailleGrille tailleGrille)
        /// \brief setter de tailleGrille
        /// \param tailleGrille : tailleGrille de notre grille
        void setTailleGrille(const TailleGrille tailleGrillecp);

        /// \fn setCases(const vector<vector<Case> > cases)
        /// \brief setter de cases
        /// \param cases : cases de notre grille
        void setCases(const vector<vector<Case> > casescp);

        /// \fn vector<vector<Case> > getCases() const
        /// \brief Getter de cases
        /// \return cases : cases de notre grille
        vector<vector<Case> > getCases() const;

        /// \fn TailleGrille getTailleGrille() const
        /// \brief Getter de tailleGrille
        /// \return tailleGrille : tailleGrille de notre grille
        TailleGrille getTailleGrille() const;
};

#endif
