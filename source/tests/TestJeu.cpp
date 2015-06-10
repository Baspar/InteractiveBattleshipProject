#include <iostream>
#include "Jeu.hpp"
#include "BatailleNavale.hpp"
#include "BadgeFinal.hpp"

using namespace std;

void afficherCarte(Jeu* jeu, Carte* carte){
     for(vector<Cellule*> cels : carte->getCellules()) {
        for(Cellule* cel : cels) {
            string type = cel->getType();

            if(type==" " || type=="@" || type=="x"){
                if( ((CelluleAccessible*) cel)->getPersonnage()!=nullptr) {
                    if(((CelluleAccessible*) cel)->getPersonnage() == jeu->getPersonnageJouable())
                        cout << "ô";
                    else cout << "8";
                } else
                    cout << type;
            } else
                cout << type;

            cout <<" ";
        }
        cout<< endl;
    }
}


int main(){
	cout << "Création d'un monde à partir des données" << endl;
	Jeu* jeu= new Jeu(new BatailleNavale());
	for(int i=0;i<7;i++){
		cout << "Carte " << i << endl;
		afficherCarte(jeu, jeu->getMonde().getCarte(i));
		cout << endl << endl;
	}
	cout << "On bouge le personnage" << endl;
	jeu->jouer(Coordonnees(1,4));
	for(int i=0;i<7;i++){
		cout << "Carte " << i << endl;
		afficherCarte(jeu, jeu->getMonde().getCarte(i));
		cout << endl << endl;
	}
	cout << "Partie Finie ?" << endl;
	cout << jeu->partieFinie() << endl;
	cout << "On donne le badge final au personnage jouable" << endl;
	jeu->getPersonnageJouable()->getInventaire()->ajoutObjet(new BadgeFinal());
	cout << "Partie Finie ?" << endl;
	cout << jeu->partieFinie() << endl;
	
}
