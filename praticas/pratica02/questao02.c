/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/
#include <stdio.h>

int main (){

  int numero1 = 0, numero2 = 0;

  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  int quociente = numero1 / numero2;
  int resto_da_divisao = numero1 % numero2;

  printf("O quociente da divisão entre %i e %i é %i\n", numero1, numero2, quociente);
  printf("O resto da divisão entre %i e %i é %i\n", numero1, numero2, resto_da_divisao);



  return 0;
}