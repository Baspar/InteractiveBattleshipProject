FLAGS=-std=c++11
FLAGSTEST=-std=c++11 -I .

all: Main

%.o: %.cpp
	g++ -c $(FLAGS) $<

CompileMain: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o Controleur.o CelluleObstacle.o Jeu.o Grille.o BatailleNavale.o IHMBN.o Case.o Bateau.o PersonnageBN.o IHMJeu.o Monde.o PersonnageBN.o ActionCombat.o ArmeClassique.o Arme.o ControleurBN.o JoueurHumain.o  PersonnageBNHumain.o PersonnageJouable.o CelluleChangementCarte.o ActionVide.o JoueurIA.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIAAvance.o  JoueurIACheate.o PersonnageBNIACheate.o PersonnageBNIAAvance.o CelluleCombat.o
	g++ $(FLAGS) main.cpp $^ -o main
Main: CompileMain
	./main

MainTestActionChangementCarte: CompileMainTestActionChangementCarte
	tests/MainTestActionChangementCarte
MainTestActionVide: CompileMainTestActionVide
	tests/MainTestActionVide
MainBestMainEver: CompileBestMainEver
	tests/bestMainEver
MainTestActionCombat: CompileMainTestActionCombat
	tests/MainTestActionCombat
MainTestAction: CompileMainTestAction
	tests/MainTestAction
MainTestArmeClassique: CompileMainTestArmeClassique
	tests/MainTestArmeClassique
MainTestArmeChercheuse: CompileMainTestArmeChercheuse
	tests/MainTestArmeChercheuse
MainTestArmeCroix: CompileMainTestArmeCroix
	tests/MainTestArmeCroix
MainTestArmeFatale: CompileMainTestArmeFatale
	tests/MainTestArmeFatale
MainTestArme: CompileMainTestArme
	tests/MainTestArme
MainTestBatailleNavale: CompileMainTestBatailleNavale
	tests/MainTestBatailleNavale
MainTestBateau: CompileMainTestBateau
	tests/MainTestBateau
MainTestCarte: CompileMainTestCarte
	tests/MainTestCarte
MainTestCase: CompileMainTestCase
	tests/MainTestCase
MainTestCelluleChangementCarte: CompileMainTestCelluleChangementCarte
	tests/MainTestCelluleChangementCarte
MainTestCelluleAccessible: CompileMainTestCelluleAccessible
	tests/MainTestCelluleAccessible
MainTestCelluleCombat: CompileMainTestCelluleCombat
	tests/MainTestCelluleCombat
MainTestCellule: CompileMainTestCellule
	tests/MainTestCellule
MainTestCelluleObstacle: CompileMainTestCelluleObstacle
	tests/MainTestCelluleObstacle
MainTestCombat: CompileMainTestCombat
	tests/MainTestCombat
MainTestControleur: CompileMainTestControleur
	tests/MainTestControleur
MainTestCoordonnees: CompileMainTestCoordonnees
	tests/MainTestCoordonnees
MainTestGrille: CompileMainTestGrille
	tests/MainTestGrille
MainTestIHMBN: CompileMainTestIHMBN
	tests/MainTestIHMBN
MainTestIHMJeu: CompileMainTestIHMJeu
	tests/MainTestIHMJeu
MainTestJeu: CompileMainTestJeu
	tests/MainTestJeu
MainTestJoueurHumain: CompileMainTestJoueurHumain
	tests/MainTestJoueurHumain
MainTestJoueurIA: CompileMainTestJoueurIA
	tests/MainTestJoueurIA
MainTestMonde: CompileMainTestMonde
	tests/MainTestMonde
MainTestPersonnageBN: CompileMainTestPersonnageBN
	tests/MainTestPersonnageBN
MainTestPersonnageBNHumain: CompileMainTestPersonnageBNHumain
	tests/MainTestPersonnageBNHumain
MainTestPersonnageBNIA: CompileMainTestPersonnageBNIA
	tests/MainTestPersonnageBNIA
MainTestPersonnage: CompileMainTestPersonnage
	tests/MainTestPersonnage
MainTestPersonnageJouable: CompileMainTestPersonnageJouable
	tests/MainTestPersonnageJouable
MainTestPersonnageNonJouable: CompileMainTestPersonnageNonJouable
	tests/MainTestPersonnageNonJouable
MainTestTailleGrille: CompileMainTestTailleGrille
	tests/MainTestTailleGrille
MainTestControleurBN: CompileMainTestControleurBN
	tests/MainTestControleurBN

CompileMain: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o Controleur.o CelluleObstacle.o Jeu.o Grille.o BatailleNavale.o IHMBN.o Case.o Bateau.o PersonnageBN.o IHMJeu.o Monde.o PersonnageBN.o ActionCombat.o ArmeClassique.o Arme.o ControleurBN.o JoueurHumain.o  PersonnageBNHumain.o PersonnageJouable.o CelluleChangementCarte.o ActionVide.o JoueurIA.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIAAvance.o  JoueurIACheate.o PersonnageBNIACheate.o PersonnageBNIAAvance.o CelluleCombat.o
	g++ $(FLAGS) main.cpp $^ -o main
