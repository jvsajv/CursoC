#include <stdio.h>

int main(){
    int resposta;
    printf("Digite um numero maior que 9: \n");
    scanf("%d", &resposta);
    while(resposta <= 9){
        printf("Esse numero nao eh MAIOR QUE 9, digite outro: \n");
        scanf("%d", &resposta);
    }
    printf("Parabens, esse numero eh maior que 9!\n");
    return 0;
}