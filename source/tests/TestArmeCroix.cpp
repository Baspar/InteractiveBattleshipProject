#include <iostream>
#include "Arme.hpp"
#include "ArmeCroix.hpp"
#include "Grille.hpp"

void afficherGrille(Grille g){
	if(g.getTailleGrille().getLongueur()>10){
			for (int i=0;i<g.getTailleGrille().getLongueur();i++){
	       			 cout << "|";
	      		         if(i/10 == 0)
	      			      cout << " ";
	    		         else
		 		      cout << i/10;

		        }
		    cout << "|" << endl;
		}
		for (int i=0;i<g.getTailleGrille().getLongueur();i++)
			cout << "|" << i%10;
		cout << "|" << endl;

		for (int i=0;i<g.getTailleGrille().getLongueur();i++)
			cout << "--";
		cout << "-" << endl;

		for (int i=0;i<g.getTailleGrille().getHauteur();i++){
			for (int j=0;j<g.getTailleGrille().getLongueur();j++){
				Coordonnees coord(j,i);
				cout << "|";
				if(g.getCaseElt(coord).getBateau()!=nullptr){
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
			cout << "|" << i << endl;
		}
		cout<< endl << endl;
}


int main(){
ArmeCroix arme=ArmeCroix();
cout<<"On cree une grille 10x10"<<endl;
Grille g=Grille(10,10);
Bateau bat=Bateau(4);
cout<<"On place un bateau de 4 cases de (0,1) � (0,4)"<<endl;
g.placerBateau(&bat,Coordonnees(0,1),Coordonnees(0,4));

afficherGrille(g);


cout <<"On tape en (1,1) et (3,3)" << endl << endl;
arme.tirer(Coordonnees(1,1),&g);
arme.tirer(Coordonnees(3,3),&g);

cout << "   Bateau coule " << (bat.estCoule()?"Oui":"Non") << endl;
afficherGrille(g);




arme.tirer(Coordonnees(0,2),&g);
cout << "On tape en (0,2)" << endl ; 
 cout << "   Bateau coule " << (bat.estCoule()?"Oui":"Non") << endl;
arme.tirer(Coordonnees(0,3),&g);
cout << "On tape en (0,3)" << endl ; 
 cout << "   Bateau coule " << (bat.estCoule()?"Oui":"Non") << endl;
arme.tirer(Coordonnees(0,4),&g);
cout << "On tape en (0,4)" << endl ; 
 cout << "   Bateau coule " << (bat.estCoule()?"Oui":"Non") << endl;
arme.tirer(Coordonnees(9,9),&g);

cout << "On tape dans les coins" << endl;
cout << "On tape en (9,9)" << endl ; 
arme.tirer(Coordonnees(0,0),&g);
cout << "On tape en (0,0)" << endl ; 

afficherGrille(g);
}

