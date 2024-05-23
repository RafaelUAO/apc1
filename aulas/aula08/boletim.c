#include <stdio.h>

int main() {
  float boletim[10][3];
  
  for(int i = 0; i <10; i++) {
    for(int j = 0; j < 2; j++) {
      printf("Digite a %i° nota do %i aluno: ", j + 1, i + 1);
      int deu_certo = scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4f * boletim[i][0] + 0.6f * boletim[i][1];
  }
  
  printf("BOLETIM DE NOTAS\n");
  printf("Aluno  Nota1 Nota2 Media\n");
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 3; j++) {
        printf("Aluno%i %5.1f ", i, boletim[i][j]);
      }
      printf("\n");
    }

  return 0;
}