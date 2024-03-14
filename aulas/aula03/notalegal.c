#include  <stdio.h>

int main() {
    
  // char item = " ";
  // int quantidade = 0;
  // float valor = 0.0;
    
  printf("\x1b[32m----------------------------\n");
  printf("      N O T A L E G A L         \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM           QTD   VALOR\n");
  printf("%-13s %03i %8.2f\n", "Banana nanica", 1, 15.00);
  printf("%-13s %03i %8.2f\n", "Maca fuji", 10, 50.00);
  printf("%-13s %03i %8.2f\n", "Uva globo", 5, 15.00);
// printf("Banana nanica       1    R$ 15.00\n");
// printf("Maca fuji           10   R$ 50.00\n");
// printf("Uva globo           5    R$ 26.00\n");
  printf("----------------------------\x1b[34m\n");
  printf("TOTAL......:   R$ %8.2f\x1b[0m\n", 91.00);


  
  return 0;
}