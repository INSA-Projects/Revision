#include "Enregistrement.h"
// penser au Enregistrement::

// constructeurs
Enregistrement::Enregistrement()
{
}

Enregistrement::Enregistrement(std::string author, std::string title, int date):annee(date), auteur(author), titre(title)
{
}

// destructeur
Enregistrement::~Enregistrement()
{
}

// accesseurs
int Enregistrement::getAnnee()
{
	return this->annee;
}
std::string Enregistrement::getAuteur()
{
	return this->auteur;
}
std::string Enregistrement::getTitre()
{
	return this->titre;
}

// to string
std::string Enregistrement::info()
{
	return "appel à info() de Enregistrement :| ";
}

Enregistrement* Enregistrement::duplicate()
{
	std::cout << "appel à duplicate de Enregistrement -_- ";
	return nullptr;
}