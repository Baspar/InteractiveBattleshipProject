#ifndef OBJET_H
#define OBJET_H

/// \file Objet.hpp
/// \brief Gestion des objets de l'inventaire
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include <iostream>

using namespace std;

/// \class Objet
/// \brief Gestion des objets
///
/// Cette classe gère les informations concernant les objets de l'inventaire

class Objet{
    private:
        ///nom de l'objet
        string nom;



    public:
        /// \fn Objet(const string nom)
        /// \brief constructeur parametré de Objet
        /// \param nomObjet : Le nom de l'objet
        Objet(const string nomObjet);

        /// \fn string getNom() const
        /// \brief Getter du nom de l'objet
        string getNom() const;

        /// \fn virtual bool metFinAuJeu() const=0
        /// \brief Methode Virtuelle pure retournant si l'objet
        virtual bool metFinAuJeu() const=0;
};
#endif
