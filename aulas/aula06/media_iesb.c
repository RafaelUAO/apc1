#include <stdio.h>


int main(){
  float nota1, nota2, nota3;
  
  
  printf("Adicione sua 1° nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_e_valida = nota1 >= 0 && nota1 <= 10;
  if (nota1_e_valida){
    printf("Adicione a sua 2° nota: ");
    int deu_certo = scanf("%f", &nota2);
    }
  else {
  printf("Nota não é válida! Adicione um valor entre: 0.0 e 10.0\n");
    }

  float media = (nota1 * 0.4f) + (nota2 * 0.6f);
  
  int nota2_e_valida = nota2 >= 0 && nota2 <= 10;
  if (nota2_e_valida){
    printf("Sua media final é: %.2f\n", media);
    }
  else {
    printf("Nota não é válida! Adicione um valor entre: 0.0 e 10.0\n");
    }
  
    if (media >= 5){
      printf("Parabéns você foi aprovado!\n");
      }
      
    else if (media <5){
      printf("Você va precisar fazer a P3!\n");
        
      printf("Adicione sua 3° nota: ");      
      int deu_certo3 = scanf("%f", &nota3);          
         
      float media_final;

      if (nota3 > nota1 && nota1 < nota2){
          media_final = (nota3 * 0.4f) + (nota2 * 0.6f);
          }
        
      else if (nota3 > nota2 && nota2 < nota1){
          media_final = (nota1 * 0.4f) + (nota3 * 0.6f);
          }
      
      else {
          media_final = (nota1 * 0.4f) + (nota2 * 0.6f);          
      }
      
      printf("Sua media final é: %.2f\n", media_final);
      
        if (media_final >= 5){
        printf("Parabéns você foi aprovado!\n");
        }

        else {
        printf("Você foi reprovado!\n");
        }
    }
    
    if (media >= 9.0f && media <= 10.0f){
        printf("A menção é SS\n");
        }
    else if (media >= 7.0f && media <= 8.9f){
        printf("A menção é MS\n");
        }
    else if (media >= 5.0f && media <= 6.9f){
        printf("A menção é MM\n");
        }
    else if (media >= 3.0f && media <= 4.9f){
      printf( "A menção é MI\n");
        }
          
  
  return 0;
}