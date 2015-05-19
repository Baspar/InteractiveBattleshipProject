#include "JoueurHumain.hpp"

#include "ArmeClassique.hpp"
#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"
#include "Bateau.hpp"

using namespace std;

JoueurHumain::JoueurHumain(string nomnv):PersonnageBNHumain(nomnv), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, Arme* a):PersonnageBNHumain(nomnv, l, h, a), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, Arme* a):PersonnageBNHumain(nomnv, a), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h):PersonnageBNHumain(nomnv, l, h), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, vector<int> tBateaux):PersonnageBNHumain(nomnv, tBateaux), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBNHumain(nomnv, l, h, tBateaux, a), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBNHumain(nomnv, tBateaux, a), PersonnageJouable(nomnv){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBNHumain(nomnv, l, h, tBateaux), PersonnageJouable(nomnv){//WIP
}
