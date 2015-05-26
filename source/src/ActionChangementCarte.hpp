#ifndef ACTIONCHANGEMENTCARTE_H
#define ACTIONCHANGEMENTCARTE_H

/// \file ActionChangementCarte.hpp
/// \brief Change la carte si besoin
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Coordonnees.hpp"
#include "Carte.hpp"



using namespace std;

/// \class ActionChangementCarte
/// \brief gestion changement de carte
///
/// Cette classe gère le changement de Carte quand le joueur accède à une Cellule qui permet de changer de Carte


class ActionChangementCarte : public Action{
    private:
        /// Carte d'origine
        Carte* carteInitiale;
        /// Coordonnees d'origine
        Coordonnees coordonneesInitiales;
        /// Carte de destination
        Carte* carteDestination;
        /// Coordonnees de destination
        Coordonnees coordonneesDestination;

    public:
        /// \fn void lancerAction()
        /// \brief Changement de carte
        ///
        /// Cette classe gère le changement de carte quand le joueur accède à une case qui permet de changer de carte
        void lancerAction();

        /// \fn ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest)
        /// \brief Constructeur parametre
        ///
        /// Constructeur de la classe ActionChangementCarte
        /// \param carteInit : Carte d'origine
        /// \param carteDest : Carte de destination
        /// \param coordInit : Coordonnees d'origine
        /// \param coordDest : Coordonnees de destination
        ActionChangementCarte(Carte* carteInit, Carte* carteDest, Coordonnees coordInit, Coordonnees coordDest);
};
#endif
