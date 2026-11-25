#include <stdio.h>
#include <stdlib.h>

struct funcionario {
    int cod;
    char nome[30];
    float salario;
    int depto;
    int cargo;
};

int main(){
    struct funcionario func[10];
    int i;
    for(i=0; i<10; i++){
        printf("\nInforme o código: ");
        scanf("%d", &func[i].cod);
        printf("Informe o nome: ");
        scanf("%s", &func[i].nome);
    }

    for(i=0; i<10; i++){
        printf("\nCódigo: %d", func[i].cod);
        printf("\tNome: %s", func[i].nome);
    }

    return 0;
}