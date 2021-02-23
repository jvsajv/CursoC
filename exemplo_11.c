#include <stdio.h>

enum meses {Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};
enum meses mes;

int main()
{
    char letra;

    printf("Digite o numero mes que voce mais gosta: \n");
    scanf("%d", &mes);

    switch(mes){
        case Jan:
            printf("Seu mes favorito eh Janeiro\n");
        break;
        case Fev:
            printf("Seu mes favorito eh Fevereiro\n");
        break;
        case Mar:
            printf("Seu mes favorito eh Março\n");
        break;
        case Abr:
            printf("Seu mes favorito eh Abril\n");
        break;
        case Mai:
            printf("Seu mes favorito eh Maio\n");
        break;
        case Jun:
            printf("Seu mes favorito eh Junho\n");
        break;
        case Jul:
            printf("Seu mes favorito eh Julho\n");
        break;
        case Ago:
            printf("Seu mes favorito eh Agosto\n");
        break;
        case Set:
            printf("Seu mes favorito eh Setembro\n");
        break;
        case Out:
            printf("Seu mes favorito eh Outubro\n");
        break;
        case Nov:
            printf("Seu mes favorito eh Novembro\n");
        break;
        case Dez:
            printf("Seu mes favorito eh Dezembro\n");
        break;
        default:
            printf("So existem 12 meses, digite um numero valido da proxima vez!");
        break;
    }

    return 0;
}