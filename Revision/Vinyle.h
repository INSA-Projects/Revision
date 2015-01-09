#ifndef DEF_VINYLE
#define DEF_VINYLE

#include "Enregistrement.h"

class Vinyle : Enregistrement
{
	int format;

public:
	int getFormat();
	std::string info();
	Vinyle(std::string author, std::string title, int date, int form);
};

#endif