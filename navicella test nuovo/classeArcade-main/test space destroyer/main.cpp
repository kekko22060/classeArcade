#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include "Navicella.h"
#include "Asteroide.h"
#include "laser.h"

using namespace std;

int main() {
    srand((unsigned int)time(NULL));

    int larghezza = 800;
    int altezza = 600;
    const int MAX_LASER = 10;

    Navicella giocatore(700, 300);
    Asteroide asteroide(larghezza, altezza);
    Laser caricatore[MAX_LASER];

    asteroide.reset(larghezza, altezza);

    cout << "START -> Navicella: X=" << giocatore.getCoordinataX() << " Y=" << giocatore.getCoordinataY() << endl;
    cout << "START -> Asteroide: X=799 Y=" << (int)asteroide.getY() << endl;

    char tasto;
    while (true) {
        tasto = _getch();

        if (tasto == ' ') {
            for (int i = 0; i < MAX_LASER; i++) {
                if (caricatore[i].isAttivo() == false) {
                    caricatore[i].spara(giocatore.getCoordinataX() + 1, giocatore.getCoordinataY());
                    break;
                }
            }
        }
        else {
            giocatore.muovi(tasto, larghezza, altezza);
            cout << "Navicella pos: X=" << giocatore.getCoordinataX() << " Y=" << giocatore.getCoordinataY() << endl;
        }

        for (int i = 0; i < MAX_LASER; i++) {
            if (caricatore[i].isAttivo()) {
                caricatore[i].muovi(asteroide);
                if (asteroide.isAttivo() == false) {
                    cout << "PUNTO 1: ASTEROIDE ESPLOSA (Laser colpisce asteroide)!" << endl;
                }
            }
        }

        if (asteroide.isAttivo() && asteroide.collisione((float)giocatore.getCoordinataX(), (float)giocatore.getCoordinataY())) {
            cout << "PUNTO 2: COLLISIONE (Navicella su asteroide)!" << endl;
            asteroide.distruggi();
        }

        if (asteroide.isAttivo() == false) {
            asteroide.reset(larghezza, altezza);
            cout << "Nuovo Asteroide reset: X=799 Y=" << (int)asteroide.getY() << endl;
        }
    }

    return 0;
}