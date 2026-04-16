#pragma once 

class Stellina {
private:
    int x, y;
    bool attiva;

public:
    Stellina(int posX, int posY);
    void muovi();
    bool controllaCollisione(int naveX, int naveY, int raggioNave);
    bool isAttiva();
    int getX();
    int getY();
};