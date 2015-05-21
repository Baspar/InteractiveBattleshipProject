#include "ControleurBN.hpp"
#include "PersonnageBN.hpp"
#include "BatailleNavale.hpp"
#include "JoueurIACheate.hpp"
#include "JoueurHumain.hpp"
#include "JoueurIA.hpp"
#include "ArmeChercheuse.hpp"

using namespace std;

int main(){
    BatailleNavale* batailleNavale=new BatailleNavale();
    ControleurBN controleurBN(batailleNavale);

    batailleNavale->initialiserJoueurCourant(
            (PersonnageBN*)new JoueurIACheate("JoueurCheate"),
            (PersonnageBN*)new JoueurIA("Looser", 20, 20, new ArmeChercheuse()));

    controleurBN.actionBatailleNavale();

    batailleNavale->initialiserJoueurCourant(
            (PersonnageBN*)new JoueurIA("JoueurIA", 15, 15),
            (PersonnageBN*)new JoueurIA("JoueurIA", 20, 20));

    controleurBN.actionBatailleNavale();
}
