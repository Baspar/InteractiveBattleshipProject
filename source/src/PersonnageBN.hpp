#ifndef PERSONNAGEBN_H
#define PERSONNAGEBN_H.

/// \file PersonnageBN.hpp
/// \brief Fichier contenant la classe PersonnageBN
/// \author

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
        TailleGrille tailleGrille; ///taille des 2 grilles permettant de jouer à la Bataille Navale
        string nom; /// nom du PersonnageBN
        Arme* arme; /// arme: pointeur sur une arme(exemple:differents pointeur de visee...)
        vector<Bateau*> bateaux; ///bateaux : vecteur de pointeur sur bateaux(représentant l'ensemble des bateaux du PersonnageBN) 
    public:
	/// \fn void PersonnageBN()
	/// \brief cree un PersonnageBN
	void PersonnageBN();
	/// \fn virtual Grille placerBateaux ()	
	/// \brief le PersonnageBN place les Bateaux sur sa Grille
	/// Cette méthode est virtuelle car cette classe est abstraite, elle sera
	/// implementee dans les classes filles
	/// \return Grille dotee de tous les bateaux placees
        virtual Grille placerBateaux(); 
	/// \fn virtual Coordonnees caseAViser()
	/// \brief le PersonnageBN veux tirer sur la grille du joueur adverse
	/// Cette méthode est virtuelle car cette classe est abstraite, elle sera
	/// implementee dans les classes filles
	/// \return Coordonnes de la case a viser
        virtual Coordonnees caseAViser();
};
#endif
