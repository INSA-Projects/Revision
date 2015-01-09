#include "Bibliotheque.h"
// std::vector<T> myvector;
// std::vector<int> myvector (3,100);
// myVector.size();
// myVector[i] = 3;
// myVector.push_back(2);


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
	int i;
	for (i = 0; i < tabEnr.size(); i++)
	{
		tabEnr[i]->info();
	}
}

void Bibliotheque::ajouteEnregistrement(Enregistrement* enr)
{
	// ajoute à la fin du vector
	tabEnr.push_back(enr);
}