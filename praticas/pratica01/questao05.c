/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/
#include <stdio.h>

int main() {
  const float bytes = 1024.0 * 1024.0 * 1024.0;
  float gigabytes = 0.0;
    
  printf("Digite o valor em gigabytes para converter para bytes: ");
  scanf("%f", &gigabytes);
  
  float resultado = gigabytes * bytes;
  
  printf("O valor em bytes é: %f\n", resultado);

  return 0;
}