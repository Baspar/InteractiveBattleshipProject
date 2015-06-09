#include <iostream>
#include "Bateau.hpp"

int main(){
Bateau bat(5);
cout << "Le PV initial du bateau est " << bat.getPV() << endl;
bat.retirerPV();
cout << " Retire 1 PV : " << bat.getPV() << endl;
cout << " Bateau coulé? " << (bat.estCoule()? "oui":"non") << endl;
for(int i=0;i<bat.getTailleBateau();i++){
	bat.retirerPV();
	cout << " Retire 1 PV :" << bat.getPV() << endl;
}
cout << " Bateau coulé? " << (bat.estCoule()? "oui":"non") << endl;
bat.restaurerPV();
cout << "restauration nombre initial de PV " << bat.getPV() << endl;
}
