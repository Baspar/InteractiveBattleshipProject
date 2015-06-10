#include <iostream>
#include "JoueurHumain.hpp"
#include "Arme.hpp"
#include "ArmeClassique.hpp"
#include "ArmeCroix.hpp"
#include "ArmeFatale.hpp"
#include "Grille.hpp"
#include "TailleGrille.hpp"
#include "Coordonnees.hpp"
#include "Carte.hpp"

void afficherGrille(Grille grille){
    cout << endl << endl << " Affichage Grille : " << endl << endl;

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


int main(){
	cout << endl << endl << endl;
	Carte* carte = new Carte(0,{{'#','_','#'},{'#','_','#'},{'#','_','_'}});
	Coordonnees coord(0,1);
	JoueurHumain pbn("pôl_é_kockduhi",coord,carte);
	cout << "pbn : " << pbn.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn.getTailleGrille().getLongueur() << "," << pbn.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn.getBateaux().size();i++){
		cout << pbn.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn.getArme()->getNomArme() << endl;
	cout << "Le PV initial du bateau 2 est " << pbn.getBateaux()[2]->getPV() << endl;
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
	cout << "Flotte Coulee?? " << pbn.flotteCoulee() << endl;

	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	cout << "Le PV final du bateau 2 est " << pbn.getBateaux()[2]->getPV() << endl;
	cout << "Flotte Coulee?? " << pbn.flotteCoulee() << endl;







	cout << endl << endl << endl;
	Arme* ar = new ArmeClassique();
	JoueurHumain pbn2("Léauéclem",6,10,ar,coord,carte);
	cout << "pbn2 : " << pbn2.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn2.getTailleGrille().getLongueur() << "," << pbn2.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn2.getBateaux().size();i++){
		cout << pbn2.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn2.getArme()->getNomArme() << endl;
	pbn2.placerBateaux();
	for(int i=0;i<pbn2.getBateaux().size();i++){
		cout << "La taille du bateau n° " << i << " est : " << pbn2.getBateaux()[i]->getTailleBateau() <<endl;
		for(int j=0; j<pbn2.getBateaux()[i]->getTailleBateau();j++){
			cout << "Il a : " << pbn2.getBateaux()[i]->getPV() << " PV" << endl;
			pbn2.getBateaux()[i]->retirerPV();
		}
	}
	

	cout << endl << endl << endl;
	Arme* arm = new ArmeCroix();
	JoueurHumain pbn3("Bas ti 1 et Da mi 1",arm,coord,carte);
	cout << "pbn3 : " << pbn3.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn3.getTailleGrille().getLongueur() << "," << pbn3.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn3.getBateaux().size();i++){
		cout << pbn3.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn3.getArme()->getNomArme() << endl;





	cout << endl << endl << endl;
	JoueurHumain pbn4("BasssssssssssssttttiennéVivi",8,12,coord,carte);
	cout << "pbn4 : " << pbn4.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn4.getTailleGrille().getLongueur() << "," << pbn4.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn4.getBateaux().size();i++){
		cout << pbn4.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn4.getArme()->getNomArme() << endl;




	cout << endl << endl << endl;
	vector<int> vec={5,4,3,3,2};
	JoueurHumain pbn5("Perso",vec,coord,carte);
	cout << "pbn5 : " << pbn5.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn5.getTailleGrille().getLongueur() << "," << pbn5.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn5.getBateaux().size();i++){
		cout << pbn5.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn5.getArme()->getNomArme() << endl;
	Grille gr=pbn5.placerBateaux();
	cout << "Voici la grille renvoyée par le placement bateau chez un JoueurHumain : " << endl;
	afficherGrille(gr);
	cout << "C'est bien ce que l'on cherchait car on ne peut pas placer de bateau dans la partie modèle, on créé donc une grille vide en attendant le travail de l'IHM" << endl;
	Grille* gr2 = new Grille(8,10);
	Coordonnees coord2 = pbn5.coordonneesAViser(gr2);
	cout << "Les cordonnees a viser sont" << coord2.getAbscisse() << coord2.getOrdonnee() << endl;
	cout << "C'est bien ce que l'on cherchait car on ne peut pas savoir quelles sont les coordonnees visees dans la partie modèle, on créé donc des coordonnees vides en attendant le travail de l'IHM" << endl;



	cout << endl << endl << endl;
	vector<int> vec2={9,6,3,4};
	JoueurHumain pbn6("DaméAnn",3,3,vec2,coord,carte);
	cout << "pbn6 : " << pbn6.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn6.getTailleGrille().getLongueur() << "," << pbn6.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn6.getBateaux().size();i++){
		cout << pbn6.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn6.getArme()->getNomArme() << endl;





	cout << endl << endl << endl;
	vector<int> vec3={4,6,6,2,1};
	Arme* arme = new ArmeFatale();
	JoueurHumain pbn7("jesaispasqui",vec3,arme,coord,carte);
	cout << "pbn7 : " << pbn7.getNomBN() << endl;
	cout << " J'ai une grille de taille : (" << pbn7.getTailleGrille().getLongueur() << "," << pbn7.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn7.getBateaux().size();i++){
		cout << pbn7.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn7.getArme()->getNomArme() << endl;








	cout << endl << endl << endl;
	vector<int> vec4={5,7,6,4,9,3};
	Arme* armm = new ArmeFatale();
	JoueurHumain pbn8("jesaistout",7,6,vec4,armm,coord,carte);
	cout << "pbn8 : " << pbn8.getNomBN() << endl;	
	cout << " J'ai une grille de taille : (" << pbn8.getTailleGrille().getLongueur() << "," << pbn8.getTailleGrille().getHauteur() << ")" << endl;
	cout << "J'ai des bateaux de taille : ";
	for(int i=0;i<pbn8.getBateaux().size();i++){
		cout << pbn8.getBateaux()[i]->getTailleBateau() << " " ;
	}
	cout << endl;
	cout << "J'ai une " << pbn8.getArme()->getNomArme() << endl;
}

