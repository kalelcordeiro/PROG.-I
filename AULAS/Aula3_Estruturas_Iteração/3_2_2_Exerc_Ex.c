// Faça um programa em C que leia "n" valores. O programa deve inicialmente solicitar ao
// usuário que informe a quantidade desejada de valores a ser informada, depois ler os
// "n" valores e ao final imprimir a média aritmética dos valores lidos.

#include <stdio.h>
#include <stdlib.h>

// ENTRADA = solicitar quantos "n" valores serão digitados e, após, solicitar os "n" valores
// PROCESSAMENTO = somar esses "n" valores
// SAÍDA = a média aritmética dessa soma

void main() {
    int lim, i=0;
    float num, soma=0, media=0;

    printf("Informe quantos números quer digitar: \n");
    scanf("%d", &lim); // NÃO ESQUECE A POOOOOOOOORRA DO & CARAAAAAAALHO!!!!!!!

    for (i; i<lim; i+=1) {
        printf("Informe o número para adicionar na soma: ");
        scanf("%f", &num); // NÃO ESQUECE A POOOOOOOOORRA DO & CARAAAAAAALHO!!!!!!!

        soma += num;
    }
    
    media = soma/lim;
    printf("A média aritmética é: %.2f", media);
}