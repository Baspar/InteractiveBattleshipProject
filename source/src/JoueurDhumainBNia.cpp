#include "JoueurDhumainBNia.hpp"

#include "PersonnageJouable.hpp"
#include "PersonnageBNIA.hpp"
#include "ArmeClassique.hpp"
#include "Bateau.hpp"

using namespace std;

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv):PersonnageBNIA(nomnv), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, int l, int h, Arme* a):PersonnageBNIA(nomnv, l, h, a), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, Arme* a):PersonnageBNIA(nomnv, a), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, int l, int h):PersonnageBNIA(nomnv, l, h), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, vector<int> tBateaux):PersonnageBNIA(nomnv, tBateaux), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBNIA(nomnv, l, h, tBateaux, a), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBNIA(nomnv, tBateaux, a), PersonnageJouable(nomnv){//DONE
}

JoueurDhumainBNia::JoueurDhumainBNia(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBNIA(nomnv, l, h, tBateaux), PersonnageJouable(nomnv){//DONE
}
