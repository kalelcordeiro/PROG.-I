/*1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!".
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int lista[15], num_buscado, i, encontrou=0;

    for(i=0; i<15; i++){
        printf("\nDigite um número para colocar na lista: ");
        scanf("%d", &lista[i]); //Lembrar do carai do &
    }

    printf("\nDigite um número que deseja encontrar: ");
    scanf("%d", &num_buscado);// Lembrar do carai do & 

    for(i=0; i<15; i++){
        if(lista[i] == num_buscado){
            printf("O número buscado está na posição %d.", i);
            encontrou = 1;
        }
    }
    if(encontrou == 0){
        printf("NÚMERO NÃO ENCONTRADO!");
    }
    
}