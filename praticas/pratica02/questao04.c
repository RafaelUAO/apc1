/*
  4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/
#include <stdio.h>

int main(){
  float largura = 0.0, comprimento = 0.0, area = 0.0, area_para_hectares = 0.0;

  printf("Digite a largura do terreno em metros: ");
  float deu_certo = scanf("%f", &largura);

  printf("Digite o comprimento do terreno em metros: ");
  deu_certo = scanf("%f", &comprimento);

  area_para_hectares = (largura * comprimento) * 10000;
  area = (largura * comprimento);

  printf("__________________________________________________\n");
  printf("A área do terreno é de %.2f m e em hectares é %.2f m²\n", area, area_para_hectares);



  return 0;
}