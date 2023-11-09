#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");

 float nota;

 printf(" === Sistema de classificação do aluno === \n\n ");
 printf("Informe sua nota: ");
 scanf("%f",&nota);


 if (nota >= 9)
 {
    printf("\nEXCELENTE!!!");
 }
 else if ( nota >= 7 && nota <= 8.9)
 {
    printf("\nBOM!!!");
 }
 else if ( nota >= 5 && nota <= 6.9)
 {
    printf("\nRAZOÁVEL!!!");
 }
else if ( nota < 5 )
 {
    printf("\nINSUFICIENTE!!!");
 }

 return 0;
}