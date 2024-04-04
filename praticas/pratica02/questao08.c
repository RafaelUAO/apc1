/*
  8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/
#include <stdio.h>
#include <math.h>

int main() {
  float x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, distancia = 0.0;

  printf("Sobre a cordernada de X. Digite o valor de x1: ");
  float deu_certo = scanf("%f", &x1);

  printf("Sobre a cordernada de X. Digite o valor de x2: ");
  deu_certo = scanf("%f", &x2);

  printf("Sobre a cordernada de Y. Digite o valor de y1: ");
  deu_certo = scanf("%f", &y1);

  printf("Sobre a cordernada de Y. Digite o valor de y2: ");
  deu_certo = scanf("%f", &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A cordenada de X é: (%.2f, %.2f)\n", x1, x2);
  printf("A cordenada de Y é: (%.2f, %.2f)\n", y1, y2);
  printf("A distância entre os pontos é: %.2f\n", distancia);
  


  return 0;
}