/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/
#include <stdio.h>
#include <math.h>

int main() {
  float a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0, delta = 0.0;
  
  printf("Digite uma esquação do 2° grau para calcular as raizes.\n");
  printf("Sendo o valor de a: ");
  scanf("%f", &a);
  printf("Sendo o valor de b: ");
  scanf("%f", &b);
  printf("Sendo o valor de c: ");
  scanf("%f", &c);
  
  delta = pow(b,2) - 4 * a * c;
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);
  
  printf("O valor de x1 é: %f\n", x1);
  printf("O valor de x2 é: %f\n", x2);

  return 0;
};
