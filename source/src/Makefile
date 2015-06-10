FLAGS=-std=c++11

all: Main

%.o: %.cpp
	g++ -c $(FLAGS) $<






#################
#  Action Main  #
#################
CompileMain: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o Controleur.o CelluleObstacle.o Jeu.o Grille.o BatailleNavale.o IHMBN.o Case.o Bateau.o PersonnageBN.o IHMJeu.o Monde.o PersonnageBN.o ActionCombat.o ArmeClassique.o Arme.o ControleurBN.o JoueurHumain.o  PersonnageBNHumain.o PersonnageJouable.o CelluleChangementCarte.o ActionVide.o JoueurIA.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIAAvance.o  JoueurIACheate.o PersonnageBNIACheate.o PersonnageBNIAAvance.o CelluleCombat.o Inventaire.o BadgeFinal.o Objet.o ArmeCroix.o ArmeChercheuse.o ArmeFatale.o
	g++ $(FLAGS) main.cpp $^ -o main
Main: CompileMain
	./main


######################
#  Action nettoyage  #
######################
clean:
	rm -rf *.o *~; find ./tests/ -type f ! -name "*.*" -exec rm {} \;
