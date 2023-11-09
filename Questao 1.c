#include <stdio.h>
#include <stdlib.h>

int main(){


int clima;

printf("==== Sistema de clima de jogo ====\n\n");
printf("Informe a temperatuda externa: ");
scanf("%d",&clima);

if (clima > 25)
{
    printf("\n\nClima: Ensolarado!!");
}
else if (clima < 15)
{
    printf("\n\nClima: Chuvoso!!");
}
else if ( clima >= 15 && clima <= 25)
{
    printf("\n\nClima: Nublado!!");
}


return 0;
}
