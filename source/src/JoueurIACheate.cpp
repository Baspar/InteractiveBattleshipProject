#include "JoueurIACheate.hpp"

using namespace std;

JoueurIACheate::JoueurIACheate(string nomnv):PersonnageBNIACheate(nomnv), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, int l, int h, Arme* a):PersonnageBNIACheate(nomnv, l, h, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, Arme* a):PersonnageBNIACheate(nomnv, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, int l, int h):PersonnageBNIACheate(nomnv, l, h), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, vector<int> tBateaux):PersonnageBNIACheate(nomnv, tBateaux), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBNIACheate(nomnv, l, h, tBateaux, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBNIACheate(nomnv, tBateaux, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIACheate::JoueurIACheate(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBNIACheate(nomnv, l, h, tBateaux), PersonnageNonJouable(nomnv){//DONE
}
