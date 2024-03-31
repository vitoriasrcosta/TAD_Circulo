/* Vitória de Souza Ribeiro Costa
    Engenharia de Controle e Automação */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"


Circulo* circ_cria(float x, float y, float r){
    Circulo *circ = (Circulo*)malloc(sizeof(Circulo)); 

    if(circ != NULL){
        circ->x = x;
        circ->y = y;
        circ->r = r;
    }

    return circ;
}


void circ_libera(Circulo *circ){
    free(circ); 
}


float circ_area(Circulo *circ){
    float pi = M_PI; 
    float raio = circ->r;

    raio = pi * raio * raio;

    return raio;
}


int circ_concentricos(Circulo *circ1, Circulo *circ2){
    float x_circ1 = circ1->x;
    float y_circ1 = circ1->y;
    float x_circ2 = circ2->x;
    float y_circ2 = circ2->y;

    if(x_circ1 == x_circ2 && y_circ1 == y_circ2){
        return 1;
    }
    else{
        return 0;
    }
}


float circ_raio(Circulo *circ){
    float raio = circ->r;

    return raio;
}