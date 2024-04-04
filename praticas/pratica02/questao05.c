/*
  5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/
#include <stdio.h>

int main() {
  float peso = 0.0, altura = 0.0, imc = 0.0;

  printf("Digite seu peso: ");
  float deu_certo = scanf("%f", &peso);

  printf("Digite sua altura: ");
  deu_certo = scanf("%f", &altura);

  imc = peso / (altura * altura);
  int imc_ideal = imc > 18.5 && imc < 24.9;

  printf("Seu peso é %.2f kg, sua altura é %.2f m e seu imc é %.2f kg\n", peso, altura, imc);

  printf("Seu imc está ideal? %i\n", imc_ideal);
  



  return 0;
}