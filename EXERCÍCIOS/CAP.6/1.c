/*Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Pesquisar se tem como usar strcpy() junto com o scanf(), ou seja, se dar pra pedir pro usuário um nome, por exemplo, e utilizar o strcpy()

struct pessoa{
    char nome[30];
    int idade;
    char endereco[30];
};

int main(){
    struct pessoa p1;

    printf("Informe o nome: ");
    scanf("%s", &p1.nome);
    printf("Informe a idade: ");
    scanf("%d", &p1.idade);
    printf("Informe o endereço: ");
    scanf("%s", &p1.endereco);

    printf("\nNome: %s", p1.nome);
    printf("\nIdade: %d", p1.idade);
    printf("\nEndereço: %s", p1.endereco);

    return 0;
}