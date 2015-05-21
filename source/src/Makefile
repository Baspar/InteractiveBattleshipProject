FLAGS=-std=c++11 -I .

all: MainTestBateau MainTestCase MainTestGrill

%.o: %.cpp
	g++ -c $(FLAGS) $<

CompileMainTestActionChangementCarte: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o
	g++ $(FLAGS) tests/MainTestActionChangementCarte.cpp $^ -o tests/MainTestActionChangementCarte
MainTestActionChangementCarte: CompileMainTestActionChangementCarte
	tests/MainTestActionChangementCarte

CompileMainTestActionCombat: ActionCombat.o
	g++ $(FLAGS) tests/MainTestActionCombat.cpp $^ -o tests/MainTestActionCombat
MainTestActionCombat: CompileMainTestActionCombat
	tests/MainTestActionCombat

CompileMainTestAction: Action.o
	g++ $(FLAGS) tests/MainTestAction.cpp $^ -o tests/MainTestAction
MainTestAction: CompileMainTestAction
	tests/MainTestAction

CompileMainTestArmeClassique:  ArmeClassique.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) tests/MainTestArmeClassique.cpp $^ -o tests/MainTestArmeClassique
MainTestArmeClassique: CompileMainTestArmeClassique
	tests/MainTestArmeClassique

CompileMainTestArmeChercheuse:  ArmeChercheuse.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) tests/MainTestArmeChercheuse.cpp $^ -o tests/MainTestArmeChercheuse
MainTestArmeChercheuse: CompileMainTestArmeChercheuse
	tests/MainTestArmeChercheuse

CompileMainTestArmeCroix:  ArmeCroix.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) tests/MainTestArmeCroix.cpp $^ -o tests/MainTestArmeCroix
MainTestArmeCroix: CompileMainTestArmeCroix
	tests/MainTestArmeCroix


CompileMainTestArmeFatale:  ArmeFatale.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) tests/MainTestArmeFatale.cpp $^ -o tests/MainTestArmeFatale
MainTestArmeFatale: CompileMainTestArmeFatale
	tests/MainTestArmeFatale

CompileMainTestArme: Arme.o
	g++ $(FLAGS) tests/MainTestArme.cpp $^ -o tests/MainTestArme
MainTestArme: CompileMainTestArme
	tests/MainTestArme

CompileMainTestActionVide: ActionVide.o
	g++ $(FLAGS) tests/MainTestActionVide.cpp $^ -o tests/MainTestActionVide
MainTestActionVide: CompileMainTestActionVide
	tests/MainTestActionVide

CompileMainTestBatailleNavale: PersonnageJouable.o Combat.o BatailleNavale.o Grille.o PersonnageBN.o TailleGrille.o Coordonnees.o Case.o Bateau.o Personnage.o Carte.o CelluleAccessible.o Cellule.o ArmeClassique.o Arme.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIA.o JoueurIACheate.o PersonnageBNIACheate.o ArmeCroix.o PersonnageBNIAAvance.o JoueurIAAvance.o CelluleObstacle.o
	g++ $(FLAGS) tests/MainTestBatailleNavale.cpp $^ -o tests/MainTestBatailleNavale
MainTestBatailleNavale: CompileMainTestBatailleNavale
	tests/MainTestBatailleNavale

CompileMainTestBateau: Bateau.o
	g++ $(FLAGS) tests/MainTestBateau.cpp $^ -o tests/MainTestBateau
MainTestBateau: CompileMainTestBateau
	tests/MainTestBateau

CompileMainTestCarte: Carte.o
	g++ $(FLAGS) tests/MainTestCarte.cpp $^ -o tests/MainTestCarte
MainTestCarte: CompileMainTestCarte
	tests/MainTestCarte

CompileMainTestCase: Case.o Bateau.o
	g++ $(FLAGS) tests/MainTestCase.cpp $^ -o tests/MainTestCase
MainTestCase: CompileMainTestCase
	tests/MainTestCase

CompileMainTestCelluleAccessible: CelluleAccessible.o
	g++ $(FLAGS) tests/MainTestCelluleAccessible.cpp $^ -o tests/MainTestCelluleAccessible
MainTestCelluleAccessible: CompileMainTestCelluleAccessible
	tests/MainTestCelluleAccessible

CompileMainTestCelluleCombat: CelluleCombat.o Personnage.o ActionCombat.o CelluleAccessible.o Coordonnees.o Carte.o Action.o Cellule.o TailleGrille.o
	g++ $(FLAGS) tests/MainTestCelluleCombat.cpp $^ -o tests/MainTestCelluleCombat
MainTestCelluleCombat: CompileMainTestCelluleCombat
	tests/MainTestCelluleCombat

CompileMainTestCellule: Cellule.o
	g++ $(FLAGS) tests/MainTestCellule.cpp $^ -o tests/MainTestCellule
MainTestCellule: CompileMainTestCellule
	tests/MainTestCellule

CompileMainTestCelluleObstacle: CelluleObstacle.o
	g++ $(FLAGS) tests/MainTestCelluleObstacle.cpp $^ -o tests/MainTestCelluleObstacle
MainTestCelluleObstacle: CompileMainTestCelluleObstacle
	tests/MainTestCelluleObstacle

CompileMainTestCombat: Combat.o
	g++ $(FLAGS) tests/MainTestCombat.cpp $^ -o tests/MainTestCombat
MainTestCombat: CompileMainTestCombat
	tests/MainTestCombat

CompileMainTestControleur: Controleur.o
	g++ $(FLAGS) tests/MainTestControleur.cpp $^ -o tests/MainTestControleur
MainTestControleur: CompileMainTestControleur
	tests/MainTestControleur

