//matriz em C = tipo nome[linhas][colunas] + acesso matriz[i][j] + & no scanf + um for para cada dimensão.

/*Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[10][10], i, j;

    printf("Preencha uma matriz[10][10] do tipo inteiro: \n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\nAgora irei imprimir todos os elementos.\n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n"); //pular linha depois de escrever todas as colunas
    }
    return 0;
}