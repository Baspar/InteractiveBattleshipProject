#include "Grille.hpp"
#include "Case.hpp"
#include "Bateau.hpp"
#include "Coordonnees.hpp"
#include <iostream>

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

int main(){
    Grille grilleVide(0, 0);
    cout << "On cree une grille vide" << endl;
    cout << "   GrilleVide vide? " << (grilleVide.grilleVide()?"Oui":"Non") << endl;

    Grille grille(15, 20);
    cout << "On cree une grille de taille 15x20" << endl;
    cout << "   Taille : (" << grille.getTailleGrille().getLongueur()  << "x" << grille.getTailleGrille().getHauteur() << ")" << endl;
    cout << "   Grille vide? " << (grille.grilleVide()?"Oui":"Non") << endl;

    Bateau bat1(2);
    Bateau bat2(5);

    cout << "On teste un bon placement" << endl;
    cout << "   Resultat: " << (grille.placementBateauValide(&bat1, Coordonnees(0, 0), Coordonnees(0, 1))?"OK":"Pas OK") << endl;

    cout << "On teste les placements hors du cadre" << endl;
    cout << "   Debordement Hauteur max: " << (grille.placementBateauValide(&bat1, Coordonnees(0, 19), Coordonnees(0, 20))?"OK":"Pas OK") << endl;
    cout << "   Debordement Hauteur min: " << (grille.placementBateauValide(&bat1, Coordonnees(0, -1), Coordonnees(0, 0))?"OK":"Pas OK") << endl;
    cout << "   Debordement Largeur max: " << (grille.placementBateauValide(&bat1, Coordonnees(14, 0), Coordonnees(15, 0))?"OK":"Pas OK") << endl;
    cout << "   Debordement Largeur min: " << (grille.placementBateauValide(&bat1, Coordonnees(-1, 0), Coordonnees(0, 0))?"OK":"Pas OK") << endl;

    cout << "On teste pas aligné" << endl;
    cout << "   Resultat: " << (grille.placementBateauValide(&bat1, Coordonnees(0, 0), Coordonnees(1, 1))?"OK":"Pas OK") << endl;

    cout << "On place un bateau" << endl;
    grille.placerBateau(&bat1, Coordonnees(0, 0), Coordonnees(0, 1));

    cout << "On essai de placer un bateau par dessus" << endl;
    cout << "   Resultat: " << (grille.placementBateauValide(&bat2, Coordonnees(0, 0), Coordonnees(0, 4))?"OK":"Pas OK") << endl;

    cout << "On place un bateau2" << endl;
    grille.placerBateau(&bat2, Coordonnees(4, 3), Coordonnees(0, 3));


    cout << "On crée une grille par recopie" << endl;
    Grille grilleCopy(grille);
    cout << "   GrilleCopy vide? " << (grilleCopy.grilleVide()?"Oui":"Non") << endl;

    cout << "On copie notre grille vide dans grille" << endl;
    grille.copy(grilleVide);
    cout << "   Grille vide? " << (grille.grilleVide()?"OK":"Pas OK") << endl;
    cout << "   GrilleVide vide? " << (grilleVide.grilleVide()?"OK":"Pas OK") << endl;
    cout << "   GrilleCopy vide? " << (grilleCopy.grilleVide()?"Pas OK":"OK") << endl;

    cout << "On recupere une case" << endl;
    Case kase = grilleCopy.getCaseElt(Coordonnees(0, 0));
    cout << "   Case pleine: " << (kase.getBateau()==nullptr?"Pas OK":"OK") << endl;
    kase = grilleCopy.getCaseElt(Coordonnees(10, 0));
    cout << "   Case vide: " << (kase.getBateau()!=nullptr?"Pas OK":"OK") << endl;

    cout << "On teste un coup valide" << endl;
    cout << "   Resultat: " << (grilleCopy.coupValide(Coordonnees(0, 0))?"OK":"Pas OK") << endl;
    cout << "On teste les coups hors du cadre" << endl;
    cout << "   Debordement Hauteur max: " << (grilleCopy.coupValide(Coordonnees(0, 20))?"Pas OK":"OK") << endl;
    cout << "   Debordement Hauteur min: " << (grilleCopy.coupValide(Coordonnees(0, -1))?"Pas OK":"OK") << endl;
    cout << "   Debordement Largeur max: " << (grilleCopy.coupValide(Coordonnees(15, 0))?"Pas OK":"OK") << endl;
    cout << "   Debordement Largeur min: " << (grilleCopy.coupValide(Coordonnees(-1, 0))?"Pas OK":"OK") << endl;
    grilleCopy.tirerDessus(Coordonnees(0, 0));
    cout << "   Case deja touchée: " << (grilleCopy.coupValide(Coordonnees(0, 0))?"Pas OK":"OK") << endl;

    return 0;
}
