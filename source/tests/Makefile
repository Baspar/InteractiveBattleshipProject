FLAGS=-std=c++11 -I ../src

%.o: ../src/%.cpp
	g++ -c $(FLAGS) $<

######################
#  Action execution  #
######################
TestActionChangementCarte: CompileTestActionChangementCarte
	./TestActionChangementCarte

TestActionVide: CompileTestActionVide
	./TestActionVide

TestActionCombat: CompileTestActionCombat
	./TestActionCombat

TestArmeClassique: CompileTestArmeClassique
	./TestArmeClassique

TestArmeChercheuse: CompileTestArmeChercheuse
	./TestArmeChercheuse

TestArmeCroix: CompileTestArmeCroix
	./TestArmeCroix

TestArmeFatale: CompileTestArmeFatale
	./TestArmeFatale

TestBadgeFinal: CompileTestBadgeFinal
	./TestBadgeFinal

TestBatailleNavale: CompileTestBatailleNavale
	./TestBatailleNavale

TestBateau: CompileTestBateau
	./TestBateau

TestCarte: CompileTestCarte
	./TestCarte

TestCase: CompileTestCase
	./TestCase

TestCelluleChangementCarte: CompileTestCelluleChangementCarte
	./TestCelluleChangementCarte

TestCelluleAccessible: CompileTestCelluleAccessible
	./TestCelluleAccessible

TestCelluleCombat: CompileTestCelluleCombat
	./TestCelluleCombat

TestCelluleObstacle: CompileTestCelluleObstacle
	./TestCelluleObstacle

TestControleur: CompileTestControleur
	./TestControleur

TestCoordonnees: CompileTestCoordonnees
	./TestCoordonnees

TestGrille: CompileTestGrille
	./TestGrille

TestIHMBN: CompileTestIHMBN
	./TestIHMBN

TestIHMJeu: CompileTestIHMJeu
	./TestIHMJeu

TestInventaire:CompileTestInventaire
	./TestInventaire

TestJeu: CompileTestJeu
	./TestJeu

TestJoueurHumain: CompileTestJoueurHumain
	./TestJoueurHumain

TestJoueurIA: CompileTestJoueurIA
	./TestJoueurIA

TestMonde: CompileTestMonde
	./TestMonde

TestPersonnageBNHumain: CompileTestPersonnageBNHumain
	./TestPersonnageBNHumain

TestPersonnageBNIA: CompileTestPersonnageBNIA
	./TestPersonnageBNIA

TestPersonnageBNIAAvance: CompileTestPersonnageBNIAAvance
	./TestPersonnageBNIAAvance

TestPersonnageBNIACheate: CompileTestPersonnageBNIACheate
	./TestPersonnageBNIACheate

TestPersonnage: CompileTestPersonnage
	./TestPersonnage

TestPersonnageJouable: CompileTestPersonnageJouable
	./TestPersonnageJouable

TestPersonnageNonJouable: CompileTestPersonnageNonJouable
	./TestPersonnageNonJouable

TestTailleGrille: CompileTestTailleGrille
	./TestTailleGrille

TestControleurBN: CompileTestControleurBN
	./TestControleurBN




########################
#  Action compilation  #
########################
CompileTestActionChangementCarte: ActionChangementCarte.o TailleGrille.o Coordonnees.o Action.o CelluleAccessible.o Carte.o Personnage.o Cellule.o CelluleObstacle.o PersonnageJouable.o Inventaire.o
	g++ $(FLAGS) TestActionChangementCarte.cpp $^ -o TestActionChangementCarte

CompileTestActionVide: ActionVide.o Action.o 
	g++ $(FLAGS) TestActionVide.cpp $^ -o TestActionVide

CompileTestActionCombat: ActionCombat.o PersonnageNonJouable.o Action.o Personnage.o Coordonnees.o Carte.o Cellule.o CelluleAccessible.o TailleGrille.o CelluleObstacle.o Inventaire.o
	g++ $(FLAGS) TestActionCombat.cpp $^ -o TestActionCombat

CompileTestArmeClassique:  ArmeClassique.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) TestArmeClassique.cpp $^ -o TestArmeClassique

CompileTestArmeChercheuse:  ArmeChercheuse.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) TestArmeChercheuse.cpp $^ -o TestArmeChercheuse

CompileTestArmeCroix:  ArmeCroix.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) TestArmeCroix.cpp $^ -o TestArmeCroix

CompileTestArmeFatale:  ArmeFatale.o Coordonnees.o Grille.o  Case.o TailleGrille.o Bateau.o Arme.o
	g++ $(FLAGS) TestArmeFatale.cpp $^ -o TestArmeFatale

CompileTestBadgeFinal: BadgeFinal.o Objet.o
	g++ $(FLAGS) TestBadgeFinal.cpp $^ -o TestBadgeFinal

