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
    struct atleta atle[3];
    int desord_idade[3], ord_idade[3], i, j, mais_velho=0, pos_mais_velho;

    for(i=0; i<3; i++){
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
        ord_idade[i] = 0;
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(desord_idade[j] > mais_velho){
                mais_velho = desord_idade[j];
                pos_mais_velho = i;
            }
        }
        desord_idade[pos_mais_velho] = 0;
        ord_idade[i] = mais_velho;
    }

    for(i=0; i<3; i++){
        printf("\n%d", ord_idade[i]);
    }

    return 0;
}

