#include "IHMJeu.hpp"

#include "Jeu.hpp"
#include "Coordonnees.hpp"
#include "CelluleAccessible.hpp"
#include <iostream>


using namespace std;

IHMJeu::IHMJeu (Jeu* jeuEntree){//DONE
    jeu=jeuEntree;
}

Coordonnees IHMJeu::saisieDeplacement (){//DONE
    int deplacement=0;
    cin >> deplacement;

    Coordonnees coord(jeu->getPersonnageJouable()->getCoordonnees());

    switch (deplacement){
        case 8 : return Coordonnees(coord.getAbscisse()-1, coord.getOrdonnee());
        case 4 : return Coordonnees(coord.getAbscisse(), coord.getOrdonnee()-1);
        case 2 : return Coordonnees(coord.getAbscisse()+1, coord.getOrdonnee());
        case 6 : return Coordonnees(coord.getAbscisse(), coord.getOrdonnee()+1);
        default : return Coordonnees(coord.getAbscisse(), coord.getOrdonnee());
    }
}

void IHMJeu::afficherJeu (){//DONE
    this->afficherCarteCourante();
    //this->afficherInteraction();
    this->afficherSaisie();
}

void IHMJeu::afficherSaisie (){//DONE
    cout<<endl;
    cout<<"Affichage de la zone de saisie";
    cout<<endl;
}

void IHMJeu::afficherInteraction(){//DONE
    cout << "Affichage de l'action en cours" << endl;
    cout << jeu->getActionEnCours()->getTexteInteraction() << endl;
}

void IHMJeu::afficherCarteCourante(){//WIP
    cout<<endl;
    cout<<"Affichage de la carte courante";
    cout<<endl;
    for(vector<Cellule*> cels : jeu->getPersonnageJouable()->getCarte()->getCellules()) {
        for(Cellule* cel : cels) {
			string type = cel->getTypeDeCellule();
			
			if(type==" ")
				if( ((CelluleAccessible*) cel)->getPersonnage()!=nullptr)
					cout << "ô";
				else cout<<type;
				
			else cout << type;
		cout <<" ";
        }
        cout<< endl;
    }
}
