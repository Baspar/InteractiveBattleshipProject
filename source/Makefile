DOC:
	cd doc; doxygen; cd ..

BIN : 
	cd src; make CompileMain && mv main ../bin; cd ..

CLEANBIN:
	cd src; make clean; cd ..; rm -f bin/main

CLEANDOC:
	rm -rf doc/html/ doc/latex/

clean : CLEANBIN CLEANDOC
