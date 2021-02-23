#include <stdio.h>

int main()
{
    char letra;

    printf("Digite sua letra favorita: \n");
    scanf("%c", &letra);

    if(letra == 'j'){
        printf("Voce gosta da melhor letra do alfabeto!");
    }
    else if(letra == 'v'){
        printf("Voce gosta da segunda melhor letra do alfabeto!");
    }
    else{
        printf("Que letra ruim em!");
    }

    return 0;
}