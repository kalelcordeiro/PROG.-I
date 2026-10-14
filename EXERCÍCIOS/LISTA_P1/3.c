/*Faça um programa em C que receba dois números e execute as operações listadas a
seguir de acordo com a escolha do usuário.

ESCOLHA DO USUÁRIO          OPERAÇÃO
        1               Média entre os números digitados
        2               Diferença do maior pelo menor
        3               Produto entre os números digitados
        4               Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostrar uma mensagem de erro e terminar a
execução do programa. Lembre-se que na operação 4 o segundo número deve ser
diferente de zero.*/

# include <stdio.h>
# include <stdlib.h>

void main() {
    float n1, n2, operacao;
    int cod_operacao;

    printf("Digite dois números: \n");
    scanf("%f\n", &n1);
    scanf("%f", &n2);
    printf("Escolha a operação pelo código(1, 2, 3 ou 4): ");
    scanf("%d", &cod_operacao);

    if (cod_operacao == 1){
        operacao = (n1 + n2)/2;
        printf("A media dos números é %.2f.", operacao);
    }
    else if (cod_operacao == 2){
        if (n1 != n2){    
            if (n1 < n2){
                operacao = n2 - n1;
            }
            else if(n2 < n1){
                operacao = n1 - n2;
            }
            printf("A diferença do maior pelo menor é de: %.2f", operacao);
        }
        else{
            printf("Os números são iguais, logo a diferença entre eles é 0.");
        }
    }
    else if (cod_operacao == 3){
        operacao = n1 * n2;
        printf("O produto entre os números é de: %.2f", operacao);
    }
    else if (cod_operacao == 4){
        if (n2 != 0){
            operacao = n1/n2;
            printf("O divisão do primeiro pelo segundo é igual a %.2f", operacao);
            /*%2.f != %.2f. O primeiro é para ter 2 casas antes da vírgula e obrigatoriamente 
            nenhuma após dela. E o segundo é para limitar a 2 casas decimais após a vírgula.*/
        }
        else{
            printf("Divisão inválida! O divisor não pode ser igual a %1.f.", n2);
        }
    }
    else{
        printf("Código da operação inválido! Os códigos válidos são 1, 2, 3 ou 4.");
    }
}