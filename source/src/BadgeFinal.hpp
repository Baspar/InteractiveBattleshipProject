#ifndef BADGEFINAL_H
#define BADGEFINAL_H

/// \file BadgeFinal.hpp
/// \brief Fichier de la classe BadgeFinal
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include <iostream>
#include "Objet.hpp"

using namespace std;

/// \class BadgeFinal
/// \brief Gestion des badges finaux
///
/// Cette classe gère les informations concernant les badges finaux

class BadgeFinal : public Objet{
    public:
        /// \fn BadgeFinal();
        /// \brief constructeur du badge final
        BadgeFinal();

        /// \fn bool metFinAuJeu() const
        /// \brief Methode Virtuelle pure retournant si l'objet met fin au jeu
        virtual bool metFinAuJeu() const;
};
#endif
