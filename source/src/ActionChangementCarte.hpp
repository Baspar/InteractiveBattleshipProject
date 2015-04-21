#ifndef ACTIONCHANGEMENTCARTE_H
#define ACTIONCHANGEMENTCARTE_H

/// \file ActionChangementCarte.hpp
/// \brief Change la carte si besoin
/// \author

#include "Carte.hpp"
#include "Coordonnees.hpp"



using namespace std;

/// \class ActionChangementCarte
/// \brief gestion changement de carte
///
/// Cette classe gère le changement de carte quand le joueur accède à une case qui permet de changer de carte


class ActionChangementCarte : public Action{
    private:
        Carte* carte; ///Carte sur laquelle le joueur se déplace
        Coordonnees coordonnees; ///Une abscisse et une ordonnée qui référencient de manière non ambiguë le placement du joueur sur la carte

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
