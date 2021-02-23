#include <stdio.h>
#include <time.h>

int main(){
    int resposta;
    printf("Digite até que número você quer que o programa imprima: \n");
    scanf("%d", &resposta);

    for(int i = 0; i < resposta+1; i++){
        printf("%d\n", i);
    }

    return 0;
}