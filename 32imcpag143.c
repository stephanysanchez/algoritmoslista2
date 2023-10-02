#include<stdio.h>
#include<math.h>
float main()
{
    float A,M,IMC;
    printf("Digite sua altura em metros: \n");
    scanf("%f",&A);
    printf("Digite seu peso em quilogramas: \n");
    scanf("%f",&M);
    
    IMC= M/pow(A,2);
    if((18.5>=IMC)&&(IMC<25))
    {
        printf("Normal");
    }
    else if((25<=IMC)&&(IMC<30))
    {
        printf("Sobrepeso");
    }
    else if((30<=IMC)&&(IMC<35))
    {
        printf("Sobrepeso grau 1");
    }
    else
    {
        printf("Sobrepeso grau 2");
    }
}