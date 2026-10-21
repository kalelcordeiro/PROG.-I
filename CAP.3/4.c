/*4. Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino
e tiver mais de 21 anos.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, idade;
    char nome[20], sexo;

    for(i=1; i<=20; i++){
        printf("\nDigite o nome: ");
        fgets(nome, 20, stdin); //scanf("%s", &nome); -->Como é apenas uma palavra posso usar scanf
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o sexo([F]Feminino ou [M]masculino): ");
        scanf(" %c", &sexo); //Esse espaço serve pra ignorar um enter q possa ter ficado no buffer

        if(sexo == 'm' || sexo == 'M'){
            if(idade > 21){
                printf("\nNome: %sIdade: %d \nSexo: %c\n", nome, idade, sexo);
            }
        }
        getchar(); //Para limpar o enter  possa ter ficado no buffer
    }
}