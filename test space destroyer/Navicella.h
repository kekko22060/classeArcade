#pragma once

#define NAVICELLA_H

#include <string>

class Navicella {
private:
	int x;
	int y;
	char carattere;

public:
	Navicella();
	Navicella(int startX, int startY);
	void muovi(char input, int maxX, int maxY);
	int getX();
	int getY();
	char getCarattere();
};
