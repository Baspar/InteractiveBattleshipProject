#ifndef BATEAU_H
#define BATEAU_H

/// \file Bateau.hpp
/// \brief définition bateaux bataille navale
/// \author

using namespace std;

/// \class Bateau
/// \brief classe représentant bateaux
///
/// La classe définit les bateaux de la bataille navale

class Bateau {
    private:
        int PV; /// nb case du bateau non touchées
        bool coule; /// vrai si bateu coule, faux sinon
        int taille; /// entier taille du bateau

    public:
        /// \fn Bateau(int taille)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Bateau
        /// \param taille: entier taille du bateau
        Bateau(int taille);

        /// \fn bool estCoule()
        /// \brief bateau coulé ou non
        ///
        /// méthode permettant de dire si un bateau est coulé ou non
        /// \return true si bateau a 0 point de vie, faux sinon
        bool estCoule();

        /// \fn void retirerPV()
        /// \brief enlève point de vie au bateau
        ///
        /// méthode retire un point de vie au bateau s'il a été touché
        void retirerPV();
};
#endif
