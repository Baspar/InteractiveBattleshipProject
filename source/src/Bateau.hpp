#ifndef BATEAU_H
#define BATEAU_H

using namespace std;

class Bateau {
    public:
        bool estCoule ();
        void retirerPV ();
    private:
        int PV;
        bool coule;
        int taille;
};
#endif