CompileMainTestCoordonnees: Coordonnees.o
	g++ $(FLAGS) tests/MainTestCoordonnees.cpp $^ -o tests/MainTestCoordonnees
MainTestCoordonnees: CompileMainTestCoordonnees
	tests/MainTestCoordonnees

CompileMainTestGrille: Grille.o TailleGrille.o Coordonnees.o Case.o Bateau.o
	g++ $(FLAGS) tests/MainTestGrille.cpp $^ -o tests/MainTestGrille
MainTestGrille: CompileMainTestGrille
	tests/MainTestGrille

CompileMainTestIHMBN: IHMBN.o Coordonnees.o Grille.o BatailleNavale.o PersonnageBN.o IHMBN.o Bateau.o TailleGrille.o Case.o ArmeClassique.o Arme.o PersonnageNonJouable.o JoueurHumain.o PersonnageBN.o PersonnageBNHumain.o PersonnageBNIA.o Personnage.o PersonnageJouable.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGS) tests/MainTestIHMBN.cpp $^ -o tests/MainTestIHMBN
MainTestIHMBN: CompileMainTestIHMBN
	tests/MainTestIHMBN

CompileMainTestIHMJeu: IHMJeu.o
	g++ $(FLAGS) tests/MainTestIHMJeu.cpp $^ -o tests/MainTestIHMJeu
MainTestIHMJeu: CompileMainTestIHMJeu
	tests/MainTestIHMJeu

CompileMainTestJeu: Jeu.o
	g++ $(FLAGS) tests/MainTestJeu.cpp $^ -o tests/MainTestJeu
MainTestJeu: CompileMainTestJeu
	tests/MainTestJeu

CompileMainTestJoueurHumain: JoueurHumain.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNHumain.o JoueurHumain.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGS) tests/MainTestJoueurHumain.cpp $^ -o tests/MainTestJoueurHumain
MainTestJoueurHumain: CompileMainTestJoueurHumain
	tests/MainTestJoueurHumain

CompileMainTestJoueurIA: JoueurIA.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o 
	g++ $(FLAGS) tests/MainTestJoueurIA.cpp $^ -o tests/MainTestJoueurIA
MainTestJoueurIA: CompileMainTestJoueurIA
	tests/MainTestJoueurIA

CompileMainTestMonde: Monde.o
	g++ $(FLAGS) tests/MainTestMonde.cpp $^ -o tests/MainTestMonde
MainTestMonde: CompileMainTestMonde
	tests/MainTestMonde

CompileMainTestPersonnageBN: PersonnageBN.o TailleGrille.o ArmeClassique.o Bateau.o Arme.o Coordonnees.o Grille.o Case.o
	g++ $(FLAGS) tests/MainTestPersonnageBN.cpp $^ -o tests/MainTestPersonnageBN
MainTestPersonnageBN: CompileMainTestPersonnageBN
	tests/MainTestPersonnageBN

CompileMainTestPersonnageBNHumain: PersonnageBNHumain.o
	g++ $(FLAGS) tests/MainTestPersonnageBNHumain.cpp $^ -o tests/MainTestPersonnageBNHumain
MainTestPersonnageBNHumain: CompileMainTestPersonnageBNHumain
	tests/MainTestPersonnageBNHumain

CompileMainTestPersonnageBNIA: PersonnageBNIA.o
	g++ $(FLAGS) tests/MainTestPersonnageBNIA.cpp $^ -o tests/MainTestPersonnageBNIA
MainTestPersonnageBNIA: CompileMainTestPersonnageBNIA
	tests/MainTestPersonnageBNIA

CompileMainTestPersonnage: Personnage.o
	g++ $(FLAGS) tests/MainTestPersonnage.cpp $^ -o tests/MainTestPersonnage
MainTestPersonnage: CompileMainTestPersonnage
	tests/MainTestPersonnage

CompileMainTestPersonnageJouable: PersonnageJouable.o Personnage.o Coordonnees.o Carte.o TailleGrille.o CelluleAccessible.o Cellule.o
	g++ $(FLAGS) tests/MainTestPersonnageJouable.cpp $^ -o tests/MainTestPersonnageJouable
MainTestPersonnageJouable: CompileMainTestPersonnageJouable
	tests/MainTestPersonnageJouable

CompileMainTestPersonnageNonJouable: PersonnageNonJouable.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o 
	g++ $(FLAGS) tests/MainTestPersonnageNonJouable.cpp $^ -o tests/MainTestPersonnageNonJouable
MainTestPersonnageNonJouable: CompileMainTestPersonnageNonJouable
	tests/MainTestPersonnageNonJouable

CompileMainTestTailleGrille: TailleGrille.o
	g++ $(FLAGS) tests/MainTestTailleGrille.cpp $^ -o tests/MainTestTailleGrille
MainTestTailleGrille: CompileMainTestTailleGrille
	tests/MainTestTailleGrille

CompileMainTestControleurBN: ControleurBN.o  BatailleNavale.o IHMBN.o Grille.o Coordonnees.o TailleGrille.o PersonnageBN.o Bateau.o JoueurIA.o JoueurIACheate.o Case.o PersonnageBNIA.o PersonnageNonJouable.o ArmeClassique.o PersonnageBNIACheate.o  Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o ArmeCroix.o JoueurHumain.o  PersonnageJouable.o PersonnageBNHumain.o ArmeChercheuse.o
	g++ $(FLAGS) tests/MainTestControleurBN.cpp $^ -o tests/MainTestControleurBN
MainTestControleurBN: CompileMainTestControleurBN
	tests/MainTestControleurBN

clean:
	rm -rf *.o *~ tests/*~; find ./tests/ -type f ! -name "*.*" -exec rm {} \;

