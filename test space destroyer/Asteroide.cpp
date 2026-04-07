#include "Asteroide.h"

Asteroide::Asteroide()
{
	this->x = 0;
	this->y = 0;
	this->velocita = 0;
}

Asteroide::Asteroide(int altezzaSchermo)
{
	this->x = 0;
	this->y = rand() % altezzaSchermo;
	this->velocita += 1;
}

void Asteroide::spostaAsteroide()
{
	this->x += velocita;
}

string Asteroide::toString()
{
	string s = "";
	s += to_string(x);
	return s;
}
