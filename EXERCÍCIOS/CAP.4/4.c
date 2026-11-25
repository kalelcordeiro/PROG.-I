/*Faça um programa que armazene 8 números em um vetor e imprima todos os
números. Ao final, imprima o total de números múltiplos de seis.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int qtd_mult_6=0, i, numeros[8];

    for(i=0; i<8; i++){
        printf("Digite um número: "); //Escreve printf fazendo favor
        scanf("%d", &numeros[i]);
    }
    printf("\n"); //pular uma linha

    for(i=0; i<8; i++){
        printf("\nnumero[%d]: %d", i, numeros[i]); //Escreve printf fazendo favor
        if((int)numeros[i] % 6 == 0){
            qtd_mult_6++;
        }
    }
    printf("\n\n%d número(s) são múltiplos de 6.", qtd_mult_6);

}