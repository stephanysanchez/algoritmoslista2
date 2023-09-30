#include <stdio.h> 
  
 int main () 
 { 
 int A,B,C; 
 printf("Digite o valor de A: \n"); 
 scanf("%d",&A); 
 printf("Digite o valor de B: \n"); 
 scanf("%d",&B); 
 if (A>B){ 
   C=A-B; 
   printf("O valor de C e: %d \n",C); 
 } 
 if (B>A){ 
   C=B-A; 
   printf("O valor de C e: %d \n",C); 
 } 
 }