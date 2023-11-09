#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");

int opcao;


printf(" 1 =================  Inglês \n");
printf(" 2 ================= Espalhol\n");
printf(" 3 =================  Fracês \n");
printf("\n Escolha uma das opções: ");
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