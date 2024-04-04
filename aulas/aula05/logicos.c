#include <stdio.h>

int main(){

  int numero = 0;

  printf("Digite um número: ");
  int deu_certo = scanf("%i", &numero);
  
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < %i < 10 ? %i\n", numero, maior_que_0_e_menor_que_10);

  int maior_que_0_ou_menor_que_10 = numero > 0 || numero < 10;
  printf("0 < %i ou %i < 10 ? %i\n", numero, numero, maior_que_0_ou_menor_que_10);

  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("0 > %i ou %i > 10 ? %i\n", numero, numero, menor_que_0_ou_maior_que_10);

  int nao_e_menor_que_0 = !(numero < 0);
  printf("%i não é < 0? %i\n", numero, nao_e_menor_que_0);

  int nao_e_maior_que_10 = !(numero > 10);
  printf("%i não é > 10? %i\n", numero, nao_e_maior_que_10);
  

  return 0;
}