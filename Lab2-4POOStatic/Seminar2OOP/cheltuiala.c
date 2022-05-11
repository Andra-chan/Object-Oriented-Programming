#include "cheltuiala.h"
#include <string.h>
#include <assert.h>

Cheltuiala creazaCheltuiala(char* tip, int suma, int zi){
    Cheltuiala cheltuiala;
    cheltuiala.zi = zi;
    cheltuiala.suma = suma;
    strcpy_s(cheltuiala.tip,sizeof(cheltuiala.tip),tip);
    return cheltuiala;
}

// Getters
int getZi(Cheltuiala* cheltuiala) {
    return cheltuiala->zi;
}
int getSuma(Cheltuiala* cheltuiala) {
    return cheltuiala->suma;
}
char* getTip(Cheltuiala* cheltuiala){
    return cheltuiala->tip;
}


// Setters
int setZi(Cheltuiala* cheltuiala, int zi_noua) {
    cheltuiala->zi = zi_noua;
    return cheltuiala->zi;
}
int setSuma(Cheltuiala* cheltuiala, int suma_noua) {
    cheltuiala->suma = suma_noua;
    return cheltuiala->suma;
}
void setTip(Cheltuiala* cheltuiala, char* tip_nou){
    strcpy(cheltuiala->tip, tip_nou);
}


// Validator
int valideaza(Cheltuiala cheltuiala) {
    if (strlen(cheltuiala.tip) == 0) {
        return 1;
    }
    if (cheltuiala.suma <= 0) {
        return 1;
    }
    if (cheltuiala.zi <= 0){
        return 1;
    }
    if (cheltuiala.zi > 31) {
        return 1;
    }
    return 0;
}

void testValideaza() {
    Cheltuiala cheltuiala = creazaCheltuiala("transport", -1, 6);
    assert(valideaza(cheltuiala) == 1);
    Cheltuiala cheltuiala2 = creazaCheltuiala("", 20, 10);
    assert(valideaza(cheltuiala2) == 1);
    Cheltuiala cheltuiala3 = creazaCheltuiala("transport", 200, 60);
    assert(valideaza(cheltuiala3) == 1);
    Cheltuiala cheltuiala4 = creazaCheltuiala("transport", 200, -60);
    assert(valideaza(cheltuiala4) == 1);
}

// Testeaza creearea cheltuielii
void testCheltuiala() {
    Cheltuiala cheltuiala = creazaCheltuiala("transport", 200, 10);
    assert(getSuma(&cheltuiala) == 200);
    assert(getZi(&cheltuiala) == 10);
    assert(strcmp(getTip(&cheltuiala), "transport") == 0);
}

/*
void testSetters() {
    Cheltuiala cheltuiala = creazaCheltuiala("transport", 200, 10);
    int zi_noua = 20;
    int suma_noua = 100;
    char* tip_nou = "mancare";
    assert(setSuma(&cheltuiala, zi_noua) == 100);
    assert(setZi(&cheltuiala, zi_noua) == 20);
    //assert(setTip(&cheltuiala, tip_nou) == "mancare");
}
*/
