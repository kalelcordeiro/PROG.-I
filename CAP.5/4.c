/*Construa um programa que armazene dados em uma matriz de ordem 4 e imprima: Todos os elementos com números ímpares*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4], i, j;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(matriz[i][j]%2 != 0){
                printf("\t%d", matriz[i][j]);
            }
            else{
                printf("\t-");
            }
        }
        printf("\n");
    }    

    return 0;
}