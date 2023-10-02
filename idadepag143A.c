#include <stdio.h>

int main ()
{
int I;
printf("Digite sua idade: \n");
scanf("%d",&I);
if (I<18){
printf("Voce e menor de idade. \n");
}
if (I>=18){
printf("Voce e maior de idade. \n");
}
}