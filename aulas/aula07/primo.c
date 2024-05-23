#include <stdio.h>


int main() {
  int numero;

  printf("Digite um número > 0 e verifique se ele é primo: ");
  int deu_certo = scanf("%i", &numero);
  
  if (deu_certo && numero > 0){
    int qtd_divisores = 0;
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0){
       printf("%i\n", i);
        qtd_divisores++;
     }
    } 
    if (qtd_divisores == 2){
      printf("O número %i é primo e tem %i divisores\n", numero, qtd_divisores);
    }
    else{
      printf("O número %i não é primo pois tem %i divisores\n", numero, qtd_divisores);
    }
  }

  else {
    printf("Número inválido. Tente novamente!\n");
  }
  return 0; 
}