/*. Faça um programa que leia um número e imprima uma das duas mensagens: "É
múltiplo de 3"ou "Não é múltiplo de 3".
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, divisao;
    printf("Digite um número: \n");
    scanf("%d", &num);

    divisao = num % 3;

    if(divisao == 0){
        printf("O número %d é múltiplo de 3!", num);
    }
    else{
        printf("O número %d NÃO é múltiplo de 3!", num);
    }
}