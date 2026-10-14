/*Faça um programa em C que receba duas notas, calcule e mostre a média aritmética e
a mensagem que está na tabela a seguir:

MÉDIA ARITMÉTICA MENSAGEM
0,0 ●------○ 4,0 Reprovado
4,0 ●------○ 7,0 Exame
7,0 ●------● 10,0 Aprovado*/

# include <stdio.h>
# include <stdlib.h>

void main() {
    float nota1, nota2, media;
    printf("Informe duas notas do aluno: \n");
    scanf("%f \n", &nota1);
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2 ;

    if(media < 4) {
        printf("O aluno está REPROVADO, pois sua media é %.2f", media);
    }
    else if(media < 7){
        printf("O aluno está apto a fazer o EXAME de recuperação, pois sua media é %.2f", media);
    }
    else if(media <= 10){
        printf("O aluno está APROVADO, pois sua media é %.2f", media);
    }
    else{
        printf("Notas inválidas! Favor informar notas entre 0 e 10.");
    }
}