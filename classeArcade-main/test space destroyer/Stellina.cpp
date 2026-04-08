#include <iostream>
#include "Stellina.h"

Stellina stellina(100, 0);
int viteNave = 3;
int naveX = 200;
int naveY = 500;
int raggioNave = 20;

while (true) {
    stellina.muovi();
    if (stellina.èAttiva() && stellina.controllaCollisione(naveX, naveY, raggioNave)) {
        viteNave += 1;
    }
}