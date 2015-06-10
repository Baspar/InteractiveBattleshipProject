#include <iostream>
#include "Monde.hpp"


using namespace std;

void afficherCarte(Carte* carte){
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
	cout << "Création d'un monde à partir des données" << endl;
	Monde monde;
	for(int i=0;i<7;i++){
		cout << "Carte " << i << endl;
		afficherCarte(monde.getCarte(i));
		cout << endl << endl;
	}
}
