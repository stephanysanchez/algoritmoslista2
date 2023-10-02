#include <stdio.h>

int main ()
{
float dinheiro,vcompra,troco;
printf("Digite o valor total da compra: \n");
scanf("%f;",&vcompra);
printf("Digite o valor que voce entregou para o atendente: \n");
scanf("%f;",&dinheiro);
troco=dinheiro-vcompra;
if ("troco>0"){
printf("O valor do troco foi: %f \n",troco);
}
if (troco==0){
printf("Nao ha troco. \n");
}
}