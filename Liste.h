#pragma once

#include "Noeud.h"
#include "Personnage.h"

class Liste
{
private:
	Noeud* _tete;
	Noeud* _queue;

public:
	Liste();
	~Liste();

	void afficher() const;

	int size() const;
	void ajouter(Personnage& value);
	Personnage& pop();
	Personnage& tete();
	Personnage& queue();
};

