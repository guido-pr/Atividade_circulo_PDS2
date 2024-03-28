#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

int main(){
    float x1, y1, r1, x2, y2, r2; //Declaração das variáveis que assumirão as coordenadas e raios dos circulos.

    printf("Digite a coordenada x do primeiro circulo: ");
    scanf("%f", &x1);

    printf("\nDigite a coordenada y do primeiro circulo: "); 
    scanf("%f", &y1);                                           

    printf("\nDigite o raio r do primeiro circulo: "); 
    scanf("%f", &r1); 

    printf("\nDigite a coordenada x do segundo circulo: ");
    scanf("%f", &x2);

    printf("\nDigite a coordenada y do segundo circulo: ");
    scanf("%f", &y2);

    printf("\nDigite o raio r do segundo circulo: ");
    scanf("%f", &r2);

    Circulo circulo1 = circ_cria(x1, y1, r1); 
    Circulo circulo2 = circ_cria(x2, y2, r2);

    printf("\nArea do primeiro circulo: %.2f", circ_area(&circulo1));
    printf("\nArea do segundo circulo: %.2f", circ_area(&circulo2));

    printf("\nRaio do primeiro circulo: %.2f", circ_raio(&circulo1));
    printf("\nRaio do segundo circulo: %.2f", circ_raio(&circulo2));

    if (circ_concentricos(&circulo1, &circulo2) == 1){
        printf("\nO primeiro e o segundo circulos sao concentricos.");
    }
    else{
        printf("\nO primeiro e o segundo circulo nao sao concentricos.");
    }

    circ_libera(&circulo1); //Libera espaço da memoria ocupado pelos circulos.
    circ_libera(&circulo2);

    return 0;
}