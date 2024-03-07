/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>

int main() {
  float p = 2.0, pi = 3.1416, r;
  
  printf("Digite o valor do raio da pizza: ");
  scanf("%f", &r);
  
  float perimetro = p * pi * r;
  
  printf("O perimetro da pizza é: %f\n", perimetro);
  return 0;
}