#include <iostream>
#include "BatailleNavale.hpp"
#include "PersonnageBN.hpp"

using namespace std;


void afficherGrille(Grille grille){
    cout << endl << endl << "Affichage grille" << endl << endl;

	for (int i=0;i<grille.getTailleGrille().getLongueur();i++){
        cout << "|";
        if(i/10 == 0)
            cout << " ";
        else
            cout << i/10;

    }
    cout << "|" << endl;

	for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
        cout << "|" << i%10;
    cout << "|" << endl;

	for (int i=0;i<grille.getTailleGrille().getLongueur();i++)
        cout << "--";
    cout << "-" << endl;

	for (int i=0;i<grille.getTailleGrille().getHauteur();i++){
		for (int j=0;j<grille.getTailleGrille().getLongueur();j++){
			Coordonnees coord(j,i);
			cout << "|";
			if(grille.getCaseElt(coord).getBateau()!=nullptr){
				if(grille.getCaseElt(coord).getTouche()==false)
					cout << "o";
				else cout << "x";
			}
			else {
				if(grille.getCaseElt(coord).getTouche()==false)
					cout << " ";
				else cout << "-";
			}
		}
		cout << "|"  << i << endl;
	}
	cout<< endl << endl;
}

void afficherGrilleRadar(Grille g){
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
	BatailleNavale bn=BatailleNavale();
	PersonnageBN pbn("pôl");

	pbn.getBateaux()[0]->retirerPV();
	pbn.getBateaux()[0]->retirerPV();

	pbn.getBateaux()[1]->retirerPV();
	pbn.getBateaux()[1]->retirerPV();
	pbn.getBateaux()[1]->retirerPV();

	pbn.getBateaux()[2]->retirerPV();
	pbn.getBateaux()[2]->retirerPV();
	pbn.getBateaux()[2]->retirerPV();

	pbn.getBateaux()[3]->retirerPV();
	pbn.getBateaux()[3]->retirerPV();
	pbn.getBateaux()[3]->retirerPV();
	pbn.getBateaux()[3]->retirerPV();

	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();

	cout << "nom du joueur " << pbn.getNomBN() << endl;
	cout << "Coulee?? " << pbn.flotteCoulee() << endl;
	PersonnageBN pbn1("kocduy");

	cout << "nom du joueur " << pbn1.getNomBN() << endl;
	cout << "Coulee?? " << pbn1.flotteCoulee() << endl;

	
	bn.initialiserJoueurCourant(&pbn,&pbn1);

	cout<<"Initialisation du jeu"<<endl;
	cout << "nom du joueur1 " << bn.getPersonnage1()->getNomBN() << endl;
	cout << "Coulee?? " << bn.getPersonnage1()->flotteCoulee() << endl;
	cout << "nom du joueur2 " << bn.getPersonnage2()->getNomBN() << endl;
	cout << "Coulee?? " << bn.getPersonnage2()->flotteCoulee() << endl;
	cout << "indice du joueurCourant" << bn.getIndiceJoueurCourant() << endl;
	cout << "Grille du joueur 1 :" << endl;
	afficherGrille(bn.getGrille1());
	cout << "Grille du joueur 2 :" << endl;
	afficherGrille(bn.getGrille2());

	cout << "Placement des bateaux" << endl;


	bn.getVGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[0],Coordonnees(0,0),Coordonnees(0,1));
	bn.getGrille1().placerBateau(bn.getPersonnage1()->getBateaux()[1],Coordonnees(1,0),Coordonnees(1,2));
	bn.getVGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[2],Coordonnees(2,0),Coordonnees(2,2));
	bn.getVGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[3],Coordonnees(3,0),Coordonnees(3,3));
	bn.getVGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[3],Coordonnees(4,0),Coordonnees(4,4));
	cout << "Grille du joueur 1 :" << endl;
	Bateau bat(4);
	cout << &bat<< endl;
	bn.getVGrille1()->getVCaseElt(Coordonnees(1,1))->setBateau(&bat);
	cout << "LOOOOOOLOLOLOLOL" << endl<< bn.getVGrille1()->getVCaseElt(Coordonnees(1,1))->getBateau();
	afficherGrille(bn.getGrille1());

	cout << "Affichage des grilles radars" << endl;
	cout << "joueur 1" << endl;
	afficherGrilleRadar(bn.getGrille1());
	cout << "joueur 2" << endl;
	afficherGrilleRadar(bn.getGrille2());

	cout << "Le joueur 1 tape en (0,0))" << endl;
	bn.jouer(Coordonnees(0,0));
	
}
