#ifndef CELLULEOBSTACLE_H
#define CELLULEOBSTACLE_H

#include "Cellule.hpp"

#include <iostream>

using namespace std;

class CelluleObstacle :public Cellule{
    private:
        string nomObstacle;
    public:
        virtual bool estAccessible();
};
#endif
