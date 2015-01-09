#include "Enregistrement.h"
#include <vector>

class Bibliotheque
{
	std::vector<Enregistrement*> tabEnr;

public:
	~Bibliotheque();
	void affiche();
	void ajouteEnregistrement(Enregistrement* enr);
};