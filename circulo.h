#ifndef CIRCULO_H
#define CIRCULO_H

//Criação da estrutura circulo
typedef struct Circulo {
    float x, y, r;
} Circulo;

/** Cria um circulo com centro (x,y) e raio r 
 * @param x coordenada x do plano cartesiano
 * @param y coordenada y do plano cartesiano
 * @param r raio r do circulo
 * @return ponteiro para o circulo com dados parametros
*/
Circulo circ_cria(float x, float y, float r);


/*Libera a memoria de um Circulo */
void circ_libera(Circulo *c);


/** Calcula a area de um circulo 
 * @param *c ponteiro para o circulo que vamos calcular a area
 * @return area do circulo 
*/
float circ_area(Circulo *c);


/** Verifica se dois circulos tem o mesmo centro 
 * @param *c1 primeiro circulo
 * @param *c2 segundo circulo
 * @return 1 se forem concentricos, 2 se não forem
*/
int circ_concentricos(Circulo *c1, Circulo *c2);


/** Obtem o raio de um circulo 
 * @param *c ponteiro para o circulo em que vamos obter o raio
 * @return raio do circulo
*/
float circ_raio(Circulo *c);


#endif /* CIRCULO_H */