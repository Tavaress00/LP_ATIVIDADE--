#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"portuguese");
 
 int maiorNumero;
 int menorNumero;
 int p;
 int s;




printf("Digite o primeiro numero: ");
scanf("%d",&p);

printf("Digite o segundo numero: ");
scanf("%d",&s);

system("cls");

if (p > s)
{
    maiorNumero = p;
}
else
{
    menorNumero = p;
}

if ( s > p)
{
    maiorNumero = s;
}

else
{
    menorNumero = s;
}

printf("\n\nmaior numero: %d \n\n", maiorNumero);
printf("\nmenor numero: %d \n\n", menorNumero);

return 0;


}