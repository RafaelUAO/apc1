/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/
#include <stdio.h>
#include <math.h>

int main() {
  const float bytes = pow(1024.0,3);
  float gigabytes = 0.0;
  
  
  printf("Digite o valor em gigabytes para converter para bytes: ");
  scanf("%f", &gigabytes);
  
  float resultado = gigabytes * bytes;
  float resposta = resultado / 1048576;
  
  printf("O valor em bytes é: %f³\n", resposta);
  
  return 0;
}