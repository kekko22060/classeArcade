#include "Navicella.h"
Navicella::Navicella() {
	this->x;
	this->y;
	this->carattere;
}
Navicella::Navicella(int startX, int startY)  {
	this->x = startX;
	this->y= startY ;
	this->carattere = 'K';
}

void Navicella::muovi(char input, int maxX, int maxY) {
	if (input == 'w' && y > 0)
		this->y--;
	if (input == 's' && y < maxY - 1)
		this->y++;
	if (input == 'a' && x > 0)
		this->x--;
	if (input == 'd' && x < maxX - 1)
		this->x++;
}

int Navicella::getX(){ 
	return x; 
}
int Navicella::getY(){ 
	return y; 
}
char Navicella::getCarattere() {
	return carattere; 
}