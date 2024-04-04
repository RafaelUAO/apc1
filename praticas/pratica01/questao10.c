/*
10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/
#include <stdio.h>

int main() {
  int numero = 0;
  int milhar = 1000;
  int centena = 100;
  int dezena = 10;
  int unidade = 1;
  
  printf("Digite um número inteiro qualquer composto por unidade, dezena, centena e milhares: ");
  scanf("%i", &numero);

  int milhares = numero / milhar;
  int centenas = (numero % milhar) / centena;
  int dezenas = ((numero % milhar) % centena) / dezena;
  int unidades = (((numero % milhar) % centena) % dezena) / unidade;

  printf("__________________________________________________\n");
  printf(" %i é composto por %i milhares, %i centenas, %i dezenas e %i unidades\n", numero, milhares, centenas, dezenas, unidades);
  

  

 

  
  
  

  return 0;
}