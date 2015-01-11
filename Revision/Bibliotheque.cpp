#include "Bibliotheque.h"
// std::vector<T> myvector;
// std::vector<int> myvector (3,100);
// myVector.size();
// myVector[i] = 3;
// myVector.push_back(2);

Bibliotheque::Bibliotheque()
{
	std::vector<Enregistrement*> tabEnrInit;
	this->tabEnr = tabEnrInit;
}

Bibliotheque::~Bibliotheque()
{
	int i;
	for (i = 0; i < tabEnr.size(); i++)
	{
		delete tabEnr[i];
	}
}
void Bibliotheque::affiche()
{
	std::cout << "\n--- Bibliothèque ---";
	int i;
	for (i = 0; i < tabEnr.size(); i++)
	{
		std::cout << tabEnr[i]->info();
	}
}

void Bibliotheque::ajouteEnregistrement(Enregistrement* enr)
{
	// ajoute à la fin du vector
	tabEnr.push_back(enr);
}

Bibliotheque Bibliotheque::extraireAuteur(std::string auteur)
{
	Bibliotheque* newBib = new Bibliotheque();
	int i;
	for each (Enregistrement* enr in tabEnr)
	{
		if (enr->getAuteur() == auteur)
		{
			newBib->tabEnr.push_back(enr->duplicate());
		}
	}
	return *newBib;
}

Bibliotheque Bibliotheque::extraireNumerique(int bitRate)
{
	Bibliotheque* newBib = new Bibliotheque();
	int i;
	for each (Numerique* numerique in tabEnr)
	{
		if (numerique->getBit() == bitRate)
		{
			newBib->tabEnr.push_back(numerique->duplicate());
		}
	}
	return *newBib;
}