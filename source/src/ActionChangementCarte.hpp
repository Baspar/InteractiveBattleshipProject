#ifndef ACTIONCHANGEMENTCARTE_H
#define ACTIONCHANGEMENTCARTE_H

/// \file ActionChangementCarte.hpp
/// \brief Change la carte si besoin
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Carte.hpp"
#include "Coordonnees.hpp"



using namespace std;

/// \class ActionChangementCarte
/// \brief gestion changement de carte
///
/// Cette classe gère le changement de Carte quand le joueur accède à une Cellule qui permet de changer de Carte


class ActionChangementCarte : public Action{
    private:
        ///Carte sur laquelle le joueur se déplace
        Carte* carte;
        ///Une abscisse et une ordonnée qui référencient de manière non ambiguë le placement du joueur sur la carte
        Coordonnees coordonnees;

    public:
        /// \brief Changement de carte
        ///
        /// Cette classe gère le changement de carte quand le joueur accède à une case qui permet de changer de carte
        virtual void lancerAction();

        /// \brief Constructeur
        ///
        /// Constructeur de la classe ActionChangementCarte
        ActionChangementCarte();
};
#endif
