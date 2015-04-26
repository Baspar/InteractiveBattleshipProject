#ifndef JEU_H
#define JEU_H

/// \file Jeu.hpp
/// \brief fichier contenant la case Jeu
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

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
        /// action en cours
        Action actionEnCours;
        ///liste de personnages non jouables
        vector<PersonnageNonJouable*> personnagesNonJouables;
        /// pointeur sur un personnage jouable
        PersonnageJouable* personnageJouable;
        /// monde
        Monde monde;
        /// combat
        Combat combat;
        /// partie terminee?
        bool terminee;

    public:

	/// \fn Jeu()
	/// \brief Constructeur
    Jeu();

	/// \fn Jeu(Combat comb)
	/// \brief Constructeur parametre
    /// \param comb : combat à utiliser
    Jeu(Combat comb);

	/// \fn bool partieFinie()
	/// \brief voir si partie finie
	/// \return Renvoie vrai si le jeu est fini, sinon faux
    bool partieFinie();

	/// \fn void jouer(Coordonnees coordonnees)
	/// \brief déplacement héros, lancement action
	///  Déplace notre héros puis lance l'action
    void jouer(Coordonnees coordonnees);

	/// \fn Action getActionEnCours()
    /// \brief Getter actionEnCours
    /// \return Action en cours
    Action getActionEnCours();

	/// \fn PersonnageJouable getPersonnageJouable()
    /// \brief Getter personnageJouable
    /// \return Personnage jouable
    *PersonnageJouable getPersonnageJouable();

    /// \fn void setTerminee()
    /// \brief Setter terminee
    /// \param la valeur de terminee
    void setTerminee(bool bol);
};
#endif
