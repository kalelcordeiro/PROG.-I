/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Defina também um tipo para esta estrutura. Agora, escreva um programa que
leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o
nome e as notas do aluno que possui a maior média geral dentre os cinco.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
} Aluno;

int main(){
    int i, melhor_aluno;
    Aluno alu_[5];
    float media=0, melhor_media=0;

    for(i=0; i<5; i++){ //Usa ; para separar os campos do for

        printf("\nALUNO %d", i+1);
        printf("\nInforme a matrícula: ");
        scanf("%d", &alu_[i].matricula);
        printf("Informe o nome: ");
        scanf("%s", &alu_[i].nome); //Cuidado para não esquecer de mudar os tipos ao copiar e colar.
        printf("Informe a nota da 1ª prova: ");
        scanf("%f", &alu_[i].nota1);
        printf("Informe a nota da 2ª prova: ");
        scanf("%f", &alu_[i].nota2);
        printf("Informe a nota da 3ª prova: ");
        scanf("%f", &alu_[i].nota3);

        media = (alu_[i].nota1 + alu_[i].nota2 + alu_[i].nota3)/3;

        if(media > melhor_media){
            melhor_media = media;
            melhor_aluno = i;
        }
    }
    
    printf("\nAluno: %s", alu_[melhor_aluno].nome); //Não esquecer de colocar o campo da struct  
    printf("\nNota 1: %.2f \tNota 2: %.2f \tNota 3: %.2f", alu_[melhor_aluno].nota1, alu_[melhor_aluno].nota2, alu_[melhor_aluno].nota3);
    printf("\nMédia: %.2f", melhor_media);

    return 0;
}