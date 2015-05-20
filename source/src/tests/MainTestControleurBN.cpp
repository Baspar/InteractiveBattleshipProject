#include "ControleurBN.hpp"
#include "PersonnageBN.hpp"
#include "BatailleNavale.hpp"
#include "JoueurIACheate.hpp"
#include "JoueurHumain.hpp"
#include "JoueurIA.hpp"
#include "ArmeCroix.hpp"

using namespace std;

int main(){
    BatailleNavale* batailleNavale=new BatailleNavale();
    ControleurBN controleurBN(batailleNavale);

    batailleNavale->initialiserJoueurCourant(
            (PersonnageBN*)new JoueurIACheate("JoueurCheate"),
            (PersonnageBN*)new JoueurIACheate("JoueurCheate1", 20, 20, new ArmeCroix()));

    controleurBN.actionBatailleNavale();

    batailleNavale->initialiserJoueurCourant(
            (PersonnageBN*)new JoueurIA("JoueurIA", 15, 15),
            (PersonnageBN*)new JoueurIA("JoueurIA", 20, 20));

    controleurBN.actionBatailleNavale();
}
