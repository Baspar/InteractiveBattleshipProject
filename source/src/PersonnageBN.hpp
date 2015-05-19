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
        string nomBN;
        /// arme: pointeur sur une arme (exemple:différents pointeurs de visée...)
        Arme* arme;
        ///bateaux : vecteur de pointeur sur bateaux(représentant l'ensemble des bateaux du PersonnageBN)
        vector<Bateau*> bateaux;

    public:

    /// \fn PersonnageBN(string nomnv)
        /// \brief Constructeur des persoBN
        ///
        /// Constructeur des persoBN
    /// \param nomnv : nom du joueur
        PersonnageBN(string nomnv);

        /// \fn TailleGrille getTailleGrille() const
        /// \brief getters de tailleGrille
        ///
        /// \return TailleGrille
        TailleGrille getTailleGrille() const;


        /// \fn void ajouterBateau(const int taille)
        /// \brief Ajoute un baeatu à la flotte
        ///
        /// \param taille : taille du bateau
        void ajouterBateau(const int taille);

        /// \fn string getNomBN() const
        /// \brief getters du nomBN
        ///
        /// \return string nomBN du PersonnageBN
        string getNomBN() const;

        /// \fn void setNomBN(const string nvnom);
        /// \brief Setter du nomBN
        ///
        /// \param nvnom: nom du PersonnageBN
        void setNomBN(const string nvnom);

        /// \fn Arme* getArme() const
        /// \brief getters du pointeur sur Arme
        ///
        /// \return Arme* pointeur sur Arme
        Arme* getArme() const;

        /// \fn vector<Bateau*> getBateaux() const
        /// \brief getters du vecteur de pointeurs sur Bateaux
        ///
        /// \return vector<Bateau*> vecteur de pointeurs sur Bateaux
        vector<Bateau*> getBateaux() const;

        /// \fn void setTailleGrille(const TailleGrille tg)
        /// \brief setters de tailleGrille
        ///
        /// \param tg: nouvelle taille de grille
        void setTailleGrille(const TailleGrille tg);

        /// \fn void setArme(const Arme* nvArme)
        /// \brief setters d'Arme
        ///
        /// \param nvArme: nouvel Arme(pointeur)
        void setArme(Arme* nvArme);

        /// \fn void setBateaux(const vector<Bateau*> nvBateaux)
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
        virtual Grille placerBateaux()=0;

        /// \fn virtual Coordonnees coordonneesAViser(Grille* grilleAdverse)
        /// \brief le PersonnageBN veux tirer sur la grille du joueur adverse
        ///
        /// Cette méthode est virtuelle car cette classe est abstraite, elle sera
        /// implémentée dans les classes filles
        /// \param grilleAdverse : grille de l'adversaire à viser
        /// \return Coordonnees de la case à viser
        virtual Coordonnees coordonneesAViser(Grille* grilleAdverse)=0;

        /// \fn void restaurerBateaux()
        /// \brief restaure les PV des bateaux
        ///
        /// restaure les PV des bateaux
        void restaurerBateaux();


        /// \fn bool flotteCoulee()
        /// \brief verifie si la flotte est coulee
        ///
        /// renvoie vrai si la flotte est coulee
        /// \return bool vrai si flotte est coulee, faux sinon
        bool flotteCoulee();
};
#endif
