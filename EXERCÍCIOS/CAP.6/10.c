/*9. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.

10. Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia
os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o
mais novo.*/

#include <stdio.h>
#include <stdlib.h>

struct atleta {
    char nome[30], esporte[30];
    int idade;
    float altura;
};

int main(){
    int qtd=5;
    int desord_idade[qtd], i, j, mais_velho, pos_mais_velho;
    struct atleta atle[qtd];

    for(i=0; i<qtd; i++){
        printf("\nATLETA %d", i+1);
        printf("\nInforme o nome: ");
        scanf("%s", &atle[i].nome);
        printf("Informe o esporte: ");
        scanf("%s", &atle[i].esporte);
        printf("Informe a idade: ");
        scanf("%d", &atle[i].idade);
        printf("Informe a altura: ");
        scanf("%f", &atle[i].altura);

        desord_idade[i] = atle[i].idade;
    }
    
    for(i=0; i<qtd; i++){
        mais_velho = 0;
        for(j=0; j<qtd; j++){
            if(desord_idade[j] > mais_velho){
                mais_velho = desord_idade[j];
                pos_mais_velho = j;
            }
        }
        desord_idade[pos_mais_velho] = 0;

        printf("\n\nNome: %s", atle[pos_mais_velho].nome);
        printf("\nEsporte: %s", atle[pos_mais_velho].esporte);
        printf("\nIdade: %d", atle[pos_mais_velho].idade);
        printf("\nAltura: %.2f", atle[pos_mais_velho].altura);
    }

    return 0;
}

