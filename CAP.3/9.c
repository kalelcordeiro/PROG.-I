/*No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
opinião de 20 espectadores, calcule e imprima:
• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores analisados.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int opiniao, idade, i, qtd_exc=0, qtd_reg=0, qtd_bom=0;
    float media, perc_bom, soma=0; //soma como float para a divisão da média não arredondar pra int.

    for(i=1; i<=20; i++){
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Qual a sua opinião? 1-Regular   2-Bom   3-Excelente.");
        scanf("%d", &opiniao);

        while (opiniao != 1 && opiniao != 2 && opiniao != 3){
            printf("ATENÇÃO! Opinião inválida! Digite sabendo que 1-Regular   2-Bom   3-Excelente.");
            scanf("%d", &opiniao);
        }
        switch(opiniao){
            case(1):
                qtd_reg += 1;
                break;
            case(2):
                qtd_bom++;
                break;
            case(3):
                soma += idade;
                qtd_exc++;
                break;
        }
    }
    //Bom:
    perc_bom = qtd_bom * 10;
    //Excelente:
    media = soma/qtd_exc;

    printf("\nMedia de idade de excelentes: %.2f", media);
    printf("\nQuantidade de pessoas que responderam regular: %d", qtd_reg);
    printf("\nPorcentagem de pessoas que responderam bom: %.2f", perc_bom);
}