#include "Enregistrement.h"
#include "Numerique.h"
#include "Vinyle.h"
#include <vector>

class Bibliotheque
{
	std::vector<Enregistrement*> tabEnr;

public:
	Bibliotheque();
	~Bibliotheque();
	void affiche();
	void ajouteEnregistrement(Enregistrement* enr);
	Bibliotheque extraireAuteur(std::string auteur);
	Bibliotheque extraireNumerique(int bitRate);
};