#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"


Circulo circ_cria(float x, float y, float r){
    Circulo *c = malloc (sizeof(Circulo));
    c->x = x;
    c->y = y;
    c->r = r;
    return *c; //Retorna um ponteiro para o circulo com coordenadas x, y e raio r.
}

void circ_libera(Circulo *c){
    free(c); //Libera o espaço de memória ocupado pelo circulo
}

float circ_area(Circulo *c){
    float area = 3.14 * pow(c->r, 2);
    return area; //Retorna a area do circulo
};

int circ_concentricos(Circulo *c1, Circulo *c2){
    if (c1->x == c2->x && c1->y == c2->y){
        return 1; //Retorna 1 se os circulos forem concentricos
    }

    else{
        return 0; //Retorna 0 se os circulos não forem concentricos
    }
}

float circ_raio(Circulo *c){
    return c->r; //Retorna o raio do circulo.
}
