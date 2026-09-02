// Faça um programa em C que leia 10 valores e ao final imprima a média aritmética dos
// valores lidos.

#include <stdio.h>
#include <stdlib.h>

void main() {
    float num, soma=0, media=0;
    int i=0;

    for (i; i<10; i += 1) { // i += 1 é igual a i ++
        printf("Dígite um número: ");
        scanf("%f", &num); // Não esqueça o & no scanf. Lembrar de colocar o tipo de variável (float, int ou string) correto na hora de fazer o scanf()

        soma += num;
    }

    media = soma/i;
    printf("\nA média aritmética é: %.2f", media);
}