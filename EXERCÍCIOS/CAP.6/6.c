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
    int i;

   

    for(i=0, i<5, i++){
        Aluno a_[i];

        printf("\nALUNO %d", i);
        printf("\nInforme a matrícula: ");
        scanf("%d", a_[i].matricula);
        printf("Informe : ");
        scanf("%d", a_[i].matricula);
    }

    return 0;
}