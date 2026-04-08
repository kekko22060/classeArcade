#include "Laser.h"

void main() {
    Laser colpo(10, 20);

    cout << "Danno del colpo: " << colpo.getDanno() << endl;

    if (colpo.isAttivo()==true) {
        cout << "Il laser e' attualmente in volo." << endl;
    }

    colpo.disattiva();

}