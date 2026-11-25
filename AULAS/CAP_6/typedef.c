/*
Sintaxe:
typedef tipo_existente novo_nome;
*/

// typedef int inteiro;     \
// typedef float real;      |-> Trocando o nome dos tipos pra português
// typedef char caractere;  /

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct funcionario{
    int cod;
    char nome[30];
    float salario;
    int depto;
    int cargo;
};

typedef struct funcionario Funcionario; //Agora consigo usar o struct funcionário diretamente 
//pela palavra Funcionario. struct funcionario = Funcionario

typedef struct departamento{
    int cod;
    char descricao[30];
} Departamento; //Outra forma de definir o typedef

int main(){
    Funcionario func1, func2; //Definindo 2 variáveis do tipo funcionário.

    //ATRIBUINDO DADOS A func1
    func1.cod = 1; // --> Pra acessar o campo da variável utilizamos um ponto, ficando: nome.campo

    strcpy(func1.nome, "João");  // --> função que armazena letra por letra automaticamente
    
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

