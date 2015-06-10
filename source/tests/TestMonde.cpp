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
	Monde monde;
	for(int i=0;i<8;i++)
		afficherCarte(monde.getCarte(i));
}
