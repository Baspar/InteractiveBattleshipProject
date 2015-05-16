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
	PersonnageBN();
	
        /// \fn TailleGrille getTailleGrille()
        /// \brief getters de tailleGrille
        ///
        /// \return TailleGrille
        TailleGrille getTailleGrille() const;

        /// \fn string getNom()
        /// \brief getters du nom
        ///
        /// \return string nom du PersonnageBN
        string getNom() const;

	/// \fn void setNom(string nvnom);
        /// \brief Setter du nom
        ///
        /// \param nvnom: nom du PersonnageBN
        void setNom(const string nvnom);

        /// \fn Arme* getArme()
        /// \brief getters du pointeur sur Arme
        ///
        /// \return Arme* pointeur sur Arme
        Arme* getArme() const;

	/// \fn vector<Bateau*> getBateaux()
        /// \brief getters du vecteur de pointeurs sur Bateaux
        ///
        /// \return vector<Bateau*> vecteur de pointeurs sur Bateaux
        vector<Bateau*> getBateaux() const;

	/// \fn void setTailleGrille(TailleGrille tg)
        /// \brief setters de tailleGrille
        ///
        /// \param tg: nouvelle taille de grille
        void setTailleGrille(const TailleGrille tg);

	/// \fn void setArme(Arme* nvArme)
        /// \brief setters d'Arme
        ///
        /// \param nvArme: nouvel Arme(pointeur)
        void setArme(const Arme* nvArme);

	/// \fn void setBateau(vector<Bateau*> nvBateaux)
        /// \brief setters de bateaux
        ///
        /// \param nvBateaux: nouveau vecteur de pointeurs sur Bateau
        void setBateaux(const vector<Bateau*> nvBateaux);

        /// \fn virtual Grille placerBateaux ()
        /// \brief le PersonnageBN place les Bateaux sur sa Grille
        ///
        /// Cette méthode est virtuelle car cette classe est abstraite, elle sera
        /// implémentée dans les classes filles
        /// \return Grille dotée de tous les bateaux placés
        virtual Grille placerBateaux();

        /// \fn virtual Coordonnees coordonneesAViser()
        /// \brief le PersonnageBN veux tirer sur la grille du joueur adverse
        ///
        /// Cette méthode est virtuelle car cette classe est abstraite, elle sera
        /// implémentée dans les classes filles
        /// \return Coordonnees de la case à viser
        virtual Coordonnees coordonneesAViser();
};
#endif
