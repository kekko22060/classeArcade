#include "Laser.h"

Laser::Laser(int xInizio, int yInizio) {
    this->x = xInizio;
    this->y = yInizio;
    this->danno = 0;
    this->attivo = true;
    cout << "Laser creato in: " << x << "," << y << endl;
}

int Laser::getDanno()  {
    return this->danno;
}

bool Laser::isAttivo()  {
    return this->attivo;
}

void Laser::disattiva() {
    this->attivo = false;
    cout << "Laser spento." << endl;
}