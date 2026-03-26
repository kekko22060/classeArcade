#include <iostream>
#include <conio.h>
#include "Navicella.h" 

void main() {
	Navicella giocatore(5, 5);
	char c;
	int MaxX = 10;
	int Maxy = 10;
	while (true){
		c = _getch();
		giocatore.muovi(c, MaxX, Maxy);
		
	}

}