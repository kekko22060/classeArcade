#pragma once
#include <string>
using namespace std;
class Asteroide {
private:
    float x, y;
    float velocita;
    int larghezza, altezza;
    bool attivo;

public:
    
    Asteroide(int larghezzaSchermo, int altezzaSchermo);
    void reset(int larghezzaSchermo, int altezzaSchermo);

    void aggiorna(); 
    bool fuoriSchermo(); 
    bool collisione(float px, float py); 
   
    void distruggi(); 
 
    float getX();
    float getY();
    int getWidth();
    int getHeight();

    bool isAttivo(); 

    string toString();
};