#include "Action.hpp"
#include <iostream>

using namespace std;

Action::Action(string txtInt){//DONE
    active=true;
    texteInteraction = txtInt;
}

void Action::toggleActive(){//DONE
    active=!active;
}

bool Action::isActive(){//DONE
    return active;
}

string Action::getTexteInteraction(){//DONE
    return texteInteraction;
}
