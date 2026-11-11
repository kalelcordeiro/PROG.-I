/*
Sintaxe:
struct nome_estrutura {
    tipo1 campo1;
    tipo2 campo2;
    ...
    tipoN campoN;
}; --> Tem que ter ; no final da struct
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca que permite armazenar um nome, por exemplo Kalel Moreira, 
//no tipo char de maneira automática, sem precisar colocar letra por letra.

struct funcionario { // struct define um novo tipo para o C que pode ter informações heterogênias.
    int cod;
    char nome[30];
    float salario;
    int depto;
    int cargo;
};

int main(){
    struct funcionario func1, func2; //Definindo 2 variáveis do tipo funcionário.

    //ATRIBUINDO DADOS A func1
    func1.cod = 1; // --> Pra acessar o campo da variável utilizamos um ., ficando: nome.campo
    strcpy(func1.nome, "João");
    func1.salario = 1200;
    //IMPRIMINDO OS DADOS DE func1
    printf("Código: %d \n", func1.cod);
    printf("Nome: %s \n", func1.nome);
    printf("Salario: %.2f \n", func1.salario);

    //ATRIBUINDO VALORES A func2
    printf("Informe o código: ");
    scanf("%d", &func2.cod);
    printf("Informe o nome: ");
    scanf("%s", &func2.nome);
    printf("Informe o salário: ");
    scanf("%f", &func2.salario);
    //IMPRIMINDO OS DADOS DE func2
    printf("\nCódigo: %d \n", func2.cod);
    printf("Nome: %s \n", func2.nome);
    printf("Salario: %.2f \n", func2.salario);

    return 0;
}