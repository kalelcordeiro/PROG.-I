/*24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar
dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro
deve ser renovado é determinado pelo último número da placa do mesmo, faça
um programa que, a partir da leitura da placa do carro, informe o mês em que o
emplacamento deve ser renovado.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char placa[15];
    int ult_dig;

    printf("Digite a placa do carro: ");
    fgets(placa, 15, stdin);

    ult_dig = placa[6]; /*Internamente esse char vai ficar armazenado como um inteiro. Porém
    '3' não fica armazenado como 3 e sim como 51, pois cada char de '0' ao '9' tem um 
    correspondente em inteiro*/

    switch(ult_dig){
        case('1'):
            printf("O emplacamento deve ser renovado no mês de Janeiro, pois o último número da placa é %c", placa[6]);
            break;
        case('2'):
            printf("O emplacamento deve ser renovado no mês de Fevereiro, pois o último número da placa é %c", placa[6]);
            break;
        case('3'):
            printf("O emplacamento deve ser renovado no mês de Março, pois o último número da placa é %c", placa[6]);
            break;
        case('4'):
            printf("O emplacamento deve ser renovado no mês de Abril, pois o último número da placa é %c", placa[6]);
            break;
        case('5'):
            printf("O emplacamento deve ser renovado no mês de Maio, pois o último número da placa é %c", placa[6]);
            break;
        case('6'):
            printf("O emplacamento deve ser renovado no mês de Junho, pois o último número da placa é %c", placa[6]);
            break;
        case('7'):
            printf("O emplacamento deve ser renovado no mês de Julho, pois o último número da placa é %c", placa[6]);
            break;
        case('8'):
            printf("O emplacamento deve ser renovado no mês de Agosto, pois o último número da placa é %c", placa[6]);
            break;
        case('9'):
        case('0'):
            printf("O emplacamento deve ser renovado no mês de Setembro, pois o último número da placa é %c", placa[6]);
            break;
        default:
            printf("A placa digitada está INCORRETA! A placa deve ter um padrão AAA3A33, sendo onde tem A uma letra qualquer e onde tem 3 um número qualquer.");
    }
}