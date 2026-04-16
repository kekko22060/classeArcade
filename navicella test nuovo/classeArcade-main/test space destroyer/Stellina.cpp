#include "Stellina.h"

Stellina::Stellina(int posX, int posY) {
    x = posX;
    y = posY;
    attiva = true;
}

void Stellina::muovi() {
    y = y + 1;
    if (y > 600) {
        attiva = false;
    }
}

bool Stellina::controllaCollisione(int naveX, int naveY, int raggioNave) {
    int dx = x - naveX;
    int dy = y - naveY;
    if (dx * dx + dy * dy < raggioNave * raggioNave) {
        attiva = false;
        return true;
    }
    return false;
}

bool Stellina::isAttiva() {
    return attiva;
}

int Stellina::getX() {
    return x;
}

int Stellina::getY() {
    return y;
}