#include <stdio.h>
#include <stdlib.h>

int main() {
  double **mat, **mat2;
  int n, m, n2, m2;
  double soma;

  printf("=================================\n");
  printf("Quantidade de linhas da matriz A:\n");
  scanf("%d",&n);
  printf("Quantidade de colunas da matriz A:\n");
  scanf("%d",&m);
  printf("=================================\n");

  mat = (double**) malloc(n*(sizeof(double)));

  for(int i=0;i<n;i++){
    mat[i] = (double*) malloc(m*(sizeof(double)));
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("Insira os valores na posição [%d] [%d]\t",i,j);
      scanf("%lf",&mat[i][j]);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%.2lf\t",mat[i][j]);
      soma=soma+mat[i][j];
    }
  }
  
  printf("\n=================================\n");
  printf("Quantidade de linhas da matriz B:\n");
  scanf("%d",&n2);
  printf("Quantidade de colunas da matriz B:\n");
  scanf("%d",&m2);
  printf("=================================\n");

  mat2 = (double**) malloc(n2*(sizeof(double)));

  for(int i=0;i<n2;i++){
    mat2[i] = (double*) malloc(m2*(sizeof(double)));
  }
  for(int i=0;i<n2;i++){
    for(int j=0;j<m2;j++){
      printf("Insira os valores na posição [%d] [%d]\t",i,j);
      scanf("%lf",&mat2[i][j]);
    }
  }
  for(int i=0;i<n2;i++){
    for(int j=0;j<m2;j++){
      printf("%.2lf\t",mat2[i][j]);
      soma=soma+mat2[i][j];
    }
  } 
  printf("\n=================================\n");
  printf("A soma das duas matrizes é %.2lf",soma);

  free(mat);
  free(mat2);
  return 0;
}