// CLÁUSULA SWITCH 
// O switch é um comando com possibilidades mais simplificadas que o if-else, desta
// forma, permite apenas a comparação de igualdade com variáveis do tipo int, char
// e long. O switch é vantajoso quando é necessário fazer muitas comparações, pois
// neste caso, o switch irá oferecer maior agilidade na implementação

#include <stdio.h>
#include <stdlib.h>

void main() {
    //Sintaxe:
    int expressao;
    int instrucoes1, instrucoes2;

    switch(expressao) {     // expressao = é uma variável que vai ficar variando(DÃ!!) e 
                            //queremos respostas diferentes dependendo de qual valor ela tiver 
        
        case 1: // constante1 = é a constante que vai ser comparada com a variável expressao

            instrucoes1; // instrucoes1 = o que deve ser feito se expressao == constante1

            break; //responsável pela parada na execução das instruções

        case 2:
            instrucoes2;
            break;
        //....
        default: // Se a variável expressao não for igual a nenhum caso (case:) vai cair no default: 
            instrucoes2; // instruções do default:
    }
}