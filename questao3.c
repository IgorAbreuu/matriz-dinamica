#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m, n2, m2;
  int **mat, **mat2;
  int maior, maior2, pcoluna, pcoluna2, plinha, plinha2;
  printf("=================================\n");
  printf("Quantidade de linhas da matriz: ");
  scanf("%d",&n);
  printf("Quantidade de colunas da matriz: ");
  scanf("%d",&m);
  printf("=================================\n");

  mat = (int**) malloc(n*(sizeof(int)));

  for(int i=0;i<n;i++){
    mat[i] = (int*) malloc(m*(sizeof(int)));
  }

  maior=mat[0][0];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("Insira os valores na posição [%d] [%d]\t",i,j);
      scanf("%i",&mat[i][j]);
      
      if(mat[i][j]>maior){
        maior=mat[i][j];
      }
    }
  }
  printf("=================================\n");
  printf("Quantidade de linhas da matriz transposta: ");
  scanf("%d",&n2);
  printf("Quantidade de colunas da matriz transposta: ");
  scanf("%d",&m2);
  printf("=================================\n");

  mat2 = (int**) malloc(m2*(sizeof(int)));
  for(int i=0;i<m2;i++){
    mat2[i] = (int*) malloc(m2*(sizeof(int)));
  }
  maior2=mat2[0][0];
  for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
      printf("Insira os valores na posição [%d] [%d]\t",i,j);
      scanf("%i",&mat2[i][j]);
      if(mat2[i][j]>maior2){
        maior2=mat2[i][j];
      }
    }
  }
  printf("\n");
  printf("\n");
  printf("=================================\n");
  printf("       MATRIZ DE INTEIROS        \n");
  printf("=================================\n");
  printf("O maior valor é: %d\n",maior);
  printf("\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("[ %d ]\t",mat[i][j]);
    }
    printf("\n");
  }


  printf("\n");
  printf("\n");
  printf("=================================\n");
  printf("  MATRIZ TRANSPOSTA DE INTEIROS  \n");
  printf("=================================\n");
  printf("O maior valor é: %d\n",maior2);
  printf("\n");
  for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
      printf("[ %d ]\t",mat2[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  
  free(mat);
  free(mat2);
  return 0;
}