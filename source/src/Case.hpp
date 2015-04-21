#ifndef CASE_H
#define CASE_H

/// \file Case.hpp
/// \brief FIchier contenant la classe Case
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Bateau.hpp"

using namespace std;

/// \class Case
/// \brief La Case est comprise dans une grille de Bataille Navale

class Case{

    private:
        ///A-t-on déjà tiré sur la Case ou non.
        bool touche;
        ///Pointeur sur le bateau présent dans la Case
        Bateau* bateau;

    public:
        /// \fn Case()
        /// \brief Construit une Case Vide
        Case();

        /// \fn Case(Bateau* bateau)
        /// \brief Construit une Case et l'associe à un bateau
        /// \param bateau: pointeur sur le bateau à associer à la Case
        Case(Bateau* bateau);

        /// \fn void tirerDessus()
        /// \brief Effectue les changements lorsqu'on tire sur une Case
        ///
        /// Révèle la case, modifie le boolean touche, indique au bateau qu'il s'est fait toucher
        void tirerDessus();
};
#endif
