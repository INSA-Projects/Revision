#ifndef DEF_VINYLE
#define DEF_VINYLE

#include "Enregistrement.h"

// Attention ! Par d�faut, l'h�ritage est private !
class Vinyle : public Enregistrement
{
	int format;

public:
	Vinyle(std::string author, std::string title, int date, int form);
	int getFormat();
	
	// d�claration des override
	std::string info();
	Enregistrement* duplicate();
};

#endif