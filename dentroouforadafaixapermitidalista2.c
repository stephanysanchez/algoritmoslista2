#include <stdio.h>

int main ()
{
int Numero;
printf("Informe um valor: \n");
scanf("%d",&Numero);
if (Numero<=9){
    printf("O numero esta na faixa permitida.");
}
if (Numero>9){
    printf("O numero esta fora da faixa permitida.");
}
}    
    