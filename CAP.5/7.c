/*Construa um programa para ler valores para duas matrizes do tipo inteiro de
ordem 3. Gerar e imprimir a matriz diferença.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz1[3][3], matriz2[3][3], diferenca[3][3], i, j;

    printf("\nPreencha a matriz 1: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\n\nPreencha a matriz 2: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\n\nAgora veja a matriz diferença: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            diferenca[i][j] = matriz1[i][j] - matriz2[i][j];
            printf("\t%d", diferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}