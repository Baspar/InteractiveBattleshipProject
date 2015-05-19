#include "CelluleObstacle.hpp"

#include "Cellule.hpp"
#include <iostream>

using namespace std;
CelluleObstacle::CelluleObstacle():Cellule(nullptr,"#"){//DONE
}

bool CelluleObstacle::estAccessible(){//DONE
    return false;
}
