#include <iostream>
#include "Liste.h"
#include "Personnage.h"

using namespace std;

int main()
{
	Personnage a("alain"), b("bob"), c("christophe");

	Liste l;
	l.afficher();

	l.ajouter(a);
	l.ajouter(c);
	l.ajouter(b);

	l.afficher();

	cout << endl << l.pop() << endl;
	l.afficher();

	l.ajouter(b);
	l.afficher();
}
