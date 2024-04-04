/*
  3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/
#include <stdio.h>

int main() {

  float celsius = 0.0, fahrenheit = 0.0;

  printf("Digite uma temperatura em graus Celsius: ");
  float deu_certo = scanf("%f", &celsius);

  fahrenheit = (celsius * 9 / 5 + 32);

  printf("__________________________________________________\n");
  printf(" %.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
  
  

  return 0;
}