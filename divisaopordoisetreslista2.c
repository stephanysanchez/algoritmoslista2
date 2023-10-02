#include <stdio.h>

int main ()
{
int A,B,C,D;
printf("Digite o valor de A: \n");
scanf("%d",&A);
printf("Digite o valor de B: \n");
scanf("%d",&B);
printf("Digite o valor de C: \n");
scanf("%d",&C);
printf("Digite o valor de D: \n");
scanf("%d",&D);
if (A%2==0 && A%3==0)
    printf("A=%d \n",A);
if (B%2==0 && B%3==0)
    printf("B=%d \n",B);
if (C%2==0 && C%3==0)  
    printf("C=%d \n",C);
if (D%2==0 && D%3==0)  
    printf("D=%d \n",D);
}    