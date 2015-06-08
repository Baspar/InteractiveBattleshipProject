#include "JoueurHumain.hpp"

#include "ArmeClassique.hpp"
#include "PersonnageJouable.hpp"
#include "PersonnageBNHumain.hpp"
#include "Bateau.hpp"

using namespace std;

JoueurHumain::JoueurHumain(string nomnv, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, Arme* a, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, l, h, a), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, Arme* a, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, a), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, l, h), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, vector<int> tBateaux, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, tBateaux), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Arme* a, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, l, h, tBateaux, a), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, vector<int> tBateaux, Arme* a, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, tBateaux, a), PersonnageJouable(nomnv, coord, idCarte){//WIP
}

JoueurHumain::JoueurHumain(string nomnv, int l, int h, vector<int> tBateaux, Coordonnees coord, Carte* idCarte):PersonnageBNHumain(nomnv, l, h, tBateaux), PersonnageJouable(nomnv, coord, idCarte){//WIP
}
