#all: graphe mvgraph tex mvdoc pseudoclean
all: tex mvdoc pseudoclean

tex: texRapport

texRapport:
	cd src; pdflatex Rapport.tex;pdflatex Rapport.tex; cd ..

mvdoc:
	mv src/Rapport.pdf doc/Projet11_AnalyseDesBesoins_BESNARD_CAVAROC_CHAVANE_LAINE_LHUISSIER_NGUYEN_POINTIN.pdf

pseudoclean:
	rm -rf src/*.log src/*.aux src/*.toc src/*.out

clean: pseudoclean
	rm -rf graph/*.png doc/*.pdf
