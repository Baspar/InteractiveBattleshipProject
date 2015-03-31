#all: graphe mvgraph tex mvdoc pseudoclean
all: graphes mvgraph tex mvdoc pseudoclean

tex: texRapport

graphes:
	cd src/Diagrammes/; java -jar plantuml.jar *.uml; cd ../..

texRapport:
	cd src; pdflatex Rapport.tex;pdflatex Rapport.tex; cd ..

mvgraph:
	mv src/Diagrammes/*.png graph/

mvdoc:
	mv src/Rapport.pdf doc/Projet11_AnalyseDesBesoins_BESNARD_CAVAROC_CHAVANE_LAINE_LHUISSIER_NGUYEN_POINTIN.pdf

pseudoclean:
	rm -rf src/*.log src/*.aux src/*.toc src/*.out

clean: pseudoclean
	rm -rf graph/*.png doc/*.pdf
