#ifndef CONTROLEURBN_H
#define CONTROLEURBN_H

 /// \file ControleurBN.hpp
 /// \brief ControleurBN de notre jeu
 /// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "IHMBN.hpp"
#include "BatailleNavale.hpp"

using namespace std;

class ControleurBN{

/// \class ControleurBN
/// \brief Controleur de notre BN
///
/// Classe Controleur permettant la connexion entre notre modèle et notre vue du côté BN

    private:
        ///Bataille Navale en cours ou null si il n'y en a pas
        BatailleNavale* batailleNavale;
    public:
        /// \fn ControleurBN(BatailleNavale* batnav)
        /// \brief Constructeur
        ///
        /// Constructeur de notre Controleur
        /// On crée un controleur BN
        ///\param batnav : combat d'entree
        ControleurBN(BatailleNavale* batnav);

        /// \fn void actionBatailleNavale()
        /// \brief lancement de la bataille navale
        ///
        /// Tant que la partie n'est pas terminée, on continue à faire des tours de jeu
        void actionBatailleNavale();

        /// \fn void tourDeJeuBatailleNavale(IHMBN* ihmBN)
        /// \brief tour de jeu Bataille Navale
        ///
        /// Tant que la bataille navale n'est pas terminée, on continue à faire des tours de bataille navale
        ///\param ihmBN : pointeur sur IHM
        void tourDeJeuBatailleNavale(IHMBN* ihmBN);
};
#endif
