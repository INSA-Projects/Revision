#ifndef DEF_NUMERIQUE
#define DEF_NUMERIQUE

#include "Enregistrement.h"

class Numerique : Enregistrement
{
	int bit;
	int frequence;
	std::string type;

public:
	int getBit();
	int getFrequence();
	std::string getType();
	std::string info();
	Numerique(std::string author, std::string title, int date, int bi, int freq, std::string typ);
};

#endif