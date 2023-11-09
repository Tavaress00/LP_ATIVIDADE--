#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;

  printf("Escreva um numero: ");
  scanf("%d",&i);

  while ( i >= 0 )
  {
    printf("%d \n", i);

     i = i-1;
  }
  



return 0;
}