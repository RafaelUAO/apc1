/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/
#include <stdio.h>
#include <math.h>

int main() {
  int segundos = 0.0, horas = 0.0, minutos = 0.0, segundos_restantes = 0.0;

  printf("Digite um valor em segundos para transformar em horas, minutos e segundos: ");
  scanf("%i", &segundos);

  horas = segundos / 3600; // Calcula o número de horas
  segundos_restantes = segundos % 3600; // Calcula o restante dos segundos após remover as horas
  minutos = segundos_restantes / 60; // Calcula o número de minutos
  segundos_restantes = segundos_restantes % 60; // Calcula o restante dos segundos após remover os minutos


  printf("______________________________________\n");
  printf(" Horas: %02d Minutos: %02d Segundos: %02d\n", horas, minutos, segundos);
  printf("______________________________________\n");
  //0 indica que devemos preencher com zeros à esquerda, se o número não ocupar o número total de caracteres especificado.
  //2 indica o número total de caracteres que o número deve ocupar (incluindo os zeros à esquerda, se houver).
  


  return 0;
}