CompileTestBatailleNavale: PersonnageJouable.o Combat.o BatailleNavale.o Grille.o PersonnageBN.o TailleGrille.o Coordonnees.o Case.o Bateau.o Personnage.o Carte.o CelluleAccessible.o Cellule.o ArmeClassique.o Arme.o PersonnageNonJouable.o PersonnageBNIA.o JoueurIA.o JoueurIACheate.o PersonnageBNIACheate.o ArmeCroix.o PersonnageBNIAAvance.o JoueurIAAvance.o CelluleObstacle.o CelluleChangementCarte.o Controleur.o ActionChangementCarte.o Inventaire.o IHMBN.o ControleurBN.o Jeu.o ActionCombat.o Action.o IHMJeu.o Monde.o ArmeChercheuse.o BadgeFinal.o ArmeFatale.o ActionVide.o JoueurHumain.o PersonnageBNHumain.o Objet.o
	g++ $(FLAGS) TestBatailleNavale.cpp $^ -o TestBatailleNavale

CompileTestBateau: Bateau.o
	g++ $(FLAGS) TestBateau.cpp $^ -o TestBateau

CompileTestCarte: Carte.o Coordonnees.o CelluleAccessible.o Cellule.o Personnage.o CelluleObstacle.o TailleGrille.o Inventaire.o
	g++ $(FLAGS) TestCarte.cpp $^ -o TestCarte

CompileTestCase: Case.o Bateau.o
	g++ $(FLAGS) TestCase.cpp $^ -o TestCase

CompileTestCelluleChangementCarte: CelluleChangementCarte.o Cellule.o CelluleAccessible.o Carte.o Coordonnees.o TailleGrille.o CelluleObstacle.o Personnage.o ActionChangementCarte.o Inventaire.o Action.o
	g++ $(FLAGS) TestCelluleChangementCarte.cpp $^ -o TestCelluleChangementCarte

CompileTestCelluleAccessible: CelluleAccessible.o Cellule.o PersonnageJouable.o Personnage.o Coordonnees.o Carte.o PersonnageNonJouable.o Inventaire.o TailleGrille.o CelluleObstacle.o 
	g++ $(FLAGS) TestCelluleAccessible.cpp $^ -o TestCelluleAccessible 

CompileTestCelluleCombat: CelluleCombat.o Personnage.o ActionCombat.o CelluleAccessible.o Coordonnees.o Carte.o Action.o Cellule.o TailleGrille.o CelluleObstacle.o Inventaire.o
	g++ $(FLAGS) TestCelluleCombat.cpp $^ -o TestCelluleCombat


CompileTestCelluleObstacle: CelluleObstacle.o Cellule.o
	g++ $(FLAGS) TestCelluleObstacle.cpp $^ -o TestCelluleObstacle


CompileTestControleur: Controleur.o
	g++ $(FLAGS) TestControleur.cpp $^ -o TestControleur

CompileTestCoordonnees: Coordonnees.o
	g++ $(FLAGS) TestCoordonnees.cpp $^ -o TestCoordonnees

CompileTestGrille: Grille.o TailleGrille.o Coordonnees.o Case.o Bateau.o
	g++ $(FLAGS) TestGrille.cpp $^ -o TestGrille

CompileTestIHMBN: IHMBN.o Coordonnees.o Grille.o BatailleNavale.o PersonnageBN.o IHMBN.o Bateau.o TailleGrille.o Case.o ArmeClassique.o Arme.o PersonnageNonJouable.o JoueurHumain.o PersonnageBN.o PersonnageBNHumain.o PersonnageBNIA.o Personnage.o PersonnageJouable.o Carte.o CelluleAccessible.o Cellule.o Inventaire.o CelluleObstacle.o JoueurIA.o
	g++ $(FLAGS) TestIHMBN.cpp $^ -o TestIHMBN

CompileTestIHMJeu: IHMJeu.o
	g++ $(FLAGS) TestIHMJeu.cpp $^ -o TestIHMJeu

CompileTestInventaire: Inventaire.o Objet.o BadgeFinal.o
	g++ $(FLAGS) TestInventaire.cpp $^ -o TestInventaire

CompileTestJeu: Jeu.o Cellule.o Carte.o Monde.o Personnage.o Inventaire.o BadgeFinal.o Coordonnees.o Objet.o ActionChangementCarte.o CelluleAccessible.o TailleGrille.o ArmeFatale.o ArmeCroix.o ArmeChercheuse.o ArmeClassique.o BatailleNavale.o Action.o PersonnageBN.o Grille.o Bateau.o Case.o ActionVide.o JoueurHumain.o JoueurIA.o PersonnageBNIA.o PersonnageNonJouable.o PersonnageJouable.o PersonnageBNHumain.o JoueurIAAvance.o CelluleObstacle.o Arme.o PersonnageBNIAAvance.o JoueurIACheate.o PersonnageBNIACheate.o ActionCombat.o
	g++ $(FLAGS) TestJeu.cpp $^ -o TestJeu

