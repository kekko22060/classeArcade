#pragma once 

class Stellina {
private:
    int x, y;
    bool attiva;

public:
    Stellina(int posX, int posY) {
        x = posX;
        y = posY;
        attiva = true;
    }

    void muovi() {
        y += 1;
        if (y > 600) {
            attiva = false;
        }
    }

    bool controllaCollisione(int naveX, int naveY, int raggioNave) {
        int dx = x - naveX;
        int dy = y - naveY;
        if (dx*dx + dy*dy < raggioNave*raggioNave) {
            attiva = false;
            return true;
        }
        return false;
    }

    bool èAttiva() {
        return attiva;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};