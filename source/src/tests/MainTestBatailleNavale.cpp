#include <iostream>
#include "BatailleNavale.hpp"
#include "PersonnageBN.hpp"

using namespace std;


void afficherGrille(Grille grille){
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
	afficherGrille(*bn.getGrille1());
	cout << "Grille du joueur 2 :" << endl;
	afficherGrille(*bn.getGrille2());

	cout << "Placement des bateaux" << endl;

	bn.getGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[0],Coordonnees(0,0),Coordonnees(0,1));
	bn.getGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[1],Coordonnees(1,0),Coordonnees(1,2));
	bn.getGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[2],Coordonnees(2,0),Coordonnees(2,2));
	bn.getGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[3],Coordonnees(3,0),Coordonnees(3,3));
	bn.getGrille1()->placerBateau(bn.getPersonnage1()->getBateaux()[4],Coordonnees(4,0),Coordonnees(4,4));
	cout << "Grille du joueur 1 :" << endl;
	afficherGrille(*bn.getGrilles()[0]);

	bn.getGrille2()->placerBateau(bn.getPersonnage2()->getBateaux()[0],Coordonnees(0,0),Coordonnees(0,1));
	bn.getGrille2()->placerBateau(bn.getPersonnage2()->getBateaux()[1],Coordonnees(1,0),Coordonnees(1,2));
	bn.getGrille2()->placerBateau(bn.getPersonnage2()->getBateaux()[2],Coordonnees(2,0),Coordonnees(2,2));
	bn.getGrille2()->placerBateau(bn.getPersonnage2()->getBateaux()[3],Coordonnees(3,0),Coordonnees(3,3));
	bn.getGrille2()->placerBateau(bn.getPersonnage2()->getBateaux()[4],Coordonnees(4,0),Coordonnees(4,4));
	cout << "Grille du joueur 2 :" << endl;
	afficherGrille(*bn.getGrilles()[1]);

	cout << "Affichage des grilles radars" << endl;
	cout << "joueur 1" << endl;
	afficherGrilleRadar(*bn.getGrille1());
	cout << "joueur 2" << endl;
	afficherGrilleRadar(*bn.getGrille2());


	cout << "indice du joueurCourant" << bn.getIndiceJoueurCourant() << endl;
	cout << "Le joueur 1 tape en (0,0))" << endl;
	bn.jouer(Coordonnees(0,0));
	cout << "indice du joueurCourant" << bn.getIndiceJoueurCourant() << endl;

	cout << "affichage de la grille radar" << endl;
	afficherGrilleRadar(*bn.getGrille2());

	
	cout << "Le joueur 2 tape en (8,0))" << endl;
	bn.jouer(Coordonnees(8,0));
	cout << "indice du joueurCourant" << bn.getIndiceJoueurCourant() << endl;
	cout << "affichage de la grille radar" << endl;
	afficherGrilleRadar(*bn.getGrille1());
	cout << "Méthode jouer ok" << endl;

	cout<< "Gagnant null ?" << endl; 		
	cout << (bn.retournerGagnant(bn.getPersonnage1(),bn.getPersonnage2())==nullptr) << endl;

	cout << "On coule toute la flotte du joueur 2" << endl;
	bn.jouer(Coordonnees(0,1));
	bn.jouer(Coordonnees(0,1));
	bn.jouer(Coordonnees(1,0));
	bn.jouer(Coordonnees(1,0));
	bn.jouer(Coordonnees(1,1));
	bn.jouer(Coordonnees(1,1));
	bn.jouer(Coordonnees(1,2));
	bn.jouer(Coordonnees(1,2));
	bn.jouer(Coordonnees(2,0));
	bn.jouer(Coordonnees(2,0));
	bn.jouer(Coordonnees(2,1));
	bn.jouer(Coordonnees(2,1));
	bn.jouer(Coordonnees(2,2));
	bn.jouer(Coordonnees(2,2));
	bn.jouer(Coordonnees(3,0));
	bn.jouer(Coordonnees(3,0));
	bn.jouer(Coordonnees(3,1));
	bn.jouer(Coordonnees(3,1));
	bn.jouer(Coordonnees(3,2));
	bn.jouer(Coordonnees(3,2));
	bn.jouer(Coordonnees(3,3));
	bn.jouer(Coordonnees(3,3));
	bn.jouer(Coordonnees(4,0));
	bn.jouer(Coordonnees(4,0));
	bn.jouer(Coordonnees(4,1));
	bn.jouer(Coordonnees(4,1));
	bn.jouer(Coordonnees(4,2));
	bn.jouer(Coordonnees(4,2));
	bn.jouer(Coordonnees(4,3));
	bn.jouer(Coordonnees(4,3));
	bn.jouer(Coordonnees(4,4));
	bn.jouer(Coordonnees(4,4));

	cout << "affichage de la grille radar" << endl;
	afficherGrilleRadar(*bn.getGrille2());
	
	
	

	cout<< "Gagnant JOUEUR 1?" << endl; 		
	cout << (bn.retournerGagnant(bn.getPersonnage1(),bn.getPersonnage2())==bn.getPersonnage1()) << endl;
	
	cout << "On restaure un bateau au joueur 2 "<< endl; 
	bn.getPersonnage2()->getBateaux()[0]->restaurerPV();;
	cout << "On tue le joueur 1" << endl;
	bn.jouer(Coordonnees(0,0));
	bn.jouer(Coordonnees(0,0));
	cout<< "Gagnant JOUEUR 2?" << endl; 		
	cout << (bn.retournerGagnant(bn.getPersonnage1(),bn.getPersonnage2())==bn.getPersonnage2()) << endl;
}
