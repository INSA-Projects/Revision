#include "Enregistrement.h"
// penser au Enregistrement::

// constructeur
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
	// l'opérateur + ne prend que des std::string, pas des int
	int year = this->getAnnee();
	std::string annee;
	std::stringstream out;
	out << year;
	annee = out.str();
	out.str("");

	return "\nEnregistrement ::: Auteur :" + this->getAuteur() + " Titre : " + this->getTitre() + " Année : " + annee;
}
