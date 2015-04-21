#ifndef AUTREACTION_H
#define AUTREACTION_H

/// \file AutreAction.hpp
/// \brief Autres actions (non specifiees precedemment)
/// \author

#include "Action.hpp"

using namespace std;


/// \class AutreAction
/// \brief lance autre action
class AutreAction : public Action{

    public:

	/// \fn virtual void lancerAction()
	/// \brief lancer autre action
        virtual void lancerAction();
};
#endif
