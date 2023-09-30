#include <stdio.h> 
  
 int main () 
 { 
 float N1,N2,N3,N4,MD;
 printf("Digite o valor da nota 1: \n");
 scanf("%f",&N1);
 printf("Digite o valor da nota 2: \n");
 scanf("%f",&N2);
 printf("Digite o valor da nota 3: \n");
 scanf("%f",&N3);
 printf("Digite o valor da nota 4: \n");
 scanf("%f",&N4);
  MD=(N1+N2+N3+N4)/4;
 if (MD>4.9){
     printf("Voce foi Aprovado. Sua media foi: %f \n",MD);
 }   
 if (MD<5){    
 printf("Voce foi Reprovado. Sua media foi: %f \n",MD);
 }
 }
 