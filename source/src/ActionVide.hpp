#ifndef ACTIONVIDE_H
#define ACTIONVIDE_H

/// \file ActionVide.hpp
/// \brief Action vide
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Action.hpp"

using namespace std;

/// \class ActionVide
/// \brief Lance une action vide
class ActionVide: public Action{
    public:
        /// \fn ActionVide()
        // \ brief Constructeur
        ActionVide();

        /// \fn void lancerAction()
        /// \brief lancer autre action
        void lancerAction();
};
#endif
