#include "PersonnageBN.hpp"

#include "Grille.hpp"
#include "Coordonnees.hpp"
#include "TailleGrille.hpp"
#include "Arme.hpp"
#include "ArmeClassique.hpp"
#include "Bateau.hpp"
#include <iostream>
#include <vector>

using namespace std;

void PersonnageBN::reinitialiserFlotteClassique(){//DONE
    bateaux.clear();
    bateaux.push_back(new Bateau(2));
    bateaux.push_back(new Bateau(3));
    bateaux.push_back(new Bateau(3));
    bateaux.push_back(new Bateau(4));
    bateaux.push_back(new Bateau(5));
}
void PersonnageBN::reinitialiserFlotteParam(vector<int> tBateaux){//DONE
    bateaux.clear();
    for(int i: tBateaux)
        bateaux.push_back(new Bateau(i));
}

PersonnageBN::PersonnageBN(string nomnv):tailleGrille(10,10){//DONE
    nomBN=nomnv;

    arme=new ArmeClassique();

    reinitialiserFlotteClassique();
}
PersonnageBN::PersonnageBN(string nomnv, Arme* a):tailleGrille(10,10){//DONE
    nomBN=nomnv;

    arme=a;

    reinitialiserFlotteClassique();
}
PersonnageBN::PersonnageBN(string nomnv, vector<int> tBateaux):tailleGrille(10,10){//DONE
    nomBN=nomnv;

    arme=new ArmeClassique();

    reinitialiserFlotteParam(tBateaux);
}
PersonnageBN::PersonnageBN(string nomnv, int l, int h):tailleGrille(l,h){//DONE
    nomBN=nomnv;

    arme=new ArmeClassique();

    reinitialiserFlotteClassique();
}
PersonnageBN::PersonnageBN(string nomnv, int l, int h, Arme* a):tailleGrille(l,h){//DONE
    nomBN=nomnv;

    arme=a;

    reinitialiserFlotteClassique();
}
PersonnageBN::PersonnageBN(string nomnv, vector<int> tBateaux, Arme* a):tailleGrille(10,10){//DONE
    nomBN=nomnv;

    arme=a;

    reinitialiserFlotteParam(tBateaux);
}
PersonnageBN::PersonnageBN(string nomnv, int l, int h, vector<int> tBateaux):tailleGrille(l,h){//DONE
    nomBN=nomnv;

    arme=new ArmeClassique();

    reinitialiserFlotteParam(tBateaux);
}
PersonnageBN::PersonnageBN(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):tailleGrille(l,h){//DONE
    nomBN=nomnv;

    arme=a;

    reinitialiserFlotteParam(tBateaux);
}

void PersonnageBN::ajouterBateau(const int taille){//DONE
    bateaux.push_back(new Bateau(taille));
}


TailleGrille PersonnageBN::getTailleGrille() const{//DONE
    return tailleGrille;
}

string PersonnageBN::getNomBN() const{//DONE
    return nomBN;
}

Arme* PersonnageBN::getArme() const{//DONE
    return arme;
}

vector<Bateau*> PersonnageBN::getBateaux() const{//DONE
    return bateaux;
}

void PersonnageBN::setNomBN(const string nvnom){//DONE
    nomBN=nvnom;
}

void PersonnageBN::setTailleGrille(const TailleGrille tg){//DONE
    tailleGrille = tg;
}

void PersonnageBN::setArme(Arme* nvArme ){//DONE
    arme = nvArme;
}

void PersonnageBN::setBateaux(const vector<Bateau*> nvBateaux){//DONE
    bateaux = nvBateaux;
}

void PersonnageBN::restaurerBateaux(){//DONE
    for(Bateau* bat : getBateaux()) bat->restaurerPV();
}

bool PersonnageBN::flotteCoulee(){//DONE
    for(Bateau* bat : getBateaux())
        if(!(bat->estCoule())) return false;
    return true;
}

