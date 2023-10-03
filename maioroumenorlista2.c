#include<stdio.h>
float main()
{
    int A,B,C,D,E,Maior,Menor;
    printf("Digite o primeiro valor: ");
    scanf("%i",&A);
    printf("Digite o segundo valor: ");
    scanf("%i",&B);
    printf("Digite o terceiro valor: ");
    scanf("%i",&C);
    printf("Digite o quarto valor: ");
    scanf("%i",&D);
    printf("Digite o quinto valor: ");
    scanf("%i",&E);
    Maior = A;
    Menor = A;
    if(B>Maior)
    {
        Maior = B;
    }
    else if (B<Menor)
    {
        Menor = B;
    }
    if(C>Maior)
    {
        Maior = C;
    }
    else if (C<Menor)
    {
        Menor = C;
    }
    if(D>Maior)
    {
        Maior = D;
    }
    else if (D<Menor)
    {
        Menor = D;
    }
    if(E>Maior)
    {
        Maior = E;
    }
    else if (E<Menor)
    {
        Menor = E;
    }
    printf("Maior valor: %i\n", Maior);
    printf("Menor valor: %i",Menor);
}