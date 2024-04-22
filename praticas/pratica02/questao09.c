/*
  9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/
#include <stdio.h>


int main() {

  int numero = 0;
  
  printf("Digite um número: ");
  int deu_certo = scanf("%i", &numero);

  printf("O número: %i, é correspondente na tabela ASCII o caractere: %c\n", numero, numero);

  return 0;
}