CompileTestJoueurHumain: JoueurHumain.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNHumain.o JoueurHumain.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o
	g++ $(FLAGS) TestJoueurHumain.cpp $^ -o TestJoueurHumain

CompileTestJoueurIA: JoueurIA.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o JoueurIA.o PersonnageNonJouable.o CelluleObstacle.o Inventaire.o JoueurDhumainBNia.o
	g++ $(FLAGS) TestJoueurIA.cpp $^ -o TestJoueurIA

CompileTestMonde: Monde.o Carte.o Cellule.o CelluleAccessible.o ActionChangementCarte.o ActionVide.o TailleGrille.o Coordonnees.o Personnage.o Action.o CelluleObstacle.o Inventaire.o
	g++ $(FLAGS) TestMonde.cpp $^ -o TestMonde


CompileTestPersonnageBNHumain: PersonnageBNHumain.o PersonnageBN.o Bateau.o TailleGrille.o Grille.o Coordonnees.o Case.o ArmeClassique.o Arme.o ArmeCroix.o ArmeFatale.o
	g++ $(FLAGS) TestPersonnageBNHumain.cpp $^ -o TestPersonnageBNHumain

CompileTestPersonnageBNIA: PersonnageBNIA.o Coordonnees.o Grille.o TailleGrille.o Grille.o Coordonnees.o PersonnageBN.o Bateau.o Case.o Arme.o ArmeCroix.o ArmeFatale.o ArmeClassique.o
	g++ $(FLAGS) TestPersonnageBNIA.cpp $^ -o TestPersonnageBNIA

CompileTestPersonnageBNIAAvance: PersonnageBNIAAvance.o Coordonnees.o Grille.o TailleGrille.o Grille.o Coordonnees.o PersonnageBN.o Bateau.o Case.o Arme.o ArmeCroix.o ArmeFatale.o ArmeClassique.o
	g++ $(FLAGS) TestPersonnageBNIAAvance.cpp $^ -o TestPersonnageBNIAAvance

CompileTestPersonnageBNIACheate: PersonnageBNIA.o Coordonnees.o Grille.o TailleGrille.o Grille.o Coordonnees.o PersonnageBN.o Bateau.o Case.o Arme.o ArmeCroix.o ArmeFatale.o ArmeClassique.o PersonnageBNIACheate.o Coordonnees.o Bateau.o
	g++ $(FLAGS) TestPersonnageBNIACheate.cpp $^ -o TestPersonnageBNIACheate

CompileTestPersonnage: Personnage.o Coordonnees.o Carte.o Inventaire.o BadgeFinal.o Cellule.o CelluleAccessible.o TailleGrille.o CelluleObstacle.o Objet.o
	g++ $(FLAGS) TestPersonnage.cpp $^ -o TestPersonnage

CompileTestPersonnageJouable: PersonnageJouable.o Personnage.o Coordonnees.o Carte.o TailleGrille.o CelluleAccessible.o Cellule.o CelluleObstacle.o Inventaire.o
	g++ $(FLAGS) TestPersonnageJouable.cpp $^ -o TestPersonnageJouable

CompileTestPersonnageNonJouable: PersonnageNonJouable.o Bateau.o TailleGrille.o PersonnageBN.o PersonnageJouable.o PersonnageBNIA.o ArmeClassique.o Grille.o Coordonnees.o Case.o Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o  CelluleObstacle.o Inventaire.o
	g++ $(FLAGS) TestPersonnageNonJouable.cpp $^ -o TestPersonnageNonJouable

CompileTestTailleGrille: TailleGrille.o
	g++ $(FLAGS) TestTailleGrille.cpp $^ -o TestTailleGrille

CompileTestControleurBN: ControleurBN.o  BatailleNavale.o IHMBN.o Grille.o Coordonnees.o TailleGrille.o PersonnageBN.o Bateau.o JoueurIA.o JoueurIACheate.o Case.o PersonnageBNIA.o PersonnageNonJouable.o ArmeClassique.o PersonnageBNIACheate.o  Personnage.o Arme.o Carte.o CelluleAccessible.o Cellule.o ArmeCroix.o JoueurHumain.o  PersonnageJouable.o PersonnageBNHumain.o ArmeChercheuse.o CelluleObstacle.o Inventaire.o
	g++ $(FLAGS) TestControleurBN.cpp $^ -o TestControleurBN





######################
#  Action nettoyage  #
######################
clean:
	rm -rf *.o *~ *~ main; find ./ -type f ! -name "*.*" ! -name "Makefile" -exec rm {} \;
