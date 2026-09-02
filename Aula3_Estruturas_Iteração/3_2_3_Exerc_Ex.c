// Faça um programa em C que imprima todos os valores entre 0 e 100 múltiplos de 10.

// ENTRADA = nula
// PROCESSAMENTO = descobrir todos os múltiplos de 10(x), que são 0 <= x <= 100
// SAÍDA = Todos os x encontrados

#include <stdio.h>
#include <stdlib.h>

void main() {
    int i=0, x, resp;

    printf("Deseja saber quais são os múltiplos de 10 <= 100? Clique em [1] para sim e em [0] para não. ");
    scanf("%d", &resp);
    

    if (resp == 1) {
        printf("Múltiplo de 10 menor ou igual a 100: \n");
        for (i; 10*i <= 100; i+=1) {
            x = 10*i;
            if (10*(i+1) <= 100){
                printf("%d, ", x);
            }
            else {
                printf("%d.", x);
            }
        }        
    }
    else {
        printf("Você não quis ver... :( ");
    }
}