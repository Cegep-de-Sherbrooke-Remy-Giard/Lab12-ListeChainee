#pragma once

#include <string>
#include <iostream>

class Personnage
{
private:
	std::string _nom;

public:
	Personnage(std::string nom);
	std::string getNom() const;

	friend std::ostream& operator<<(std::ostream& flux, Personnage const& p);
};

