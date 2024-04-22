/*
  10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
*/

#include <stdio.h>

int main() {
  int numero = 0;

  printf("Digite um número inteiro para visualizar sua tabuada: ");
  int deu_certo = scanf("%i", &numero);

  for (int i = 1; i <= 10; i++){
    int tabuada = numero * i;
    printf("%i x %i = %i\n", numero, i, tabuada); //Resolução utilizando a estrutura de laço for ()
  }

  // printf("A tabuada do número: %i é:\n %i x 1 = %i\n %i x 2 = %i\n %i x 3 = %i\n %i x 4 = %i\n %i x 5 = %i\n %i x 6 = %i\n %i x 7 = %i\n %i x 8 = %i\n %i x 9 = %i\n %i x 10 = %i\n", numero, numero, numero * 1, numero, numero * 2, numero, numero * 3, numero, numero * 4, numero, numero * 5, numero, numero * 6, numero, numero * 7, numero, numero * 8, numero, numero * 9, numero, numero * 10); Resolução somento com o uso do printf()



  return 0;
}