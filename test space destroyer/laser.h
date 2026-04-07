#pragma once
#include <iostream>
using namespace std;

class Laser {
private:
    int x, y;
    int danno;
    bool attivo;

public:
    Laser(int xInizio, int yInizio);
    int getDanno();
    bool isAttivo();
    void disattiva();
};