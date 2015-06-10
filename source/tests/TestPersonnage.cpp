#include <iostream>
#include "Personnage.hpp"
#include "Coordonnees.hpp"
#include "Carte.hpp"
#include "Inventaire.hpp"
#include "Objet.hpp"
#include "BadgeFinal.hpp"

using namespace std;

int main(){
	Carte* car = new Carte(0,{{'#','_','#'},{'#','_','#'},{'#','_','_'}});
	Carte* cart = new Carte(1,{{'#','_','#'},{'#','_','_'},{'#','_','_'}});
	Coordonnees coord(1,1);
	Personnage perso("Henri");
	perso.setCarte(car);
	perso.setCoordonnees(coord);
	Coordonnees coord2(2,1);
	cout << "Coordonnees du personnage? " << perso.getCoordonnees().getAbscisse() << "," << perso.getCoordonnees().getOrdonnee() << ")" << endl;
	cout << "Carte du personnage? " << perso.getCarte() << endl;
	cout << "Le personnage s'appelle : " << perso.getNom() << endl;
	perso.deplacer(coord2,cart);
	cout << "Coordonnees du personnage? (" << perso.getCoordonnees().getAbscisse() << "," << perso.getCoordonnees().getOrdonnee() << ")" << endl;
	cout << "Carte du personnage ? " << perso.getCarte() << endl;
	cout << "Taille de l'inventaire du personnage : " << perso.getInventaire()->getObjet().size() << endl;
	for(int i=0;i!=6;i++){
		perso.getInventaire()->ajoutObjet(new BadgeFinal());
	}
	cout << "Taille de l'inventaire du personnage : " << perso.getInventaire()->getObjet().size() << endl; 
	cout << "Voici les objets contenus dans l'inventaire : " << endl ;
	for(int i=0; i!=perso.getInventaire()->getObjet().size();i++){
		 cout << perso.getInventaire()->getObjet()[i]->getNom() << endl;
	}	
}
