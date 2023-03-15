#include <iostream>
#include "Liste.h"
#include "Personnage.h"

using namespace std;

int main()
{
	Personnage a("alain"), b("bob"), c("christophe");

	Liste l;
	l.afficher();

	cout << "+" << a.getNom() << " ";
	l.ajouter(a);
	l.afficher();

	cout << "+" << c.getNom() << " ";
	l.ajouter(c);
	l.afficher();

	cout << "+" << b.getNom() << " ";
	l.ajouter(b);
	l.afficher();

	cout << "pop() ";
	l.pop();
	l.afficher();

	cout << "+" << b.getNom() << " ";
	l.ajouter(b);
	l.afficher();
}
