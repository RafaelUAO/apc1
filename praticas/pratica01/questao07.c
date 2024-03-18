/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h>
#include <math.h>

int main() {
  float distancia = 0.0, angulo = 0.0, altura = 0.0;

  printf("Digite a distância percorrida pelo avião em metros: ");
  scanf("%f", &distancia);
  printf("Digite um angulo menor ou igual a 45°: ");
  scanf("%f", &angulo);

  float calculo_seno_do_angulo = sin(angulo);
  float calculo_altura = calculo_seno_do_angulo * distancia;

  printf("A altura alcançada pelo avião em metros é: %.2f\n", calculo_altura);

  

  return 0;
}