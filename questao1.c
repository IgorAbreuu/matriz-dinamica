#include <stdio.h>
#include <stdlib.h>

int main() {
  int **matriz;
  int n, m;

  printf("Quantidade de linhas:\n");
  scanf("%d",&n);
  printf("Quantidade de colunas:\n");
  scanf("%d",&m);

  matriz = (int**) malloc(n*(sizeof(int)));

  for(int i=0;i<n;i++){
    matriz[i] = (int*) malloc(m*(sizeof(int)));
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      matriz[i][j]=0;
      printf("Matriz na posição [%d][%d] = %d\n",i+1,j+1,matriz[i][j]);
    }
  }
  free(matriz);
  return 0;
}