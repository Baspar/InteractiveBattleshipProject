FLAGS=-std=c++11
FLAGSTEST=-std=c++11 -I .

all: Main

%.o: %.cpp
	g++ -c $(FLAGS) $<

CompileMain: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o Controleur.o CelluleObstacle.o Jeu.o Grille.o BatailleNavale.o IHMBN.o Case.o Bateau.o PersonnageBN.o IHMJeu.o Monde.o PersonnageBN.o ActionCombat.o ArmeClassique.o Arme.o ControleurBN.o JoueurHumain.o  PersonnageBNHumain.o PersonnageJouable.o CelluleChangementCarte.o ActionVide.o JoueurIA.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIAAvance.o  JoueurIACheate.o PersonnageBNIACheate.o PersonnageBNIAAvance.o CelluleCombat.o Inventaire.o BadgeFinal.o Objet.o
	g++ $(FLAGS) main.cpp $^ -o main
Main: CompileMain
	./main

TestActionChangementCarte: CompileTestActionChangementCarte
	tests/TestActionChangementCarte

TestActionVide: CompileTestActionVide
	tests/TestActionVide

BestEver: CompileBestEver
	tests/bestEver

TestActionCombat: CompileTestActionCombat
	tests/TestActionCombat

TestAction: CompileTestAction
	tests/TestAction

TestArmeClassique: CompileTestArmeClassique
	tests/TestArmeClassique

TestArmeChercheuse: CompileTestArmeChercheuse
	tests/TestArmeChercheuse

TestArmeCroix: CompileTestArmeCroix
	tests/TestArmeCroix

TestArmeFatale: CompileTestArmeFatale
	tests/TestArmeFatale

TestArme: CompileTestArme
	tests/TestArme

TestBatailleNavale: CompileTestBatailleNavale
	tests/TestBatailleNavale

TestBateau: CompileTestBateau
	tests/TestBateau

TestCarte: CompileTestCarte
	tests/TestCarte

TestCase: CompileTestCase
	tests/TestCase

TestCelluleChangementCarte: CompileTestCelluleChangementCarte
	tests/TestCelluleChangementCarte

TestCelluleAccessible: CompileTestCelluleAccessible
	tests/TestCelluleAccessible

TestCelluleCombat: CompileTestCelluleCombat
	tests/TestCelluleCombat

TestCellule: CompileTestCellule
	tests/TestCellule

TestCelluleObstacle: CompileTestCelluleObstacle
	tests/TestCelluleObstacle

TestCombat: CompileTestCombat
	tests/TestCombat

TestControleur: CompileTestControleur
	tests/TestControleur

TestCoordonnees: CompileTestCoordonnees
	tests/TestCoordonnees

TestGrille: CompileTestGrille
	tests/TestGrille

TestIHMBN: CompileTestIHMBN
	tests/TestIHMBN

TestIHMJeu: CompileTestIHMJeu
	tests/TestIHMJeu

TestJeu: CompileTestJeu
	tests/TestJeu

TestJoueurHumain: CompileTestJoueurHumain
	tests/TestJoueurHumain

TestJoueurIA: CompileTestJoueurIA
	tests/TestJoueurIA

TestMonde: CompileTestMonde
	tests/TestMonde

TestPersonnageBN: CompileTestPersonnageBN
	tests/TestPersonnageBN

TestPersonnageBNHumain: CompileTestPersonnageBNHumain
	tests/TestPersonnageBNHumain

TestPersonnageBNIA: CompileTestPersonnageBNIA
	tests/TestPersonnageBNIA

TestPersonnage: CompileTestPersonnage
	tests/TestPersonnage

TestPersonnageJouable: CompileTestPersonnageJouable
	tests/TestPersonnageJouable

TestPersonnageNonJouable: CompileTestPersonnageNonJouable
	tests/TestPersonnageNonJouable

TestTailleGrille: CompileTestTailleGrille
	tests/TestTailleGrille

TestControleurBN: CompileTestControleurBN
	tests/TestControleurBN


CompileTestActionChangementCarte: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o CelluleObstacle.o PersonnageJouable.o
	g++ $(FLAGSTEST) tests/TestActionChangementCarte.cpp $^ -o tests/TestActionChangementCarte

CompileTestActionVide: ActionVide.o Action.o 
	g++ $(FLAGSTEST) tests/TestActionVide.cpp $^ -o tests/TestVide

