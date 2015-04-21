#ifndef AUTREACTION_H
#define AUTREACTION_H

/// \file AutreAction.hpp
/// \brief Autres actions (non specifiées précédemment)
/// \author BESNARD CAVAROC CHAVANE LAINE LHUISSIER NGUYEN POINTIN

#include "Action.hpp"

using namespace std;

/// \class AutreAction
/// \brief lance autre action
///
/// Exemple d'action a suivre pour creer son action
class AutreAction : public Action{
    public:
        /// \fn virtual void lancerAction()
        /// \brief lancer autre action
        virtual void lancerAction();
};
#endif
