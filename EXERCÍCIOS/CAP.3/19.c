/*19. Em uma Universidade, os alunos das turmas de informática fizeram uma prova
de algoritmos. Cada turma possui um número de alunos. Criar um programa que
imprima:
• quantidade de alunos aprovados;
• média de cada turma;
• percentual de reprovados.
Obs.: Considere aprovado com nota >= 7.0
*/

/*
ENTRADA:
    várias turmas. Sem número exato
    O número de alunos tbm não é fixo.

SAÍDA:
    qtd alunos nota >= 7 no total.
    média de CADA turma;
    % de reprovados, nota < 7.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int turma=0, qtd_apr, qtd_alu_total=0, opcao1, opcao2;
    float nota, soma_notas_turma, qtd_alu_turma, media_turma, perc_rep=0, qtd_rep;

    do{
        //MENU DA TURMA:
        printf("\n\t 1-ADICIONAR NOVA TURMA.");
        printf("\n\t 0-ENCERRAR PROGRAMA.");
        printf("\n\t Opção: ");
        scanf("%d", &opcao1);

        //VALIDANDO 1º MENU:
        while(opcao1!=1 && opcao1!=0){
            printf("\n>>>>>>>>>> ATENÇÃO, OPÇÃO INVÁLIDA <<<<<<<<<<");
            printf("\n\t 1-ADICIONAR NOVA TURMA.");
            printf("\n\t 0-ENCERRAR PROGRAMA.");
            printf("\n\t Opção: ");
            scanf("%d", &opcao1);
        }

        //INICIANDO UMA TURMA:
        if(opcao1 == 1){
            turma++;
            soma_notas_turma = 0;
            qtd_alu_turma = 0;
            do{               
                //MENU DOS ALUNOS
                printf("\n\t 2-ADICIONAR NOVO ALUNO.");
                printf("\n\t 0-FINALIZAR TURMA %d.", turma);
                printf("\n\t Opção: ");
                scanf("%d", &opcao2);

                //VALIDANDO 2º MENU
                while(opcao2!=2 && opcao2!=0){
                    printf("\n>>>>>>>>>> ATENÇÃO, OPÇÃO INVÁLIDA <<<<<<<<<<");
                    printf("\n\t 2-ADICIONAR NOVO ALUNO.");
                    printf("\n\t 0-FINALIZAR TURMA %d.", turma);
                    printf("\n\t Opção: ");
                    scanf("%d", &opcao2);
                }
                if(opcao2 == 2){
                    printf("Digite a nota do aluno: ");
                    scanf("%f", &nota);
                    
                    while(nota<0 || nota>10){
                        printf("\t>>>>>>>>>> ATENÇÃO, NOTA INVÁLIDA <<<<<<<<<<");
                        printf("\n\tDigite uma nota entre 0 e 10: ");
                        scanf("%f", &nota);
                    }
                    if(nota>=0 && nota<7){
                        qtd_rep++;
                        soma_notas_turma+=nota;
                    }
                    else if(nota>=7 && nota<=10){
                        soma_notas_turma+=nota;
                        qtd_apr++;
                    }
                    qtd_alu_turma++;
                    qtd_alu_total++;
                }
                else{
                    printf(">>>>>>>>>> TURMA %d FINALIZADA <<<<<<<<<<", turma);
                }
            } while(opcao2 == 2);
            //FINALIZEI A TURMA:
            media_turma = soma_notas_turma/qtd_alu_turma;
            printf("\n\tA media das notas da turma %d é de: %.2f\n", turma, media_turma);
        }
        else{
            printf(">>>>>>> PROGRAMA ENCERRADO <<<<<<<");
        }
    } while(opcao1 == 1);
    //FINALIZEI O PROGRAMA:
    printf("\n\tA quantidade de alunos total é de: %d", qtd_alu_total);
    if(qtd_alu_total != 0 ){
        perc_rep = (qtd_rep/qtd_alu_total)*100;
        printf("\n\tA porcentagem de alunos reprovados é de: %.2f", perc_rep);
    }
    else{
        printf("Nenhum aluno foi adiciona para termos uma porcentagem de reprovados.");
    }
    
    
}