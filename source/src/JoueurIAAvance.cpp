#include "JoueurIAAvance.hpp"

using namespace std;

JoueurIAAvance::JoueurIAAvance(string nomnv):PersonnageBNIAAvance(nomnv), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, int l, int h, Arme* a):PersonnageBNIAAvance(nomnv, l, h, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, Arme* a):PersonnageBNIAAvance(nomnv, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, int l, int h):PersonnageBNIAAvance(nomnv, l, h), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, vector<int> tBateaux):PersonnageBNIAAvance(nomnv, tBateaux), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBNIAAvance(nomnv, l, h, tBateaux, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBNIAAvance(nomnv, tBateaux, a), PersonnageNonJouable(nomnv){//DONE
}

JoueurIAAvance::JoueurIAAvance(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBNIAAvance(nomnv, l, h, tBateaux), PersonnageNonJouable(nomnv){//DONE
}