CompileMainTestActionChangementCarte: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o CelluleObstacle.o PersonnageJouable.o
	g++ $(FLAGSTEST) tests/MainTestActionChangementCarte.cpp $^ -o tests/MainTestActionChangementCarte
CompileMainTestActionVide: ActionVide.o Action.o 
	g++ $(FLAGSTEST) tests/MainTestActionVide.cpp $^ -o tests/MainTestVide
CompileBestMainEver: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o Controleur.o CelluleObstacle.o Jeu.o Grille.o BatailleNavale.o IHMBN.o Case.o Bateau.o PersonnageBN.o IHMJeu.o Monde.o PersonnageBN.o ActionCombat.o ArmeClassique.o Arme.o ControleurBN.o JoueurHumain.o  PersonnageBNHumain.o PersonnageJouable.o CelluleChangementCarte.o ActionVide.o JoueurIA.o PersonnageNonJouable.o PersonnageBNIA.o
	g++ $(FLAGSTEST) tests/bestMainEver.cpp $^ -o tests/bestMainEver
CompileMainTestActionCombat: ActionCombat.o PersonnageNonJouable.o Action.o Personnage.o Coordonnees.o Carte.o Cellule.o CelluleAccessible.o TailleGrille.o CelluleObstacle.o
	g++ $(FLAGSTEST) tests/MainTestActionCombat.cpp $^ -o tests/MainTestActionCombat
CompileMainTestAction: Action.o
	g++ $(FLAGSTEST) tests/MainTestAction.cpp $^ -o tests/MainTestAction
CompileMainTestArmeClassique:  ArmeClassique.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/MainTestArmeClassique.cpp $^ -o tests/MainTestArmeClassique
CompileMainTestArmeChercheuse:  ArmeChercheuse.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/MainTestArmeChercheuse.cpp $^ -o tests/MainTestArmeChercheuse
CompileMainTestArmeCroix:  ArmeCroix.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/MainTestArmeCroix.cpp $^ -o tests/MainTestArmeCroix
CompileMainTestArmeFatale:  ArmeFatale.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/MainTestArmeFatale.cpp $^ -o tests/MainTestArmeFatale
CompileMainTestArme: Arme.o
	g++ $(FLAGSTEST) tests/MainTestArme.cpp $^ -o tests/MainTestArme
CompileMainTestBatailleNavale: PersonnageJouable.o Combat.o BatailleNavale.o Grille.o PersonnageBN.o TailleGrille.o Coordonnees.o Case.o Bateau.o Personnage.o Carte.o CelluleAccessible.o Cellule.o ArmeClassique.o Arme.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIA.o JoueurIACheate.o PersonnageBNIACheate.o ArmeCroix.o PersonnageBNIAAvance.o JoueurIAAvance.o CelluleObstacle.o CelluleChangementCarte.o Controleur.o ActionChangementCarte.o
	g++ $(FLAGSTEST) tests/MainTestBatailleNavale.cpp $^ -o tests/MainTestBatailleNavale
CompileMainTestBateau: Bateau.o
	g++ $(FLAGSTEST) tests/MainTestBateau.cpp $^ -o tests/MainTestBateau
CompileMainTestCarte: Carte.o
	g++ $(FLAGSTEST) tests/MainTestCarte.cpp $^ -o tests/MainTestCarte
CompileMainTestCase: Case.o Bateau.o
	g++ $(FLAGSTEST) tests/MainTestCase.cpp $^ -o tests/MainTestCase
CompileMainTestCelluleChangementCarte: CelluleChangementCarte.o Cellule.o CelluleAccessible.o Carte.o Coordonnees.o
	g++ $(FLAGS) tests/MainTestCelluleChangementCarte.cpp $^ -o tests/MainTestCelluleChangementCarte
CompileMainTestCelluleAccessible: CelluleAccessible.o Cellule.o PersonnageJouable.o Personnage.o Coordonnees.o Carte.o PersonnageNonJouable.o
	g++ $(FLAGSTEST) tests/MainTestCelluleAccessible.cpp $^ -o tests/MainTestCelluleAccessible TailleGrille.o CelluleObstacle.o
CompileMainTestCelluleCombat: CelluleCombat.o Personnage.o ActionCombat.o CelluleAccessible.o Coordonnees.o Carte.o Action.o Cellule.o TailleGrille.o 
	g++ $(FLAGSTEST) tests/MainTestCelluleCombat.cpp $^ -o tests/MainTestCelluleCombat
