#include <stdio.h>
#include <math.h>

#define QUATRO 4
const float pi = 3.14;

int main()
{
    float raio = 0;
    float areaEsfera = 0;
    printf("Raio da Esfera: \n");
    scanf("%f", &raio);
    areaEsfera = QUATRO * pi * pow(raio, 2);
    printf("Area da Esfera: %f", areaEsfera);
    return 0;
}