#ifndef COORDONNEE_H
#define COORDONNEE_H

 /// \file Coordonnees.hpp
 /// \brief Coordonnées sur une carte 
 /// \author 

using namespace std;

/// \class Coordonnees 
/// \brief Coordonnees sur une carte
/// Classe Coordonnees représentant les coordonnées de notre joueur ou de notre
/// obstacle sur la carte

class Coordonnees {
    private:
        int abscisse; ///entier correspondant à l'abscisse
        int ordonnee; ///entier correspondant à l'ordonnée
        
    public:
    /// \fn  Coordonnees(int abs, int ord)
    /// \brief Contructeur paramétré
    /// Constructeur permettant d'instancier une coordonnée avec une abscisse et une ordonnée
    /// \param abs: entier correspondant à l'abscisse   
    /// \param ord: entier correspondant à l'ordonnée
        Coordonnees(int abs, int ord);
    
};
#endif
