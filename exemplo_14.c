#include <stdio.h>

int main(){
  int arr[5];
  printf("Digite 5 números: \n");

  for(int i = 0; i < 5; i++){
    printf("%d :", i);
    scanf("%d", &arr[i]);
  }

  int soma = 0;
  for(int i = 0; i < 5; i++){
        soma += arr[i];
  }

  printf("A soma dos 5 números é: %d \n", soma);


  return 0;
}