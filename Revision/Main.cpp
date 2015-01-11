#include "Numerique.h"
#include "Vinyle.h"
#include "Bibliotheque.h"

int main()
{
	/*
	-- PILE --
	Point pt (3,2);
	pt.display();

	-- TAS --
	Point* pt = new Point(3,2);
	pt->display();
	*/

	// allocation dans la PILE
	Vinyle v1 ("DakotaSuite","there is calm to be done", 2014, 33);
	std::cout << v1.info();

	// allocation dans le TAS
	Vinyle* v2 = new Vinyle ("Sparklehorse", "Good Morning Spider", 1998, 33);
	Numerique* n1 = new Numerique("Sparklehorse", "it's a wonderfull life", 2001, 24, 192, "aiff");
	std::cout << v2->info();
	std::cout << n1->info();

	// création de la bibliothèque
	Bibliotheque bib;
	bib.ajouteEnregistrement(v2);
	bib.ajouteEnregistrement(n1);
	bib.affiche();

	// duplication
	bib.extraireAuteur("Sparklehorse").affiche();
	bib.extraireNumerique(24).affiche();
	return 0;
}