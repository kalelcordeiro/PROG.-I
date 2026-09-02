#include <stdlib.h>
#include <stdio.h>

void main() {
    int inicializacao, condicao_de_laco_ou_parada, incremento, instrucao;

    //for = palavra reservada para indicar o início do laço

    for (inicializacao; //inicializacao = a inicialização da variável que irá controlar o número de iterações
         condicao_de_laco_ou_parada; // = é a condição que irá determinar se as condições devem terminar ou não
         incremento) {// = é a forma como a variável irá incrementar. 

         instrucao; // instrução que será executada n vezes
    }
    
    int instrucao1, instrucao2, instrucaoN;

    for (inicializacao; condicao_de_laco_ou_parada; incremento) {
        instrucao1;
        instrucao2;
        //...
        instrucaoN;
    }
}