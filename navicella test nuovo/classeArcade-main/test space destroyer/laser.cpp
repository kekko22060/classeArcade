#include "laser.h"
#include "Asteroide.h"

Laser::Laser() {
    this->x = 0;
    this->y = 0;
    this->attivo = false;
}

void Laser::spara(int xInizio, int yInizio) {
    this->x = xInizio;
    this->y = yInizio;
    this->attivo = true;
}

void Laser::muovi(Asteroide& ast) {
    if (this->attivo) {
        for (int i = 0; i < 15; i++) {
            this->x = this->x + 1;
            if (ast.isAttivo() && ast.collisione((float)this->x, (float)this->y)) {
                ast.distruggi();
                this->attivo = false;
                break;
            }
            if (this->x > 800) {
                this->attivo = false;
                break;
            }
        }
    }
}

void Laser::disattiva() {
    this->attivo = false;
}

bool Laser::isAttivo() {
    return this->attivo;
}

int Laser::getX() {
    return this->x;
}

int Laser::getY() {
    return this->y;
}