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
#include "JoueurHumain.hpp"
#include <vector>

using namespace std;

/// \class Jeu
/// \brief déplacement sur la carte

class Jeu{

    private:
        /// action en cours
        Action* actionEnCours;
        ///liste de personnages non jouables
        vector<PersonnageNonJouable*> personnagesNonJouables;
        /// pointeur sur un personnage jouable
        PersonnageJouable* personnageJouable;
        /// monde
        Monde monde;
        /// combat
        Combat* combat;


    public:
        /// \fn Jeu(Combat* comb)
        /// \brief Constructeur parametre
        /// \param comb : combat à utiliser
        Jeu(Combat* comb);

        /// \fn void lireJoueurs()
        /// \brief Lit les joueurs
        void lireJoueurs();

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
        Action* getActionEnCours();

        /// \fn PersonnageJouable* getPersonnageJouable()
        /// \brief Getter personnageJouable
        /// \return Personnage jouable
        PersonnageJouable* getPersonnageJouable();


};
#endif
