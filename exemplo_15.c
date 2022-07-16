#include <stdio.h>

int main(){
  int arr[3][4];
  printf("Digite 12 números: \n");

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  printf("a matriz transposta eh: \n");
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", arr[j][i]);
    }
    printf("\n");
  }
  return 0;
}