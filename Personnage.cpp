#include "Personnage.h"

Personnage::Personnage(std::string nom) : _nom(nom)
{
}

std::string Personnage::getNom() const
{
	return _nom;
}

std::ostream& operator<<(std::ostream& flux, Personnage const& p)
{
	flux << p.getNom();
	return flux;
}
