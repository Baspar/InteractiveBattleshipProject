FLAGS=-std=c++11 -I ./

%.o: %.cpp
	g++ -c $(FLAGS) $<

CompileMainTestGrille: Grille.o TailleGrille.o Coordonnees.o Case.o Bateau.o
	g++ $(FLAGS) tests/MainTestGrille.cpp $^ -o tests/MainTestGrille
MainTestGrille: CompileMainTestGrille
	tests/MainTestGrille

CompileMainTestBateau: Bateau.o
	g++ $(FLAGS) tests/MainTestBateau.cpp $^ -o tests/MainTestBateau
MainTestBateau: CompileMainTestBateau
	tests/MainTestBateau

clean:
	rm -rf *.o *~ ; find ./tests/ -type f ! -name "*.*" -exec rm {} \;
