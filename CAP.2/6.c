/*6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    float sal_bruto, valor_emprestimo, lim_emprestimo;
    
    printf("Informe seu sálario bruto: ");
    scanf("%f", &sal_bruto);
    printf("Informe o valor do empréstimo: ");
    scanf("%f", &valor_emprestimo);

    lim_emprestimo = sal_bruto * 0.3; //lembrar que 0,3 NÃO EXISTE!! Devo usar 0.3!

    if(valor_emprestimo <= lim_emprestimo){
        printf("O empréstimo pode ser concedido! O valor de R$%.2f é menor ou igual que R$%.2f.", valor_emprestimo, lim_emprestimo);
    }
    else{
        printf("O empréstimo NÃO pode ser concedido! O valor de RS%.2f é maior que R$%.2f.", valor_emprestimo, lim_emprestimo);
    }
}