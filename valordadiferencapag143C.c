#include <stdio.h>

int main ()
{
float N1,N2,D;
printf("Digite o primeiro valor: \n");
scanf("%f",&N1);
printf("Digite o segundo valor: \n");
scanf("%f",&N2);
D=N1-N2;
if (D<=0){
printf("Diferenca menor ou igual a zero. \n");
}
if (D>0){
printf("Diferenca maior que zero. \n");
}
}