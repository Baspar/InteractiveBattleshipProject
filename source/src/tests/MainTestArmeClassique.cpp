#include <iostream>
#include "ArmeClassique.hpp"



int main(){
ArmeClassique arme=ArmeClassique();
Grille g=Grille(10,10);
Bateau bat=Bateau(4);
g.placerBateau(&bat,Coordonnees(0,1),Coordonnees(0,4));

	for (int i=0;i<g.getTailleGrille().getHauteur();i++){
		for (int j=0;j<g.getTailleGrille().getLongueur();j++){
			Coordonnees coord(j,i);
			cout << "|";
			if(g.getCaseElt(coord).getBateau()==nullptr){
				if(g.getCaseElt(coord).getTouche()==false)
					cout << " ";
				else cout << "x";
			}
			else {
				if(g.getCaseElt(coord).getTouche()==false)
					cout << " ";
				else cout << "-";
			}
		}
		cout << "|" << endl;
	}
	cout<< endl << endl;

arme.tirer(Coordonnees(0,0),&g);
arme.tirer(Coordonnees(0,1),&g);
for (int i=0;i<g.getTailleGrille().getHauteur();i++){
		for (int j=0;j<g.getTailleGrille().getLongueur();j++){
			Coordonnees coord(j,i);
			cout << "|";
			if(g.getCaseElt(coord).getBateau()==nullptr){
				if(g.getCaseElt(coord).getTouche()==false)
					cout << " ";
				else cout << "x";
			}
			else {
				if(g.getCaseElt(coord).getTouche()==false)
					cout << " ";
				else cout << "-";
			}
		}
		cout << "|" << endl;
	}
	cout<< endl << endl;


}
