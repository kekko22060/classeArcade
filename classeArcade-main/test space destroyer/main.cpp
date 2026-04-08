#include <iostream>
#include <conio.h>
#include "Navicella.h"
#include "Asteroide.h"

#define ALTEZZA_SCHERMO 250 

const int screenWidth = 800;
const int screenHeight = 600;

void main() {
    srand(time(NULL)); 

    Asteroide asteroide(screenWidth, screenHeight);
    Navicella giocatore(5, 5);
    char c;
    int MaxX = 10;
    int Maxy = 10;


    while (true) {

        c = _getch();
        giocatore.muovi(c, MaxX, Maxy);

        asteroide.aggiorna();

        if (asteroide.fuoriSchermo() || !asteroide.isAttivo()) {
            asteroide.reset(screenWidth, screenHeight);
        }

        if (asteroide.collisione(giocatore.getCoordinataX(), giocatore.getCoordinataY())) {
            cout << "COLLISIONE!" << endl;
            asteroide.distruggi();
        }
    }
}