CompileBestEver: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o Controleur.o CelluleObstacle.o Jeu.o Grille.o BatailleNavale.o IHMBN.o Case.o Bateau.o PersonnageBN.o IHMJeu.o Monde.o PersonnageBN.o ActionCombat.o ArmeClassique.o Arme.o ControleurBN.o JoueurHumain.o  PersonnageBNHumain.o PersonnageJouable.o CelluleChangementCarte.o ActionVide.o JoueurIA.o PersonnageNonJouable.o PersonnageBNIA.o
	g++ $(FLAGSTEST) tests/bestEver.cpp $^ -o tests/bestEver

CompileTestActionCombat: ActionCombat.o PersonnageNonJouable.o Action.o Personnage.o Coordonnees.o Carte.o Cellule.o CelluleAccessible.o TailleGrille.o CelluleObstacle.o
	g++ $(FLAGSTEST) tests/TestActionCombat.cpp $^ -o tests/TestActionCombat

CompileTestAction: Action.o
	g++ $(FLAGSTEST) tests/TestAction.cpp $^ -o tests/TestAction

CompileTestArmeClassique:  ArmeClassique.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/TestArmeClassique.cpp $^ -o tests/TestArmeClassique

CompileTestArmeChercheuse:  ArmeChercheuse.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/TestArmeChercheuse.cpp $^ -o tests/TestArmeChercheuse

CompileTestArmeCroix:  ArmeCroix.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/TestArmeCroix.cpp $^ -o tests/TestArmeCroix

CompileTestArmeFatale:  ArmeFatale.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGSTEST) tests/TestArmeFatale.cpp $^ -o tests/TestArmeFatale

CompileTestArme: Arme.o
	g++ $(FLAGSTEST) tests/TestArme.cpp $^ -o tests/TestArme

CompileTestBatailleNavale: PersonnageJouable.o Combat.o BatailleNavale.o Grille.o PersonnageBN.o TailleGrille.o Coordonnees.o Case.o Bateau.o Personnage.o Carte.o CelluleAccessible.o Cellule.o ArmeClassique.o Arme.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIA.o JoueurIACheate.o PersonnageBNIACheate.o ArmeCroix.o PersonnageBNIAAvance.o JoueurIAAvance.o CelluleObstacle.o CelluleChangementCarte.o Controleur.o ActionChangementCarte.o
	g++ $(FLAGSTEST) tests/TestBatailleNavale.cpp $^ -o tests/TestBatailleNavale

CompileTestBateau: Bateau.o
	g++ $(FLAGSTEST) tests/TestBateau.cpp $^ -o tests/TestBateau

CompileTestCarte: Carte.o
	g++ $(FLAGSTEST) tests/TestCarte.cpp $^ -o tests/TestCarte

CompileTestCase: Case.o Bateau.o
	g++ $(FLAGSTEST) tests/TestCase.cpp $^ -o tests/TestCase

CompileTestCelluleChangementCarte: CelluleChangementCarte.o Cellule.o CelluleAccessible.o Carte.o Coordonnees.o TailleGrille.o CelluleObstacle.o Personnage.o ActionChangementCarte.o Inventaire.o Action.o
	g++ $(FLAGSTEST) tests/TestCelluleChangementCarte.cpp $^ -o tests/TestCelluleChangementCarte

CompileTestCelluleAccessible: CelluleAccessible.o Cellule.o PersonnageJouable.o Personnage.o Coordonnees.o Carte.o PersonnageNonJouable.o Inventaire.o TailleGrille.o CelluleObstacle.o 
	g++ $(FLAGSTEST) tests/TestCelluleAccessible.cpp $^ -o tests/TestCelluleAccessible 

CompileTestCelluleCombat: CelluleCombat.o Personnage.o ActionCombat.o CelluleAccessible.o Coordonnees.o Carte.o Action.o Cellule.o TailleGrille.o CelluleObstacle.o Inventaire.o
	g++ $(FLAGSTEST) tests/TestCelluleCombat.cpp $^ -o tests/TestCelluleCombat

CompileTestCellule: Cellule.o
	g++ $(FLAGSTEST) tests/TestCellule.cpp $^ -o tests/TestCellule

CompileTestCelluleObstacle: CelluleObstacle.o Cellule.o
	g++ $(FLAGSTEST) tests/TestCelluleObstacle.cpp $^ -o tests/TestCelluleObstacle

