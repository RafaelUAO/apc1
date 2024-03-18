/*
9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>

int main() {
  int anos = 0.0, meses = 0.0, dias = 0.0, total_dias = 0.0;

  printf("Digite uma idade em anos, meses e dias para transformar em dias\nAnos: ");
  scanf("%i", &anos);
  printf("Meses: ");
  scanf("%i", &meses);
  printf("Dias: ");
  scanf("%i", &dias);

  total_dias = anos * 360;
  total_dias = total_dias + (meses * 30);
  total_dias = total_dias + dias;

  printf("__________________________________________________\n");
  printf(" %i anos, %i meses e %i dias equivalem a %i dias\n", anos, meses, dias, total_dias);
  printf("__________________________________________________\n");


  return 0;
}