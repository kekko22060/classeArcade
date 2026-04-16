#pragma once

class Asteroide;

class Laser {
private:
    int x, y;
    bool attivo;

public:
    Laser();
    void spara(int xInizio, int yInizio);
    void muovi(Asteroide& ast);
    void disattiva();
    bool isAttivo();
    int getX();
    int getY();
};