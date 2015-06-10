#include <iostream>
#include "PersonnageBNHumain.hpp"
#include "Arme.hpp"
#include "ArmeClassique.hpp"
#include "ArmeCroix.hpp"
#include "Grille.hpp"
#include "TailleGrille.hpp"
#include "Coordonnees.hpp"

int main(){

	PersonnageBNHumain pbn("pôl_é_kockduhi");
	cout << "nom du joueur : " << pbn.getNomBN() << endl;
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
	cout << "Coulee?? " << pbn.flotteCoulee() << endl;

	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	pbn.getBateaux()[4]->retirerPV();
	cout << "Le PV final du bateau 2 est " << pbn.getBateaux()[2]->getPV() << endl;
	cout << "Coulee?? " << pbn.flotteCoulee() << endl;

	Arme* ar = new ArmeClassique();
	PersonnageBNHumain pbn2("Léauéclem",6,10,ar);
	pbn2.placerBateaux();
	for(int i=0;i<pbn2.getBateaux().size();i++){
		cout << "La taille du bateau n° " << i << " est : " << pbn2.getBateaux()[i]->getTailleBateau() <<endl;
		for(int j=0; j<pbn2.getBateaux()[i]->getTailleBateau();j++){
			cout << "Il a : " << pbn2.getBateaux()[i]->getPV() << " PV" << endl;
			pbn2.getBateaux()[i]->retirerPV();
		}
	}
	

	Arme* arm = new ArmeCroix();
	PersonnageBNHumain pbn3("Bas ti 1 et Da mi 1",arm);
	Coordonnees coordT(2,1);

	PersonnageBNHumain pbn4("BasssssssssssssttttiennéVivi",8,12);

	vector<int> vec={5,4,3,3,2};
	PersonnageBNHumain pbn5("Perso",vec);
	Grille gr=pbn5.placerBateaux();


	vector<int> vec2={9,6,3,4};
	PersonnageBNHumain pbn6("DaméAnn",3,3,vec2);
	

}

