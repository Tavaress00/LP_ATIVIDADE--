#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");

int idade;
 
 printf(" === Projeto De Controle De Acesso === \n\n");
 printf("Informe sua idade: ");
 scanf("%d",&idade);

if (idade >= 18)
{
    printf("\nAcesso Permitido!!!");
}
else
{
    printf("\nAcesso Negado!!!");
}


return 0;
}