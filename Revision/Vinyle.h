#ifndef DEF_VINYLE
#define DEF_VINYLE

#include "Enregistrement.h"

// Attention ! Par défaut, l'héritage est private !
class Vinyle : public Enregistrement
{
	int format;

public:
	Vinyle(std::string author, std::string title, int date, int form);
	int getFormat();
	
	// déclaration des override
	std::string info();
	Enregistrement* duplicate();
};

#endif