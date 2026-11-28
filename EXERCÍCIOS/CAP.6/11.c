/*Escreva um programa que contenha uma estrutura representando uma data
válida. Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia
duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que
decorrem entre as duas datas.*/

#include <stdio.h>
#include <stdlib.h>

struct Data{
    int dia, mes, ano;
};

int main(){
    struct Data data[2], diferenca[1];
    int i, pos_recente=-1, pos_antigo, ano_mais_recente=0, mes[12];

    mes[0]=31; mes[1]=28; mes[2]=31; mes[3]=30; mes[4]=31; mes[5]=30; mes[6]=31; mes[7]=31; mes[8]=30; mes[9]=31; mes[10]=30; mes[11]=31;

    for(i=0; i<2; i++){
        printf("\nInforme o dia: ");
        scanf("%d", &data[i].dia);
        printf("Informe o mês: ");
        scanf("%d", &data[i].mes);
        printf("Informe o ano (xxxx): ");
        scanf("%d", &data[i].ano);

        //Verificando qual a posição da data mais recente:
        if(data[i].ano > ano_mais_recente){
            ano_mais_recente= data[i].ano;
            pos_recente = i;
        }
        else if(data[i].ano == ano_mais_recente){
            if(data[i].mes > data[i-1].mes){
                pos_recente = i;
            }
            else if(data[i].mes == data[i-1].mes){
                if(data[i].dia > data[i-1].dia){
                    pos_recente = i;
                }
                else if(data[i].dia == data[i-1].dia){
                    printf("Dias decorridos: 0 dias (mesma data).");
                }
                else{
                    pos_recente = i-1;
                }
            }
            else{
                pos_recente = i-1;
            }
        }
    }

    if(pos_recente != -1){
        if(pos_recente==0){
            pos_antigo=1;
        }
        else{
            pos_antigo=0;
        }
    
        if(data[pos_recente].ano >= data[pos_antigo].ano){
            if(data[pos_recente].mes >= data[pos_antigo].mes){
                if(data[pos_recente].dia > data[pos_antigo].dia){
                    diferenca[0].dia = data[pos_recente].dia - data[pos_antigo].dia;
                    diferenca[0].mes = data[pos_recente].mes - data[pos_antigo].mes;                    
                    diferenca[0].ano = data[pos_recente].ano - data[pos_antigo].ano;
                }
            }
            else{
                diferenca[0].ano = data[pos_recente].ano - data[pos_antigo].ano -1;
            }
        }
    }


    return 0;
}