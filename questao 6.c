#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");

int opcao;


 printf(" Codigos ======= produtos \n\n ");
 printf("   1              Camiseta \n");
 printf("    2               calça\n" );
 printf("    3               Sapato\n");
 printf("\n\nEscolha um dos Codigos acima: ");
 scanf("%d",&opcao);

system("cls");

switch (opcao)
{
case 1:
    printf("\nProduto escolhido: camiseta\n\n");
    printf("Valor do produto: r$ 60,00\n");
    break;
case 2:
   printf("\nProduto escolhido: calça\n\n");
    printf("Valor do produto: r$ 100,00\n");
    break;
case 3:
    printf("\nProduto escolhido: Sapato\n\n");
    printf("Valor do produto: r$ 65,00\n");
    break;    
default :
    printf("Codigo não valido !!");
    break;
}

 return 0;
}