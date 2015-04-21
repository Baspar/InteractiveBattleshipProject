#ifndef BATEAU_H
#define BATEAU_H

/// \file Bateau.hpp
/// \brief definition bateaux bataille navale
/// \author

using namespace std;

/// \class Bateau
/// \brief classe representant bateaux
/// La classe definit les bateaux de la bataille navale

class Bateau {

    private:
        int PV; /// nb case du bateau non touchees
        bool coule; /// vrai si bateu coule, faux sinon
        int taille; /// entier taille du bateau

    public:

	/// \fn Bateau(int taille)
	/// \brief Constructeur
	/// Constructeur de la classe Bateau
	/// \param taille: entier taille du bateau
	Bateau(int taille);

	/// \fn bool estCoule()
	/// \brief bateau coule ou non
	/// methode permettant de dire si un bateau est coule ou non
	/// \return true si bateau a 0 point de vie, faux sinon
        bool estCoule();

	/// \fn void retirerPV()
	/// \brief enleve point de vie au bateau 
	/// methode retire un point de vie au bateau s'il a ete touche
        void retirerPV();

};
#endif
