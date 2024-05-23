/*
Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/
#include <stdio.h>

int main() {
  int numero;
  int continua;

  
  while (1)
  {    
    printf("Digite um número inteiro para verificar se é par ou impar: ");
    int deu_certo = scanf("%i", &numero);

    if (deu_certo > 0) {
      if (numero % 2 == 0){
        printf("O número é par\n");
      }
  
      else {
        printf("O número é impar\n");
      }
      
      printf("Deseja continuar? (1 para sim, 0 para não): ");
      int continua_confirm = scanf("%i", &continua);
 
      if (continua == 0){
        break;
      }
  
      else if(continua == 1){
        continue;
      }
    }
  }
    return 0;
}