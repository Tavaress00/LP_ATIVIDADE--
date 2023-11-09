#include <stdio.h>
#include <stdlib.h>

int main(){
   float codigoSalvo = 12345;
   float codigo;

  do
  {
    printf("Digite o codigo de acesso: "); 
    scanf("%f",&codigo);


if (codigo == codigoSalvo)
  {
     printf("\n\nAcesso Permitido ");
  }
 

} while (codigo != codigoSalvo);
  
 



  return 0;
}