/*18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês
correspondente. Caso o usuário digite um número fora desse intervalo, deverá
aparecer uma mensagem informando que não existe mês com este número.
Utilize o switch para este problema.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    /*char mes[20];

    Jeito ERRADO de declarar:
    mes[20] = "janeiro" --> Dá errado pois, quando utilizamos aspas estamos definindo uma string e não um caractere como o tipo char pede. Além do espaço 20 não estar dentro da variável mes(ela apresenta espaços do 0 ao 19)

    Jeito CORRETO de declarar:
    mes[0] = 'J'; --> Apenas um caractere por espaço.
    mes[1] = 'a';
    mes[2] = 'n';
    mes[3] = 'e';
    mes[4] = 'i';
    mes[5] = 'r';
    mes[6] = 'o';
    mes[7] = '\0'; --> define o final da string.

    A função strcpy() faz esse trabalho de copiar cada caractere no seu espaço.
    Exemplo de uso:
        strcpy(mes, "Janeiro");
    */
    
    printf("Digite um número de 1 à 12: ");
    scanf("%d", &num);

    switch(num){
        case(1):
            printf("O mês correspondente ao número %d é Janeiro.", num);
            break;
        case(2):
            printf("O mês correspondente ao número %d é Fevereiro.", num);
            break;
        case(3):
            printf("O mês correspondente ao número %d é Março.", num);
            break; 
        case(4):
            printf("O mês correspondente ao número %d é Abril.", num);
            break;
        case(5):
            printf("O mês correspondente ao número %d é Maio.", num);
            break;
        case(6):
            printf("O mês correspondente ao número %d é Junho.", num);
            break;
        case(7):
            printf("O mês correspondente ao número %d é Julho.", num);
            break;
        case(8):
            printf("O mês correspondente ao número %d é Agosto.", num);
            break;
        case(9):
            printf("O mês correspondente ao número %d é Setembro.", num);
            break;
        case(10):
            printf("O mês correspondente ao número %d é Outubro.", num);
            break;
        case(11):
            printf("O mês correspondente ao número %d é Novembro.", num);
            break;
        case(12):
            printf("O mês correspondente ao número %d é Dezembro.", num);
            break;
        default:
            printf("Não existe mês correspondente ao número %d. Por favor digite um número entre 1 e 12.", num);
    }
}