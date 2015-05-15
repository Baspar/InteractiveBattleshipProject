#ifndef PERSONNAGEBN_H
#define PERSONNAGEBN_H

/// \file PersonnageBN.hpp
/// \brief Fichier contenant la classe PersonnageBN
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "Arme.hpp"
#include "Bateau.hpp"
#include "TailleGrille.hpp"

#include <vector>
#include <iostream>

using namespace std;

/// \class PersonnageBN
/// \brief Personnage pouvant jouer au combat: BatailleNavale
class PersonnageBN{

    private:
        ///taille des 2 grilles permettant de jouer à la Bataille Navale
        TailleGrille tailleGrille;
        /// nom du PersonnageBN
        string nom;
        /// arme: pointeur sur une arme (exemple:différents pointeurs de visée...)
        Arme* arme;
        ///bateaux : vecteur de pointeur sur bateaux(représentant l'ensemble des bateaux du PersonnageBN)
        vector<Bateau*> bateaux;

    public:
        /// \fn virtual Grille placerBateaux ()
        /// \brief le PersonnageBN place les Bateaux sur sa Grille
        ///
        /// Cette méthode est virtuelle car cette classe est abstraite, elle sera
        /// implémentée dans les classes filles
        /// \return Grille dotée de tous les bateaux placés
        virtual Grille placerBateaux();

        /// \fn virtual Coordonnees caseAViser()
        /// \brief le PersonnageBN veux tirer sur la grille du joueur adverse
        ///
        /// Cette méthode est virtuelle car cette classe est abstraite, elle sera
        /// implémentée dans les classes filles
        /// \return Coordonnees de la case à viser
        virtual Coordonnees caseAViser();
};
#endif
