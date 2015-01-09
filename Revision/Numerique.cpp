#include "Numerique.h"

// constructeur
Numerique::Numerique(std::string author, std::string title, int date, int bi, int freq, std::string typ) : Enregistrement(author, title, date), bit(bi), type(typ), frequence(freq)
{

}


// accesseurs
int Numerique::getBit()
{
	return this->bit;
}
int Numerique::getFrequence()
{
	return this->frequence;
}
std::string Numerique::getType()
{
	return this->type;
}

// to string
std::string Numerique::info()
{
	int bi = this->getBit();
	std::string bit;
	std::stringstream out;
	out << bi;
	bit = out.str();
	out.str("");

	int year = this->getAnnee();
	std::string annee;
	out << year;
	annee = out.str();
	out.str("");

	int freq = this->getFrequence();
	std::string frequence;
	out << freq;
	frequence = out.str();
	out.str("");

	return "\nNumerique ::: Titre : " + getTitre() + " Auteur : " + getAuteur() + " Annee : " + annee + " Frequence : " + frequence + " Bit : " + bit;
}

