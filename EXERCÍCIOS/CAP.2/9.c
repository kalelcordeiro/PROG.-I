/*9. Faça um programa em C que permita entrar com o ano de nascimento da pessoa
e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça
de verificar se o ano de nascimento informado é válido.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int ano_nasc, ano_atual, idade;

    printf("Informe o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);
    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    if(ano_nasc < ano_atual || ano_nasc == ano_atual){
        idade = ano_atual - ano_nasc;
        printf("Sua idade é de %d anos", idade);
    }
    else{
        printf("O ano de %d é inválido, pois está no futuro em relação ao ano atual de %d.", ano_nasc, ano_atual);
    }
}