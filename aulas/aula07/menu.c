#include <stdio.h>
#include <stdlib.h> // Para usar o system("clear")

int main() {
  int opcao = 0;

  while (opcao != 4) {
    int deu_certo = system("clear");
      
    printf("JOGO DA VELHA\n");
    printf("1 - Jogar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n'); // limpa o buffer do teclado
    
    if (!deu_certo) {
      opcao = 0;
    }
  
    switch (opcao) {
      case 1: {
        char nome[31];
        deu_certo = system("clear");
        printf("Digite seu nome: ");
        deu_certo = scanf("%[^\n]s", nome);
        while (getchar() != '\n'); // limpa o buffer do teclado
        printf("Olá %s!", nome);
        printf("Pressione ENTER para iniciar...");
        getchar();
        break;
      }
      case 2: {
        deu_certo = system("clear");
        printf("Ranking - Top 5\n");
        printf("1° - Rafael - 1111 pontos\n");
        printf("2° - Maria - 875 pontos\n");
        printf("3° - Jose - 560 pontos\n");
        printf("4° - Claudio - 320 pontos\n");
        printf("Pressione ENTER para voltar...");
        getchar();
        break;
      }
      case 3: {
        deu_certo = system("clear");
        printf("Ajuda - Como Jogar:.....\n");
        printf("Pressione ENTER para iniciar...");
        getchar();
        break;
      }
      case 4: printf("Ate logo!\n"); break;
      default: printf("Opção invalida! Pressione ENTRE para prosseguir...\n");
      getchar();      
    }
  }
  return 0; 
}