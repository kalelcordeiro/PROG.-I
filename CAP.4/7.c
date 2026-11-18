/*Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). Ao final, o programa deverá imprimir quantas mercadorias
proporcionam:
• lucro < 10%
• 10% <= lucro <= 20%
• lucro > 20%
*/

/*ENTRADA:
    preço de compra de 100 produtos
    preço de venda de 100 produtos

SAÍDA:
    qtd de mercadorias com lucro < 10%
    qtd de mercadorias com 10% <= lucro <= 20%
    qtd de mercadorias com lucro > 20%
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    float preços_compra[100], preços_venda[100], perc_lucro;
    int i, qtd_menor10=0, qtd_entre10e20=0, qtd_maior20=0, qtd_prej=0; //quando eu for somar, multiplicar, subtrair... ou algo do tipo com uma variável, sem dar um valor pra ela antes, preciso definir um valor inicial pra ela. Se não, na hora de somar por exemplo, vai somar com um número que é o lugar armazenado na memória.

    for(i=0; i<100; i++){
        printf("Digite o preço de compra: ");
        scanf("%f", &preços_compra[i]);
        printf("Digite o preço de venda: ");
        scanf("%f", &preços_venda[i]);

        perc_lucro = (preços_venda[i]-preços_compra[i])/preços_compra[i] * 100;

        if(perc_lucro>0 && perc_lucro < 10){
            qtd_menor10++;
        }
        else if(perc_lucro >= 10 && perc_lucro <= 20){
            qtd_entre10e20++;
        }
        else if(perc_lucro > 20){
            qtd_maior20++;
        }
        else{
            qtd_prej++;
        }
    }
    printf("\nProdutos com lucro entre 0 e 10 porcento: %d", qtd_menor10);
    printf("\nProdutos com lucro entre 10 e 20 porcento: %d", qtd_entre10e20);
    printf("\nProdutos com lucro maior que 20 porcento: %d", qtd_maior20);
    printf("\nProdutos com prejuízo: %d", qtd_prej);
}
