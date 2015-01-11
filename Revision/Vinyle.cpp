#include "Vinyle.h"

// constructeur par héritage 
// on appelle le constructeur de Enregistrement, et après on fait le business de Vinyle
Vinyle::Vinyle(std::string author, std::string title, int date, int form) : Enregistrement(author, title, date), format(form)
{
}

int Vinyle::getFormat()
{
	return this->format;
}

std::string Vinyle::info()
{
	int form = this->getFormat();
	std::string format;
	std::stringstream out; // convertisseur
	out << form;
	format = out.str();
	out.str(""); // vide le stream

	int year = this->getAnnee();
	std::string annee;
	out << year;
	annee = out.str();
	out.str("");

	return "\nVinyle ::: titre : " + this->getTitre() + " format : "+format+ " Auteur : " + this->getAuteur() + " Annee : " + annee;
}

// duplique le vinyle (constructeur par recopie)
Enregistrement* Vinyle::duplicate()
{
	Enregistrement* copy = new Vinyle(this->getAuteur(),this->getTitre(),this->getAnnee(),this->getFormat());
	return copy;
}
