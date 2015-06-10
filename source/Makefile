bina: 
	cd src; make CompileMain && mv main ../bin; cd ../bin; ./main; cd ..

docu:
	cd doc; doxygen; cd ..

CLEANBIN:
	cd src; make clean; cd ..; rm -f bin/main

CLEANDOC:
	rm -rf doc/html/ doc/latex/

all : bina docu

clean : CLEANBIN CLEANDOC
