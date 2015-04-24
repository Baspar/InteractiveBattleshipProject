#include "Jeu.hpp"

#include "Coordonnees.hpp"
#include "Action.hpp"
#include "PersonnageNonJouable.hpp"
#include "PersonnageJouable.hpp"
#include "Monde.hpp"
#include "Combat.hpp"
#include <vector>

using namespace std;


Jeu::Jeu(){
}



Jeu::Jeu(Combat comb) : JoueurHumain("Test1"){
    int nbPersonnageNonJouables=0;
    vector<int> listeIdCarte = vector<int>();
    vector<Coordonnees> listeCoord = vector<Coordonnees>();
    personnagesNonJouables();

    combat=comb;


    monde.placerJoueurs(personnageNonJouable,listeIdCarte, listeCoord);
}


bool Jeu::partieFinie(){
    return terminee;
}


void Jeu::jouer(Coordonnees coordonnees){
    personnageJouable->deplacer(coordonnees);
    actionEnCours = personnageJouable->getCarte()->getCel((personnageJouable->getCoordonnees())).getActionCellule();
    if(&actionEnCours!=nullptr)
        actionEnCours.lancerAction();
}


Action Jeu::getActionEnCours(){
    return actionEnCours;
}


*PersonnageJouable Jeu::getPersonnageJouable(){
    return personnageJouable;
}

void Jeu::setTerminee(bool bol){
    terminee=bol;
}
