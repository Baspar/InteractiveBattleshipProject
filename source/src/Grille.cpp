#include "Grille.hpp"

#include "TailleGrille.hpp"
#include "Coordonnees.hpp"
#include "Case.hpp"
#include <vector>

using namespace std;

Grille::Grille(int longueur, int hauteur) : tailleGrille(longueur, hauteur){//DONE
	cases.resize(longueur);
	for(int i=0; i<longueur; i++){
		cases[i].resize(hauteur);
	}
}


Case Grille::getCaseElt(Coordonnees coordonnees){//DONE
	Case c;
	c=cases.at(coordonnees.getAbscisse()).at(coordonnees.getOrdonnee());
	return c;
}


void Grille::placerBateau(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee){//DONE
	//Bateau en colonne
	if(caseDepart.getAbscisse()==caseArrivee.getAbscisse()){
		//caseArrivee a gauche
		if(caseDepart.getOrdonnee()>caseArrivee.getOrdonnee()){
			for(int i=caseArrivee.getOrdonnee();i<(caseDepart.getOrdonnee()+1);i++)
				cases.at(caseDepart.getAbscisse()).at(i).setBateau(bateau);
		}
		//caseArrivee a droite
		else {
			for(int i=caseDepart.getOrdonnee();i<(caseArrivee.getOrdonnee()+1);i++)
				cases.at(caseDepart.getAbscisse()).at(i).setBateau(bateau);
		}
	}
	//Bateau en ligne
	else {
		//caseArrivee en haut
		if(caseDepart.getAbscisse()>caseArrivee.getAbscisse()){
			for(int i=caseArrivee.getAbscisse();i<(caseDepart.getAbscisse()+1);i++)
				cases.at(i).at(caseDepart.getOrdonnee()).setBateau(bateau);
		}
		//caseArrivee en bas
		else {
			for(int i=caseDepart.getAbscisse();i<(caseArrivee.getAbscisse()+1);i++)
				cases.at(i).at(caseArrivee.getOrdonnee()).setBateau(bateau);
		}

	}
}

void Grille::copy(const Grille grille){

}
