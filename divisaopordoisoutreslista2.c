#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C, D;
    printf("Digite o primeiro valor: \n");
    scanf("%i",&A);
    printf("Digite o segundo valor: \n");
    scanf("%i",&B);
     printf("Digite o terceiro valor: \n");
    scanf("%i",&C);
    printf("Digite o quarto valor: \n");
    scanf("%i",&D);
    if((A % 2==0)|| (A % 3==0))
    {
        printf("%i ",A);
    }
    if((B % 2==0)|| (B % 3==0))
    {
        printf("%i",B);
    }
    if((C % 2==0)|| (C % 3==0))
    {
        printf(" %i ",C);
    }
    if((D % 2==0)|| (D % 3==0))
    {
        printf("%i",D);
    }
}
