/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posi-
ções X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância

dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,
utilize a fórmula a seguir 1
:
d =
p
(XB − XA)
2 +(YB −YA)
2

(6.1)

Em que:
• d = distância entre os pontos A e B
• X = coordenada X em um ponto
• Y = coordenada Y em um ponto*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Biblioteca de matemática

struct coordenadas{
    float x, y;
};

int main(){
    struct coordenadas ponto;
    float d;
    
    printf("\nDigite o valor de x: ");
    scanf("%f", &ponto.x);
    printf("\nDigite o valor de y: ");
    scanf("%f", &ponto.y);

    d = pow(ponto.x * ponto.x + ponto.y * ponto.y, 1.0/2.0);

    printf("Distância do ponto dado até a origem do plano: %.2f", d);
    
    return 0;
}