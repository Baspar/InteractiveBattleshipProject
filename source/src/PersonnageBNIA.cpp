#include "PersonnageBNIA.hpp"

#include "PersonnageBN.hpp"
#include <random>
#include <iostream>

using namespace std;

PersonnageBNIA::PersonnageBNIA(string nomnv):PersonnageBN(nomnv){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, int l, int h, Arme* a):PersonnageBN(nomnv, l, h, a){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, Arme* a):PersonnageBN(nomnv, a){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, int l, int h):PersonnageBN(nomnv, l, h){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, vector<int> tBateaux):PersonnageBN(nomnv, tBateaux){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, int l, int h, vector<int> tBateaux, Arme* a):PersonnageBN(nomnv, l, h, tBateaux, a){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, vector<int> tBateaux, Arme* a):PersonnageBN(nomnv, tBateaux, a){//DONE
}

PersonnageBNIA::PersonnageBNIA(string nomnv, int l, int h, vector<int> tBateaux):PersonnageBN(nomnv, l, h, tBateaux){//DONE
}


Coordonnees PersonnageBNIA::coordonneesAViser(Grille* grilleAdverse){//DONE
    Coordonnees impact(-1,-1);
    int hauteur = grilleAdverse->getTailleGrille().getHauteur();
    int longueur = grilleAdverse->getTailleGrille().getLongueur();
    int nbCases = hauteur*longueur;


    random_device rd;
    default_random_engine generator(rd());
    uniform_int_distribution<int> pointRandom(0, nbCases-1);

    do {
        int pointVise = pointRandom(generator);
        impact.copy(
                Coordonnees(
                    pointVise%longueur,
                    pointVise/longueur
                    )
                );
        //cout << hauteur << "x" << longueur << " = " << nbCases << "   point vise :" << pointVise << " (" << impact.getAbscisse() << ", " << impact.getOrdonnee() << ")" << endl;
    }
    while (!grilleAdverse->coupValide(impact));
    return impact ;
}

Grille PersonnageBNIA::placerBateaux(){//DONE
    Grille grilleIA(getTailleGrille().getLongueur(), getTailleGrille().getHauteur());
    Coordonnees coordDebut(-1,-1), coordFin(-1,-1);
    int nbCases = grilleIA.getTailleGrille().getHauteur() * grilleIA.getTailleGrille().getLongueur();

    random_device rd;
    default_random_engine generator(rd());
    uniform_int_distribution<int> directionRandom(1,4);
    uniform_int_distribution<int> pointRandom(0, nbCases);

    for (Bateau* bat : getBateaux()){
        bool toutvabien = false;
        while (toutvabien == false)
        {
            int pointDepart = pointRandom(generator);
            coordDebut.copy(Coordonnees(pointDepart%grilleIA.getTailleGrille().getHauteur(), pointDepart/grilleIA.getTailleGrille().getLongueur()));
            int direction = directionRandom(generator);
            int x,y;
            switch(direction)
            {
                case 1 :
                    x = coordDebut.getAbscisse();
                    y = coordFin.getOrdonnee() + bat->getTailleBateau()- 1;
                    break ;
                case 2 :
                    x = coordDebut.getAbscisse()+ bat->getTailleBateau()- 1;
                    y = coordFin.getOrdonnee();
                    break ;
                case 3 :
                    x = coordDebut.getAbscisse();
                    y = coordFin.getOrdonnee() - bat->getTailleBateau() + 1;
                    break ;
                case 4 :
                    x = coordDebut.getAbscisse() - bat->getTailleBateau() + 1;
                    y = coordFin.getOrdonnee();
                    break ;
            }
            coordFin.copy(Coordonnees(x,y));
            toutvabien = grilleIA.placementBateauValide(bat, coordDebut, coordFin);
        }
        grilleIA.placerBateau(bat, coordDebut, coordFin);
    }

    return grilleIA;
}
