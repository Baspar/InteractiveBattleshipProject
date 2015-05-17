#include "Action.hpp"
#include <iostream>

using namespace std;

void Action::toggleActive(){//DONE
    active=!active;
}
bool Action::isActive(){//DONE
    return active;
}
Action::Action(string txtInteraction){//DONE
    active=true;
    texteInteraction = txtInteraction;
}
string Action::getTexteInteraction(){//DONE
    return texteInteraction;
}
