#ifndef ACTION_H
#define ACTION_H

#include <iostream>

using namespace std;

class Action{
    public:
        virtual void lancerAction ();
    private:
        string texteInteraction;
        bool active;
};
#endif
