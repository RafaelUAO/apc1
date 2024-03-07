/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/
  #include <stdio.h>

  int main() {
  float preco_inicial = 0.0;
  const float icms = 0.17f;
  const float cofins = 0.076f;
  const float pis_pasep = 0.0165f;

    printf("Digite o valor do produto para calcular o imposto sobre ele: ");
    scanf("%f", &preco_inicial);

    float preco_final = (1 + (icms + cofins + pis_pasep) * preco_inicial);
    float valor_icms = preco_inicial * icms;
    float valor_cofins = preco_inicial * cofins;
    float valor_pis_pasep = preco_inicial * pis_pasep;
        
    printf("Ovalor do produto é: %f\n", preco_inicial);
    printf("O valor dos impostos incluídos no produto é: R$ %f\n", preco_final);
    printf("O valor do ICMS é: R$ %f\n", valor_icms);
    printf("O valor do COFINS é: R$ %f\n", valor_cofins);
    printf("O valor do PIS/PASEP é: R$ %f\n", valor_pis_pasep);
    

  return 0;
}