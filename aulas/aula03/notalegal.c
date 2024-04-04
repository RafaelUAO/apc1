#include  <stdio.h>

int main() {
    
  // char item = " ";
  // int quantidade = 0;
  // float valor = 0.0;
  int quantidade = 0;
  float valor = 0.0;
  char item[30] = " ";
  char continuar[10] = " "; 

  
  printf("Digite o item: ");
  scanf("%s", item);
  printf("Digite a quantidade: ");
  scanf("%i", &quantidade);
  printf("Digite o valor: ");
  scanf("%f", &valor);
  printf("Deseja adicionar mais produtos? SIM/NÃO: ");
  scanf("%s", continuar);

  
  
  float valor_total = quantidade * valor;
  
  printf("\x1b[32m----------------------------\n");
  printf("      N O T A L E G A L         \n");
  printf("----------------------------\x1b[0m\n");
  printf("%-10s %2s %9s\n", "ITEM", "QTD", "VALOR");
  printf("%-10s %2i %9.2f\n", item, quantidade, valor);
  // printf("%-13s %03i %8.2f\n", "Maca fuji", 10, 50.00);
  // printf("%-13s %03i %8.2f\n", "Uva globo", 5, 15.00);
// printf("Banana nanica       1    R$ 15.00\n");
// printf("Maca fuji           10   R$ 50.00\n");
// printf("Uva globo           5    R$ 26.00\n");
  printf("----------------------------\x1b[34m\n");
  printf("TOTAL......:   R$ %8.2f\x1b[0m\n", valor_total);  


  
  return 0;
}