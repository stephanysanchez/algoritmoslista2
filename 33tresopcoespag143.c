#include <stdio.h>

int main ()
{
float N;
printf("Digite um numero: \n");
scanf("%f;",&N);
if (N>0){
printf("Numero positivo. \n");
}
if (N<0){
printf("Numero negativo. \n");
}
if (N==0){
printf("Numero nulo. \n");
}
}