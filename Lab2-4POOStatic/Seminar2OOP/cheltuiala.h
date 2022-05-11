#pragma once

// Structura principala Cheltuiala, cu cstring tip, integru suma si integru zi
typedef struct {
	char tip[20];
	int suma;
	int zi;
} Cheltuiala;

// Initializeaza un produs
Cheltuiala creazaCheltuiala(char* tip, int suma, int zi);

// Getters
int getSuma(Cheltuiala* cheltuiala);
int getZi(Cheltuiala* cheltuiala);
char* getTip(Cheltuiala* cheltuiala);

// Setters
int setZi(Cheltuiala* cheltuiala, int zi_noua);
void setTip(Cheltuiala* cheltuiala, char* tip_nou);
int setSuma(Cheltuiala* cheltuiala, int suma_noua);

// Validator
int valideaza(Cheltuiala cheltuiala);

void testCheltuiala();
void testValideaza();

