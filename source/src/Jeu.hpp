#ifndef JEU_H
#define JEU_H

/// \file Jeu.hpp
/// \brief fichier contenant la case Jeu
/// \author

#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "Monde.hpp"
#include "Combat.hpp"
#include "Coordonnees.hpp"

using namespace std;

/// \class Jeu
/// \brief déplacement sur la carte

class Jeu{

    private:
        Action actionEnCours; /// action en cours
        vector<PersonnageNonJouable*> personnagesNonJouables; ///liste de personnages non jouables
        PersonnageJouable* personnageJouable; /// pointeur sur un personnage jouable
        Monde monde; /// monde
        Combat combat; /// combat

    public:

	/// \fn Jeu()
	/// \brief Constructeur
        Jeu();

	/// \fn bool partieFinie()
	/// \brief voir si partie finie
	/// Renvoie vrai si le jeu est fini, sinon faux
        bool partieFinie();

	/// \fn void jouer(Coordonnees coordonnees)
	/// \brief déplacement héros, lancement action
	///  Déplace notre héros puis lance l'action
        void jouer(Coordonnees coordonnees);

};
#endif
