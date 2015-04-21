#ifndef CELLULE_H
#define CELLULE_H

/// \file Cellule.hpp
/// \brief Fichier contenant la classe Cellule
/// \author

#include "Action.hpp"

using namespace std;

/// \class Cellule
/// \brief Cellule composant les Zone du Monde ou le joueur se deplace
class Cellule{
    private:
        Action* action; /// action: pointeur sur une action qui sera appliquee au joueur
    public:
	void Cellule();
	/// \fn void Cellule()
	/// \brief Lance l action et effectue les modification necessaire suite a cette action
        void lancerAction();
	/// \fn void lancerAction()
	/// \brief Verifie si le Cellule est Accessible ou non
	/// Cette methode est virtuelle car la classe est abstraite, elle sera 
	/// implementee dans les classes fille
	/// \return un booleen: vrai si la cellule est accessible, faux sinon
        virtual bool estAccessible();
};
#endif
