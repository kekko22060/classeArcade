#include <cstdlib>
#include "Asteroide.h"

Asteroide::Asteroide(int larghezzaSchermo, int altezzaSchermo) {
    this->larghezza = 10;
    this->altezza = 10;
    this->attivo = false;
}

void Asteroide::reset(int larghezzaSchermo, int altezzaSchermo) {
    this->x = 799.0f;
    this->y = (float)(rand() % (altezzaSchermo - this->altezza));
    this->attivo = true;
}

bool Asteroide::collisione(float px, float py) {
    if (this->attivo == false) return false;
    if (px >= this->x && px < (this->x + (float)this->larghezza)) {
        if (py >= this->y && py < (this->y + (float)this->altezza)) {
            return true;
        }
    }
    return false;
}

void Asteroide::distruggi() {
    this->attivo = false;
}

bool Asteroide::isAttivo() {
    return this->attivo;
}

float Asteroide::getY() {
    return this->y;
}