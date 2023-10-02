#include <stdio.h>

int main()
{
    int N1,N2,Op;
    printf("Digite 1 para adicao, digite 2 para subtracao, digite 3 para divisao ou digite 4 para multiplicacao; \n");
    scanf("%d",&Op);
    printf("Digite o primeiro numero: \n");
    scanf("%d",&N1);
    printf("Digite o segundo numero: \n");
    scanf("%d",&N2);
        if (Op==1){
        Op=(N1+N2);
        printf("O valor da soma e: %d \n",Op);
}
        if (Op==2){
        Op=(N1-N2);
        printf("O valor da subtração e: %d \n",Op);
}        
        if (Op==3){
        Op=N1/N2;
        printf("O valor da divisao e: %d \n",Op);
}
        if (Op==4){
        Op=N1*N2;
        printf("O valor da multiplicação e: %d \n",Op);
}        
}        