CompileMainTestCellule: Cellule.o
	g++ $(FLAGSTEST) tests/MainTestCellule.cpp $^ -o tests/MainTestCellule
CompileMainTestCelluleObstacle: CelluleObstacle.o
	g++ $(FLAGSTEST) tests/MainTestCelluleObstacle.cpp $^ -o tests/MainTestCelluleObstacle
CompileMainTestCombat: Combat.o
	g++ $(FLAGSTEST) tests/MainTestCombat.cpp $^ -o tests/MainTestCombat
CompileMainTestControleur: Controleur.o
	g++ $(FLAGSTEST) tests/MainTestControleur.cpp $^ -o tests/MainTestControleur
CompileMainTestCoordonnees: Coordonnees.o
	g++ $(FLAGSTEST) tests/MainTestCoordonnees.cpp $^ -o tests/MainTestCoordonnees
CompileMainTestGrille: Grille.o TailleGrille.o Coordonnees.o Case.o Bateau.o
	g++ $(FLAGSTEST) tests/MainTestGrille.cpp $^ -o tests/MainTestGrille
CompileMainTestIHMBN: IHMBN.o Coordonnees.o Grille.o BatailleNavale.o PersonnageBN.o IHMBN.o Bateau.o TailleGrille.o Case.o ArmeClassique.o Arme.o PersonnageNonJouable.o JoueurHumain.o PersonnageBN.o PersonnageBNHumain.o PersonnageBNIA.o Personnage.o PersonnageJouable.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGSTEST) tests/MainTestIHMBN.cpp $^ -o tests/MainTestIHMBN
CompileMainTestIHMJeu: IHMJeu.o
	g++ $(FLAGSTEST) tests/MainTestIHMJeu.cpp $^ -o tests/MainTestIHMJeu
CompileMainTestJeu: Jeu.o
	g++ $(FLAGSTEST) tests/MainTestJeu.cpp $^ -o tests/MainTestJeu
CompileMainTestJoueurHumain: JoueurHumain.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNHumain.o JoueurHumain.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGSTEST) tests/MainTestJoueurHumain.cpp $^ -o tests/MainTestJoueurHumain
CompileMainTestJoueurIA: JoueurIA.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o 
	g++ $(FLAGSTEST) tests/MainTestJoueurIA.cpp $^ -o tests/MainTestJoueurIA
CompileMainTestMonde: Monde.o
	g++ $(FLAGSTEST) tests/MainTestMonde.cpp $^ -o tests/MainTestMonde
CompileMainTestPersonnageBN: PersonnageBN.o TailleGrille.o ArmeClassique.o Bateau.o Arme.o Coordonnees.o Grille.o Case.o
	g++ $(FLAGSTEST) tests/MainTestPersonnageBN.cpp $^ -o tests/MainTestPersonnageBN
CompileMainTestPersonnageBNHumain: PersonnageBNHumain.o
	g++ $(FLAGSTEST) tests/MainTestPersonnageBNHumain.cpp $^ -o tests/MainTestPersonnageBNHumain
CompileMainTestPersonnageBNIA: PersonnageBNIA.o
	g++ $(FLAGSTEST) tests/MainTestPersonnageBNIA.cpp $^ -o tests/MainTestPersonnageBNIA
CompileMainTestPersonnage: Personnage.o
	g++ $(FLAGSTEST) tests/MainTestPersonnage.cpp $^ -o tests/MainTestPersonnage
CompileMainTestPersonnageJouable: PersonnageJouable.o Personnage.o Coordonnees.o Carte.o TailleGrille.o CelluleAccessible.o Cellule.o
	g++ $(FLAGSTEST) tests/MainTestPersonnageJouable.cpp $^ -o tests/MainTestPersonnageJouable
CompileMainTestPersonnageNonJouable: PersonnageNonJouable.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o 
	g++ $(FLAGSTEST) tests/MainTestPersonnageNonJouable.cpp $^ -o tests/MainTestPersonnageNonJouable
CompileMainTestTailleGrille: TailleGrille.o
	g++ $(FLAGSTEST) tests/MainTestTailleGrille.cpp $^ -o tests/MainTestTailleGrille
CompileMainTestControleurBN: ControleurBN.o  BatailleNavale.o IHMBN.o Grille.o Coordonnees.o TailleGrille.o PersonnageBN.o Bateau.o JoueurIA.o JoueurIACheate.o Case.o PersonnageBNIA.o PersonnageNonJouable.o ArmeClassique.o PersonnageBNIACheate.o  Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o ArmeCroix.o JoueurHumain.o  PersonnageJouable.o PersonnageBNHumain.o ArmeChercheuse.o
	g++ $(FLAGSTEST) tests/MainTestControleurBN.cpp $^ -o tests/MainTestControleurBN

clean:
	rm -rf *.o *~ tests/*~ main; find ./tests/ -type f ! -name "*.*" -exec rm {} \;
