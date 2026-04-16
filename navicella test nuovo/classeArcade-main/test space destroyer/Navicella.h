#pragma once

class Navicella {
private:
    int x;
    int y;
    char carattere;

public:
    Navicella(int startX, int startY);
    void muovi(char input, int maxX, int maxY);
    int getCoordinataX();
    int getCoordinataY();
};