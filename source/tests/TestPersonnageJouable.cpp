#include <iostream>
#include "PersonnageJouable.hpp"

#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "Carte.hpp"


int main(){

cout << "Constructeur PersonnageJouable(string nomnv)" << endl;
PersonnageJouable pj("pj");
cout << "nom du joueur " << pj.getNom() << endl;
cout << "Coordonnees de depart " << pj.getCoordonnees().getAbscisse() << "," << pj.getCoordonnees().getOrdonnee() << endl;
cout << "Carte de depart " << pj.getCarte() << endl;
cout << "Coordonnees init " << pj.getCoordonneesInit().getAbscisse() << "," << pj.getCoordonneesInit().getOrdonnee() << endl;
cout << "Carte init " << pj.getIdCarteInit() << endl;
cout << endl;


cout << "Constructeur PersonnageJouable(string nomnv, Coordonnees coord, Carte* idCarte):Personnage(nomnv), coordInit(coord) " << endl;
Coordonnees coord(1,0);

Carte* carte = new Carte(0,{{'_','_','#'},{'#','_','#'},{'#','_','#'}});
cout << "Carte que l'on instancie" << endl;
cout << carte << endl;
PersonnageJouable pj2("pj2",coord,carte);
cout << "nom du joueur " << pj2.getNom() << endl;
cout << "Coordonnees de depart " << pj2.getCoordonnees().getAbscisse() << "," << pj2.getCoordonnees().getOrdonnee() << endl;
cout << "Carte de depart " << pj2.getCarte() << endl;
cout << "Coordonnees init " << pj2.getCoordonneesInit().getAbscisse() << "," << pj2.getCoordonneesInit().getOrdonnee() << endl;
cout << "Carte init " << pj2.getIdCarteInit() << endl;
cout << endl;


//////////////////////////////////////////
/////////////////////////////////////////
////////////////////////////////////////////
pj2.setCarte(carte);
pj2.setCoordonnees(coord);
cout << "On deplace le pj2 à sa position Init" << endl;
pj2.deplacementInitial();
cout << "nom du joueur " << pj2.getNom() << endl;
cout << "Coordonnees " << pj2.getCoordonnees().getAbscisse() << "," << pj2.getCoordonnees().getOrdonnee() << endl;
cout << "Carte" << pj2.getCarte() << endl;



}
