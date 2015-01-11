#ifndef DEF_ENREGISTREMENT
#define DEF_ENREGISTREMENT

#include <iostream> // cin, cout
#include <cstdlib> // srand, abs
#include <sstream> // stringstream, to convert int to std::string
// 'tention, <librairies>, "fichier.h"
// penser à std::string

class Enregistrement
{
//private:
	int annee;
	std::string auteur;
	std::string titre;

public:
	Enregistrement();
	~Enregistrement();
	Enregistrement(std::string author, std::string title, int date);
	
	int getAnnee();
	std::string getAuteur();
	std::string getTitre();

	// fonction à redéfinir lors de l'héritage (fonction virtuelle pure)
	virtual std::string info() = 0;
	virtual Enregistrement* duplicate() = 0;
};

#endif