#include <stdio.h>

int main ()
{
float N1,N2,N3,M;
printf("Digite a nota 1: \n");
scanf("%f;",&N1);
printf("Digite a nota 2: \n");
scanf("%f;",&N2);
printf("Digite a nota 3: \n");
scanf("%f;",&N3);
M=(2*N1+3*N2+5*N3)/10;
if (M>=7){
printf("Voce foi aprovado. \n");
}
if (M<7){
printf("Voce foi reprovado. \n");
}
}