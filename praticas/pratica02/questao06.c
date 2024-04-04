/*
  6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/
#include <stdio.h>

int main() {
  float valor_compra = 0.0, valor_depreciado = 0.0;
  int ano_fabricacao = 0, ano_depreciacao = 0;

  printf("Digite o valor de compra do veículo: ");
  float deu_certo = scanf("%f", &valor_compra);

  printf("Digite o ano de fabricação do veículo: ");
  int deu_certoo = scanf("%i", &ano_fabricacao);
  
  printf("Digite o ano de depreciação do veículo: ");
  deu_certoo = scanf("%i", &ano_depreciacao);

  valor_depreciado = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

  float valor_atual = valor_compra - valor_depreciado;

  printf("O valor depreciado do veículo é R$%.2f\n", valor_depreciado);
  printf("O valor atual do veículo é R$%.2f\n", valor_atual);

  return 0;
}