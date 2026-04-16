#include "Navicella.h"

Navicella::Navicella(int startX, int startY) {
    this->x = startX;
    this->y = startY;
    this->carattere = 'K';
}

void Navicella::muovi(char input, int maxX, int maxY) {
    if (input == 'w' && this->y > 0)
        this->y = this->y - 1;
    if (input == 's' && this->y < maxY - 1)
        this->y = this->y + 1;
    if (input == 'a' && this->x > 0)
        this->x = this->x - 1;
    if (input == 'd' && this->x < maxX - 1)
        this->x = this->x + 1;
}

int Navicella::getCoordinataX() {
    return this->x;
}

int Navicella::getCoordinataY() {
    return this->y;
}