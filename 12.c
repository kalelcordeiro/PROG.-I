/*12. Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Você tem %d anos, portanto é menor de idade.", idade);
    }
    else if(idade >= 18 && idade <= 65){
        printf("Você tem %d anos, logo é maior de idade e tem até 65 anos.", idade);
    }
    else{
        printf("Você tem %d anos, logo tem mais de 65 anos.", idade);
    }
}