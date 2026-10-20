/*15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    float val_compra, val_venda;

    printf("Informe o valor do produto: ");
    scanf("%f", &val_compra); //Não posso usar %.2f no scanf

    if(val_compra < 20.00){
        val_venda = val_compra * 1.45;
        printf("O valor da venda do produto será de RS%.2f.", val_venda);
    }
    else{
        val_venda = val_compra * 1.3;
        printf("O valor da venda do produto será de RS%.2f.", val_venda);
    }
}