#include <stdio.h>

int main ()
{
int A,B,C,D;
printf("Digite o primeiro valor: \n");
scanf("%d",&A);
printf("Digite o segundo valor: \n");
scanf("%d",&B);
printf("Digite o terceiro valor: \n");
scanf("%d",&C);
printf("Digite o quarto valor: \n");
scanf("%d",&D);
if (A!=D && B!=C){
printf("O retangulo nao e um quadrado. \n");
}
if (A==D && B==C){
printf("O retangulo e um quadrado. \n");
}
}