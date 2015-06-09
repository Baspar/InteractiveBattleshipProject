#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include <vector>
#include "Objet.hpp"

/// \file Inventaire.hpp
/// \brief définition de l'inventaire du joueur
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

using namespace std;


/// \class Inventaire
/// \brief classe représentant l'inventaire
///
/// La classe définit l'inventaire des différents objets obtenus par le joueur au cours de sa quête

class Inventaire{
    private:
        /// liste des objets de l'inventaire
        vector<Objet*> objets;


    public:
        /// \fn Inventaire(vector<Objet*> obj)
        /// \brief Constructeur
        ///
        /// Constructeur de la classe Inventaire
        /// \param objets: objets de l'inventaire
        Inventaire(vector<Objet*> obj);

        /// \fn vector<Objet*> getObjet() const;
        /// \brief Getter de Objet
        ///
        /// \return vector<Objet*> objet de l'inventaire
        vector<Objet*> getObjet() const;


        /// \fn void ajoutObjet(Objet* obj) const;
        /// \brief Ajout de l'objet
        ///
        /// \param obj: objet que l'on ajoute
        void ajoutObjet(Objet* obj);

};
#endif
