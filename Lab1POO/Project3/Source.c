#include <math.h>
#include <stdio.h>

// Folosind formula lui Legendre, calculam exponentul la care prim se gaseste in descopunerea lui nFactorial
// formula calculeaza suma din [nFactorial]/puterePrim
// puterePrim = prim^i, i creste cat timp puterePrim <= nFactorial
int gasesteExponent(nFactorial, prim) {
    int sumaCalculExponent = 0;
    int puterePrim = prim;
    while (puterePrim <= nFactorial)
    {
        sumaCalculExponent = sumaCalculExponent + (nFactorial / puterePrim);
        puterePrim = puterePrim * prim;
    }
    return sumaCalculExponent;
}

int main()
{
    int iesire = 1;
    // do while pentru a putea repeta operatia
    do {
        // Primeste nFactorial de la utlilizator(N = 1*2*...*n)
        int nFactorial;
        printf("Care este numarul pentru descompunere?\n");
        scanf("%d", &nFactorial);

        // Primeste prim
        int prim;
        printf("Care este numarul prim din descompunere?\n");
        scanf("%d", &prim);

        printf("Exponentul la care p apare in descompunerea in factori primi a lui N = 1*2*...*n este: ");
        // Apeleaza functia de calcul
        printf("%d\n", gasesteExponent(nFactorial, prim));

        // Meniu pentru repetarea operatiei
        printf("Doriti sa repetati operatia?(da=1, nu=2)\n");
        int meniu;
        scanf("%d", &meniu);

        if (meniu == 2)
        {
            iesire = iesire + 1;
            printf("La revedere!\n");
        }
    } while (iesire != 2);
    return 0;
}