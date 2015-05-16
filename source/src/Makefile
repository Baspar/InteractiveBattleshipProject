CompileMainTestGrille: Grille.o TailleGrille.o Coordonnees.o Case.o Bateau.o
	g++ -std=c++11 MainTestGrille.cpp $^ -o MainTestGrille
CompileMainTestBateau: Bateau.o
	g++ -std=c++11 MainTestBateau.cpp $^ -o MainTestBateau

MainTestBateau: CompileMainTestBateau
	./MainTestBateau
MainTestGrille: CompileMainTestGrille
	./MainTestGrille

clean:
	rm -rf *.o ; echo $(ls);
