/*14. Faça um programa que leia vários números inteiros e apresente o fatorial de cada
número. O algoritmo encerra quando se digita um número menor do que 1.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, fat, i;

    do {
        printf("\t-Digite um número maior ou igual a 1 para ver o seu fatorial.");
        printf("\n\t-Digite um número menor que 1 para encerrar o programa.");
        printf("\nDigite o número: ");
        scanf("%d", &num);
        
        if(num >= 1){
            fat = 1;
            for(i=num; i >= 1; i--){ //Tomar cuidado com a condição de parada, faz do jeito mais simples. Se no fatorial vc para no 1, então a condição tem q ser i>=1.
            fat *= i;
        }
        printf("\nO fatorial do número %d é igual a %d.\n\n", num, fat);
        }
        else{
            printf("\nPROGRAMA ENCERRADO!");
        }
        
    } while(num >= 1);
} 