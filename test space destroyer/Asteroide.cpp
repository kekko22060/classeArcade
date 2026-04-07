#include "Asteroide.h"

Asteroide::Asteroide(int larghezzaSchermo, int altezzaSchermo)
{
	this->larghezza = 5;
	this->altezza = 5;
}

void Asteroide::reset(int larghezzaSchermo, int altezzaSchermo)
{
	this->x = larghezzaSchermo;
	this->y = rand() % (altezzaSchermo - this->altezza);
	this->velocita = 1;
	this->attivo = true;
}

void Asteroide::aggiorna()
{
	if (this->attivo) {
		this->x -= velocita;
	}
}

bool Asteroide::fuoriSchermo()
{
	return this->x + larghezza < 0;
}

bool Asteroide::collisione(float px, float py)
{
	return (this->x < px  && this->x + this->larghezza > px && this->y < py && this->y + this->altezza > py);
}

void Asteroide::distruggi()
{
	this->attivo = false;
}

float Asteroide::getX()
{
	return this->x;
}

float Asteroide::getY()
{
	return this->y;
}

int Asteroide::getWidth()
{
	return this->larghezza;
}

int Asteroide::getHeight()
{
	return this->altezza;
}

bool Asteroide::isAttivo()
{
	return this->attivo;
}


string Asteroide::toString()
{
	string s = "";
	s += "X: " + to_string(x) + " Y: " + to_string(y);
	return s;
}
