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
	Carte* carteD = new Carte(0,{{'_','_','_'},{'#','_','#'},{'#','_','_'}});
	afficherCarteCourante(carteD);
}
