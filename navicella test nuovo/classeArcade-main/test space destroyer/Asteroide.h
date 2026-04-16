#pragma once

class Asteroide {
private:
    float x, y;
    int larghezza, altezza;
    bool attivo;

public:
    Asteroide(int larghezzaSchermo, int altezzaSchermo);
    void reset(int larghezzaSchermo, int altezzaSchermo);
    bool collisione(float px, float py);
    void distruggi();
    bool isAttivo();
    float getY();
};