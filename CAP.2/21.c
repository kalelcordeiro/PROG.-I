/*21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do
livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir
um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias
para devolver o livro e o aluno só três dias.
• Nome do livro:
• Tipo de usuário:
• Total de dias:
*/

/*void main()
{
    char produto[30];
    printf("Informe o nome do produto: \n");
    fgets(produto, 30, stdin);

    printf("Produto: %s \n", produto);
}
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char livro[30]; //tomar cuidado com o tamanho do tipo char, pois o fgets() também guarda o enter
    int total_dias, tipo_usu;

    printf("Digite o nome do livro: ");
    fgets(livro, 30, stdin);
    printf("Informe o tipo de usuário ([1]Aluno e [2]Professor): ");
    scanf("%d", &tipo_usu);
    
    /*
    if(tipo_usu == "professor" || tipo_usu == "Professor") --> Não posso fazer esse tipo de comparação, pois estamos comparando "O endereço onde está tipo_usu é o mesmo endereço onde está "professor"?" e não "O conteúdo de tipo_usu é igual a professor?"
    */

    if(tipo_usu == 1 || tipo_usu == 2){
        printf("\n \tNome do livro: %s", livro);
        if(tipo_usu == 2){
            total_dias = 10;
            printf("\tTipo de usuário: Professor");
        }
        else if(tipo_usu == 1){
            total_dias = 3;
            printf("\tTipo de usuário: Aluno");
        }
        printf("\n \tTotal de dias: %d", total_dias);
    }
    else{
        printf("O tipo de usuário digitado, %d, é inválido! Digite [1]aluno ou [2]professor.", tipo_usu);
    }


}