CompileTestCombat: Combat.o
	g++ $(FLAGSTEST) tests/TestCombat.cpp $^ -o tests/TestCombat

CompileTestControleur: Controleur.o
	g++ $(FLAGSTEST) tests/TestControleur.cpp $^ -o tests/TestControleur

CompileTestCoordonnees: Coordonnees.o
	g++ $(FLAGSTEST) tests/TestCoordonnees.cpp $^ -o tests/TestCoordonnees

CompileTestGrille: Grille.o TailleGrille.o Coordonnees.o Case.o Bateau.o
	g++ $(FLAGSTEST) tests/TestGrille.cpp $^ -o tests/TestGrille

CompileTestIHMBN: IHMBN.o Coordonnees.o Grille.o BatailleNavale.o PersonnageBN.o IHMBN.o Bateau.o TailleGrille.o Case.o ArmeClassique.o Arme.o PersonnageNonJouable.o JoueurHumain.o PersonnageBN.o PersonnageBNHumain.o PersonnageBNIA.o Personnage.o PersonnageJouable.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGSTEST) tests/TestIHMBN.cpp $^ -o tests/TestIHMBN

CompileTestIHMJeu: IHMJeu.o
	g++ $(FLAGSTEST) tests/TestIHMJeu.cpp $^ -o tests/TestIHMJeu

CompileTestJeu: Jeu.o
	g++ $(FLAGSTEST) tests/TestJeu.cpp $^ -o tests/TestJeu

CompileTestJoueurHumain: JoueurHumain.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNHumain.o JoueurHumain.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGSTEST) tests/TestJoueurHumain.cpp $^ -o tests/TestJoueurHumain

CompileTestJoueurIA: JoueurIA.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o 
	g++ $(FLAGSTEST) tests/TestJoueurIA.cpp $^ -o tests/TestJoueurIA

CompileTestMonde: Monde.o
	g++ $(FLAGSTEST) tests/TestMonde.cpp $^ -o tests/TestMonde

CompileTestPersonnageBN: PersonnageBN.o TailleGrille.o ArmeClassique.o Bateau.o Arme.o Coordonnees.o Grille.o Case.o
	g++ $(FLAGSTEST) tests/TestPersonnageBN.cpp $^ -o tests/TestPersonnageBN

CompileTestPersonnageBNHumain: PersonnageBNHumain.o
	g++ $(FLAGSTEST) tests/TestPersonnageBNHumain.cpp $^ -o tests/TestPersonnageBNHumain

CompileTestPersonnageBNIA: PersonnageBNIA.o
	g++ $(FLAGSTEST) tests/TestPersonnageBNIA.cpp $^ -o tests/TestPersonnageBNIA

CompileTestPersonnage: Personnage.o
	g++ $(FLAGSTEST) tests/TestPersonnage.cpp $^ -o tests/TestPersonnage

CompileTestPersonnageJouable: PersonnageJouable.o Personnage.o Coordonnees.o Carte.o TailleGrille.o CelluleAccessible.o Cellule.o
	g++ $(FLAGSTEST) tests/TestPersonnageJouable.cpp $^ -o tests/TestPersonnageJouable

CompileTestPersonnageNonJouable: PersonnageNonJouable.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o 
	g++ $(FLAGSTEST) tests/TestPersonnageNonJouable.cpp $^ -o tests/TestPersonnageNonJouable

CompileTestTailleGrille: TailleGrille.o
	g++ $(FLAGSTEST) tests/TestTailleGrille.cpp $^ -o tests/TestTailleGrille

CompileTestControleurBN: ControleurBN.o  BatailleNavale.o IHMBN.o Grille.o Coordonnees.o TailleGrille.o PersonnageBN.o Bateau.o JoueurIA.o JoueurIACheate.o Case.o PersonnageBNIA.o PersonnageNonJouable.o ArmeClassique.o PersonnageBNIACheate.o  Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o ArmeCroix.o JoueurHumain.o  PersonnageJouable.o PersonnageBNHumain.o ArmeChercheuse.o
	g++ $(FLAGSTEST) tests/TestControleurBN.cpp $^ -o tests/TestControleurBN


clean:
	rm -rf *.o *~ tests/*~ main; find ./tests/ -type f ! -name "*.*" -exec rm {} \;
