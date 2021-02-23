#include <stdio.h>

int main(){
    int resposta;
    printf("Digite um numero maior que 9: \n");
    do{
        scanf("%d", &resposta);
        if(resposta <= 9){
            printf("Esse numero nao eh MAIOR QUE 9, digite outro: \n");
        }
    }while(resposta <= 9);
    printf("Parabens, esse numero eh maior que 9!");
    return 0;
}