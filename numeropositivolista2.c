#include <stdio.h> 
  
 int main () 
 { 
     int N,B,C; 
     printf("Digite o valor de N: \n"); 
     scanf("%d",&N); 
     if (N>0){ 
         B=N*1; 
         printf("Numero positivo: %d \n",N); 
 } 
     if (N<0){ 
         C=N*(-1); 
         printf("O numero virou positivo: %d \n",C); 
 } 
 }