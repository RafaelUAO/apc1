/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/
#include <stdio.h>

int main() {
  float valor_hora = 0.0, horas_mes = 0.0, salario_bruto = 0.0, salario_liquido = 0.0;
  const float ir = 0.25, inss = 0.11;

  printf("Digite o valor da hora de trabalho: R$ ");
  scanf("%f", &valor_hora);
  printf("Digite o total de horas trabalhadas no mês: ");
  scanf("%f", &horas_mes);
  
  salario_bruto = valor_hora * horas_mes;
  float impostos1 = salario_bruto * ir;
  float impostos2 = salario_bruto * inss;
  salario_liquido = salario_bruto - impostos1 - impostos2;

  printf("---------------------------------\n");
  printf("   C R O N T R A C H E Q U E \n");
  printf("---------------------------------\n");

  printf("Salário Bruto......: R$:%8.2f\n", salario_bruto);
  printf("Imposto Renda......: R$:%8.2f\n", impostos1);
  printf("Imposto INSS.......: R$:%8.2f\n", impostos2);
  printf("Salário Líquido....: R$:%8.2f\n", salario_liquido);
  printf("---------------------------------\n");
  



  return 0;
}