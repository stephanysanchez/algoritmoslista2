#include <stdio.h>

int main ()
{
    float A,B,C,X1,X2,delta;
    printf("Digite o valor de A: \n");
    scanf("%f",&A);
    printf("Digite o valor de B: \n");
    scanf("%f",&B);
    printf("Digite o valor de C: \n");
    scanf("%f",&C);
    delta=(B*B)-(4*A*C);
    if (delta<0){
        printf("Essa equacao nao tem raizes reais");
}
    delta=(B*B)-(4*A*C);
    if (delta>0){
        printf("Essa equacao tem duas solucoes reais e distintas. \n");
        X1=(-B-sqrt(delta))/(2*A);
        X2=(-B+sqrt(delta))/(2*A);
        printf("O valor de X1 e: %f \n",X1);
        printf("O valor de X2 e: %f \n",X2);
}
    delta=(B*B)-(4*A*C);
    if (delta==0){
        printf("Essa equacao tem uma solucao real; \n");
        X1=(-B-0)/(2*A);
        printf("O valor de X1 e: %f \n",X1);
}

}