#include <iostream>
#include "ActionCombat.hpp"
#include "PersonnageNonJouable.hpp"

using namespace std;

int main{
PersonnageNonJouable* adv = new PersonnageNonJouable("Martin");
ActionCombat act(adv,"Ceci est le texte de l'Action Combat");

}
