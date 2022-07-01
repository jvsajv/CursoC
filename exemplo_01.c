#include <stdio.h>

int potencia(int a, int b)
{
    int resultado = 1;
    int contador = 0;

    if (b == 1)
    {
        return 1;
    }
    else
    {
        while (contador < b)
        {
            resultado = resultado * a;
            contador = contador + 1;
        }
    }

    return resultado;
}

int main()
{

    int x = 2;
    int y = 2;
    int xElevado = 0;

    xElevado = potencia(x, y);
    printf("%i\n", xElevado);

    return 0;
}