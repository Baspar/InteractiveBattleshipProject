#include "JoueurIA.hpp"

#include "PersonnageNonJouable.hpp"
#include "PersonnageBNIA.hpp"

using namespace std;

JoueurIA::JoueurIA(string nomnv):PersonnageBNIA(nomnv), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, int l, int h, Arme* a):PersonnageBNIA(nomnv, l, h, a), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, Arme* a):PersonnageBNIA(nomnv, a), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, int l, int h):PersonnageBNIA(nomnv, l, h), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, vector<int> tBateaux):PersonnageBNIA(nomnv, tBateaux), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBNIA(nomnv, l, h, tBateaux, a), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBNIA(nomnv, tBateaux, a), PersonnageNonJouable(nomnv){//WIP
}

JoueurIA::JoueurIA(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBNIA(nomnv, l, h, tBateaux), PersonnageNonJouable(nomnv){//WIP
}
