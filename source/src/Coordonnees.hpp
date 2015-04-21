#ifndef COORDONNEE_H
#define COORDONNEE_H

 /// \file Coordonnees.hpp
 /// \brief Coordonnées sur une carte
 /// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

using namespace std;

/// \class Coordonnees
/// \brief Coordonnees sur une carte
///
/// Classe Coordonnees représentant les coordonnées de notre joueur ou de notre
/// obstacle sur la carte

class Coordonnees {
    private:
        ///entier correspondant à l'abscisse
        int abscisse;
        ///entier correspondant à l'ordonnée
        int ordonnee;

    public:
        /// \fn  Coordonnees(int abs, int ord)
        /// \brief Contructeur paramétré
        ///
        /// Constructeur permettant d'instancier une coordonnée avec une abscisse et une ordonnée
        /// \param abs: entier correspondant à l'abscisse
        /// \param ord: entier correspondant à l'ordonnée
        Coordonnees(int abs, int ord);

};
#endif
