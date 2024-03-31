/* Vitória de Souza Ribeiro Costa
    Engenharia de Controle e Automação */
    
#ifndef CIRCULO_H
#define CIRCULO_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Circulo {
    float x;
    float y;
    float r; 
} Circulo;

/* Cria um circulo com centro (x,y) e raio r */
Circulo* circ_cria(float x, float y, float r);

/* Libera a memoria de um Circulo */
void circ_libera(Circulo *circ);

/* Calcula a area de um circulo */
float circ_area(Circulo *circ);

/* Verifica se dois circulos tem o mesmo centro */
int circ_concentricos(Circulo *circ1, Circulo *circ2);

/* Obtem o raio de um circulo */
float circ_raio(Circulo *circ);

#endif /* CIRCULO_H */