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
        Coordonnees(const int abs, const int ord);

        /// \fn Coordonnees(const Coordonnees& coord)
        /// \brief Contructeur par recopie
        ///
        /// Constructeur permettant d'instancier une coordonnée avec instance de Coordonnees
        /// \param coord : Coordonnees a recopier
        Coordonnees(const Coordonnees& coord);
        //
        /// \fn void copy(const Coordonnees coordcp)
        /// \brief Copieur de coordonnes
        void copy(const Coordonnees coordcp);

        /// \fn int getAbscisse()
        /// \brief getteur de l'abscisse
        /// \return entier correspondant à l'abscisse
        int getAbscisse() const;

        /// \fn int getOrdonnee()
        /// \brief getteur de l'ordonnée
        /// \return entier correspondant à l'ordonnée
        int getOrdonnee() const;

        /// \fn Coordonnees coordonneesVides()
        /// \brief vérifie si la coordonnee est vide ou non(créé par un IA ou non) 
        /// \return bool true si la coordonnee est vide, false sinon
        bool coordonneesVides();


};
#endif
