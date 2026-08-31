#include <stdio.h>
#include <stdlib.h>

void main() {
    //ENTRADA = peso na terra e número de um planeta
    //SAÍDA = valor correspondente do peso nesse planeta

    float peso_Terra, peso_Planeta;
    int cod_Planeta;    

    printf("Informe o peso no planeta Terra: \n");
    scanf("%f", &peso_Terra); // todo scanf() pula uma linha após digitarmos o que queremos
    printf("Informe o código do planeta: \n");
    scanf("%d", &cod_Planeta);

    switch(cod_Planeta){
        case 1:
            peso_Planeta = (peso_Terra/10) * 0.37;
            //printf("\n O peso no planeta Mércurio seria de: %f", peso_Planeta);
            break;
        
        case 2:
            peso_Planeta = (peso_Terra/10) * 0.88;
            //printf("\n O peso no planeta Vênus seria de: %f", peso_Planeta);
            break;
        
        case 3:
            peso_Planeta = (peso_Terra/10) * 0.38;
            //printf("\n O peso no planeta Marte seria de: %f", peso_Planeta);
            break;

        case 4:
            peso_Planeta = (peso_Terra/10) * 2.64;
            //printf("\n O peso no planeta Júpiter seria de: %f", peso_Planeta);
            break;

        case 5:
            peso_Planeta = (peso_Terra/10) * 1.15;
            //printf("\n O peso no planeta Saturno seria de: %f", peso_Planeta);
            break;

        case 6:
            peso_Planeta = (peso_Terra/10) * 1.17;
            //printf("\n O peso no planeta Urano seria de: %f", peso_Planeta);
            break;
        
        default:
            printf("\n O código do planeta deve ser um número inteiro natural de 1 a 6.");
    }
        printf("O peso no outro platena seria de %f", peso_Planeta);
}