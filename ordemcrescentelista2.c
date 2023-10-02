#include <stdio.h>

int main ()
{
int A,B,C;
printf("Digite o valor de A: \n");
scanf("%d",&A);
printf("Digite o valor de B: \n");
scanf("%d",&B);
printf("Digite o valor de C: \n");
scanf("%d",&C);
printf("Ordem crescente: \n");
if (A<B && B<C){
     printf("%d %d %d",A,B,C);
} else if (A<C && C<B){
     printf("%d %d %d",A,C,B);
} else if (B<A && A<C){
     printf("%d %d %d",B,A,C);     
} else if (B<C && C<A){
     printf("%d %d %d",B,C,A);
} else if (C<A && A<B){     
     printf("%d %d %d",C,A,B);
} else{
     printf("%d %d %d",C,B,A);
}
}     