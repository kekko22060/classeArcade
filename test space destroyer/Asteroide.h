#pragma once
#include <cstdlib>
#include <string>
using namespace std;
class Asteroide
{
private:
	int x, y,velocita;
public:
	Asteroide();
	Asteroide(int altezzaSchermo);

	void spostaAsteroide();
	string toString();

};

