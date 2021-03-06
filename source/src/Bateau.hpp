#ifndef BATEAU_H
#define BATEAU_H

/// \file Bateau.hpp
/// \brief définition bateaux bataille navale
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

using namespace std;

/// \class Bateau
/// \brief classe représentant bateaux
///
/// La classe définit les bateaux de la bataille navale

class Bateau {
    private:
        /// nb case du bateau non touchées
        int PV;
        /// entier taille du bateau
        int taille;

    public:
        /// \fn Bateau(int taille)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Bateau
        /// \param taille: entier taille du bateau
        Bateau(int tailleIn);

        /// \fn int getPV() const;
        /// \brief Getter de PV
        ///
        /// \return int les PV restant au bateau
        int getPV() const;

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

        /// \fn void restaurerPV()
        /// \brief ajoute point de vie au bateau
        ///
        /// méthode restaure un point de vie au bateau
        void restaurerPV();

        /// \fn int getTailleBateau()
        /// \brief renvoie la taille du bateau
        ///
        /// getter de taille bateau
        /// \return int: la taille du bateau
        int getTailleBateau() const;
};
#endif
