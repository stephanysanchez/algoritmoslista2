#include <stdio.h> 
  
 int main () 
 { 
 float N1,N2,N3,N4,MD1,MD2,NE;
 printf("Digite o valor da nota 1: \n");
 scanf("%f",&N1);
 printf("Digite o valor da nota 2: \n");
 scanf("%f",&N2);
 printf("Digite o valor da nota 3: \n");
 scanf("%f",&N3);
 printf("Digite o valor da nota 4: \n");
 scanf("%f",&N4);
  MD1=(N1+N2+N3+N4)/4;
 if (MD1>6.9){
     printf("Voce foi Aprovado. Sua media foi: %f \n",MD1);
 }    
  MD1=(N1+N2+N3+N4)/4;
 if (MD1<7){
     printf("Voce foi Reprovado. Sua media foi: %f \n",MD1);
     printf("Digite o valor da nota NE: \n");
     scanf("%f",&NE);
 }    
  MD2=(N1+N2+N3+N4+NE)/5;
 if (MD2>4.9){
     printf("Voce foi Aprovado no exame. Sua media foi: %f \n",MD2);
 }
  MD2=(N1+N2+N3+N4+NE)/5;
 if(MD2<5){
    printf("Voce foi Reprovado. Sua media foi: %f \n",MD2);
 }
 }