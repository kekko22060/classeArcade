#include <iostream>
#include <conio.h>
#include "Navicella.h"
#include "Asteroide.h"

#define ALTEZZA_SCHERMO 250 

void main() {
	Navicella giocatore(5, 5);
	Asteroide a(ALTEZZA_SCHERMO);
	char c;
	int MaxX = 10;
	int Maxy = 10;
	while (true){
		c = _getch();
		giocatore.muovi(c, MaxX, Maxy);
		a.spostaAsteroide();
	}

}