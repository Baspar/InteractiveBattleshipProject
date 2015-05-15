#include "Grille.hpp"

#include "TailleGrille.hpp"
#include "Coordonnees.hpp"
#include "Case.hpp"
#include <vector>
#include <cmath>

using namespace std;

Grille::Grille(int longueur, int hauteur) : tailleGrille(longueur, hauteur){//DONE
	cases.resize(longueur);
	for(int i=0; i<longueur; i++){
		cases[i].resize(hauteur);
	}
}

Grille::Grille(const Grille& grille) :tailleGrille(grille.getTailleGrille().getLongueur(), grille.getTailleGrille().getHauteur()){
	cases.resize(grille.getTailleGrille().getLongueur());
	for(int i=0; i<grille.getTailleGrille().getLongueur(); i++){
		cases[i].resize(grille.getTailleGrille().getHauteur());
	}
	setCases(grille.getCases());
}


Case Grille::getCaseElt(Coordonnees coordonnees){//DONE
	Case c;
	c.copy(cases.at(coordonnees.getAbscisse()).at(coordonnees.getOrdonnee()));
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

void Grille::copy(const Grille grille){//DONE
	setTailleGrille(grille.getTailleGrille());
	cases.resize(grille.getTailleGrille().getLongueur());
	for(int i=0; i<grille.getTailleGrille().getLongueur(); i++){
		cases[i].resize(grille.getTailleGrille().getHauteur());
	}
	setCases(grille.getCases());
}


void Grille::setTailleGrille(const TailleGrille tailleGrillecp){//DONE
	tailleGrille=tailleGrille;
}

void Grille::setCases(const vector<vector<Case> > casescp){//DONE
	cases=casescp;
}

vector<vector<Case> > Grille::getCases() const{//DONE
	return cases;
}

TailleGrille Grille::getTailleGrille() const{//DONE
	return tailleGrille;
}

bool Grille::verifierPlacement(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee){//DONE
	//Verification de la taille du bateau
	if (!(bateau->getTailleBateau()==abs(caseDepart.getAbscisse()-caseArrivee.getAbscisse()))||(bateau->getTailleBateau()==abs(caseDepart.getOrdonnee()-caseArrivee.getOrdonnee())))
		return false;

	//Bateau en colonne
	if(caseDepart.getAbscisse()==caseArrivee.getAbscisse()){
		//caseArrivee a gauche
		if(caseDepart.getOrdonnee()>caseArrivee.getOrdonnee()){
			for(int i=caseArrivee.getOrdonnee();i<(caseDepart.getOrdonnee()+1);i++)
				if(cases.at(caseDepart.getAbscisse()).at(i).getBateau()==0)
				return false;
		}
		//caseArrivee a droite
		else {
			for(int i=caseDepart.getOrdonnee();i<(caseArrivee.getOrdonnee()+1);i++)
				if(cases.at(caseDepart.getAbscisse()).at(i).getBateau()==0)
				return false;
		}
	}
	//Bateau en ligne
	else {
		//caseArrivee en haut
		if(caseDepart.getAbscisse()>caseArrivee.getAbscisse()){
			for(int i=caseArrivee.getAbscisse();i<(caseDepart.getAbscisse()+1);i++)
				if(cases.at(i).at(caseDepart.getOrdonnee()).getBateau()==0)
				return false;
		}
		//caseArrivee en bas
		else {
			for(int i=caseDepart.getAbscisse();i<(caseArrivee.getAbscisse()+1);i++)
				if(cases.at(i).at(caseArrivee.getOrdonnee()).getBateau()==0)
				return false;
		}

	}
	return true;

}

bool Grille::verifierCase(const Coordonnees caseDepart, const Coordonnees caseArrivee){//DONE
	//Abscisse de depart dans la grille
	if (!(caseDepart.getAbscisse() < getTailleGrille().getLongueur()))
		return false;
	//Ordonnee de depart dans la grille
	if (!(caseDepart.getOrdonnee() < getTailleGrille().getHauteur()))
		return false;
	//Abscisse d arrivee dans la grille
	if (!(caseArrivee.getAbscisse() < getTailleGrille().getLongueur()))
		return false;
	//Ordonnee d arrivee dans la grille
	if (!(caseArrivee.getOrdonnee() < getTailleGrille().getHauteur()))
		return false;
	//Alignement des cases
	if (!((caseArrivee.getAbscisse()==caseDepart.getAbscisse())||(caseArrivee.getOrdonnee()==caseDepart.getOrdonnee())))
		return false;
	return true;
}

bool Grille::placementBateauValide(Bateau *bateau, const Coordonnees caseDepart, const Coordonnees caseArrivee){//DONE
	return (verifierPlacement(bateau,caseDepart,caseArrivee)&&verifierCase(caseDepart,caseArrivee));
}

bool Grille::coupValide(const Coordonnees kase){//DONE
	//Abscisse de depart dans la grille
	if (!(kase.getAbscisse() < getTailleGrille().getLongueur()))
		return false;
	//Ordonnee de depart dans la grille
	if (!(kase.getOrdonnee() < getTailleGrille().getHauteur()))
		return false;
	//La case est déjà touchée
	if(getCaseElt(kase).getTouche()==true)
		return false;
	return true;
}

bool Grille::grilleVide() const{
	bool bol=false;
	if((getTailleGrille().getHauteur()==0) && (getTailleGrille().getLongueur()==0)){
		bol=true;
	}
	return bol;
}
