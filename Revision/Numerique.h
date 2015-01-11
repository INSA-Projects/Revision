#ifndef DEF_NUMERIQUE
#define DEF_NUMERIQUE

#include "Enregistrement.h"

// Attention ! Par défaut, l'héritage est private !
class Numerique : public Enregistrement
{
	int bit;
	int frequence;
	std::string type;

public:
	Numerique(std::string author, std::string title, int date, int bi, int freq, std::string typ);
	int getBit();
	int getFrequence();
	std::string getType();

	// déclaration des override
	std::string info();
	Enregistrement* duplicate();
};

#endif