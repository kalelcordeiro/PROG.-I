/*2) Faça um programa em C que receba 2 números, e mostre o menor.*/

# include <stdio.h>
# include <stdlib.h>

void main(){
    float num1, num2;
    printf("Informe dois números: \n");
    scanf("%f \n", &num1);
    scanf("%f", &num2);

    if (num1 < num2){
        printf("O número %.2f é menor.", num1);
    }
    else if (num2 < num1){
        printf("O número %.2f é menor.", num2);
    }
    else{
        printf("Os números são iguais (%.2f = %.2f).", num1, num2);
    }

}