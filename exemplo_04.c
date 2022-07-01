#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int soma = 0;

    printf("Digite A:\n");
    scanf("%i", &a);
    printf("Digite B:\n");
    scanf("%i", &b);
    soma = a + b;

    printf("A + B = %i\n", soma);
    
    return 0;
}