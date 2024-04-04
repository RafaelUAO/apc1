/*
1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
*/

#include <stdio.h>

int main() {

  int numero1 = 0, numero2 = 0, numero3 = 0;
  printf("Digite o primeiro número: ");
  scanf("%i", &numero1);
  printf("Digite o segundo número: ");
  scanf("%i", &numero2);
  printf("Digite o terceiro número: ");
  scanf("%i", &numero3);
  
  int media = (numero1 + numero2 + numero3) / 3;

  printf("A média aritmétrica destes números é: %i\n", media);
  
  




  return 0;
}