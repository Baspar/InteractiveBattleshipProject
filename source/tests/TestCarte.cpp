#include <iostream>
#include "Carte.hpp"
#include "CelluleAccessible.hpp"



using namespace std;

void afficherCarteCourante(Carte* carte){
    for(vector<Cellule*> cels : carte->getCellules()) {
        for(Cellule* cel : cels) {
            string type = cel->getType();

            if(type==" " || type=="@" || type=="x"){
                if( ((CelluleAccessible*) cel)->getPersonnage()!=nullptr) {
                 	cout << "8";
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
	Carte* carteD = new Carte(0,{{'#','#','#','#'},{'#','_','_','#'},{'#','_','_','#'},{'#','#','#','#'}});
	cout << "On crée une carte 4*4 entouré de mur" << endl;
	cout << "On affiche la carte" << endl;
	afficherCarteCourante(carteD);
	cout << "On place un personnage en (1,1)" << endl;
	cout << "On affiche de nouveau la carte" << endl;
	Personnage* pers= new Personnage("Ann");
	pers->setCarte(carteD);
	pers->setCoordonnees(Coordonnees(1,1));
	( (CelluleAccessible*) carteD->getCel(Coordonnees(1,1)))->setPersonnage(pers);
	afficherCarteCourante(carteD);
	cout << "On deplace le personnage en (2,1)" << endl;
	cout << "On affiche de nouveau la carte" << endl;
	carteD->deplacerPersonnage(pers, Coordonnees(2,1));
	afficherCarteCourante(carteD);
}
