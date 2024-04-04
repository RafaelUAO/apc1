#include <stdio.h>

int main() {
  int numero1 = 0, numero2 = 0;

  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os números são iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("Os números são diferentes? %i\n", sao_diferentes);

  int e_maior = numero1 > numero2;
  printf("O primeiro número é maior que o segundo número? %i\n", e_maior);

  int e_menor = numero1 < numero2;
  printf("O primeiro número é menor que o segundo número? %i\n", e_menor);

  int e_maior_ou_igual = numero1 >= numero2;
  printf("O primeiro número é maior ou igual que o segundo número? %i\n", e_maior_ou_igual);

  int e_menor_ou_igual = numero1 <= numero2;
  printf("O primeiro número é menor ou igual que o segundo número? %i\n", e_menor_ou_igual);
  
  return 0;
}