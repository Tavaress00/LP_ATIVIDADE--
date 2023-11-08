#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"portuguese");


 int opcao;



 printf("====== MENU DO JOGO =======\n\n");
 printf("\n OPÇÔES           FUNÇÕES  \n  ");
 printf("\n   1 -           Novo Jogo  \n ");
 printf("\n   2 -         Carregar Jogo \n ");
 printf("\n   3 -         Configurações \n ");
 printf("\n======= FIM DO MENU ===========");
 printf("\n\nEscolha uma das opções: ");
 scanf("%d",&opcao);

 switch (opcao)
 {
 case 1:
    printf("\n\n == Começando novo jogo == ");
    break;
 case 2:
    printf("\n\n == Carregando jogo ==");
    break;
 case 3:
    printf("\n\n == Menu de Configurações == ");    
 default :
    printf("Opção de jogo invalida");
    break;
 }
  
    return 0;
}