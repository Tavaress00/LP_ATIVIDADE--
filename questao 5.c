#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");

int opcao;


printf(" 1 =================  Ingl�s \n");
printf(" 2 ================= Espalhol\n");
printf(" 3 =================  Frac�s \n");
printf("\n Escolha uma das op��es: ");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    printf("\nwelcome");
    break;
case 2:
    printf("\nBienvenido");
break;
case 3:
    printf("\naccueillir");
    break;
default :
    printf("Indioma invalido !!");
    break;
}

return 0;
}