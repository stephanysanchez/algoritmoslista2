#include<stdio.h>
float main()
{
     float n;
     printf("Digite sua nota: \n");
     scanf("%f",&n);
     if(n>=9)
     {
         printf("Sua nota foi A.");
     }
     if((n>=7)&&(n<9))
     {
         printf("Sua nota foi B.");
     }
     if((n>=5)&&(n<7))
     {
         printf("Sua nota foi C.");
     }
     if((n>=3.5)&&(n<5))
     {
          printf("Sua nota foi D.");   
     }
     if(n<3.5)
     {
          printf("Sua nota foi E.");   
     }
}