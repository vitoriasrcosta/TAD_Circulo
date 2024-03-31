/* Vitória de Souza Ribeiro Costa
    Engenharia de Controle e Automação */
#include <stdlib.h>
#include <stdio.h>
#include "circulo.h"
#define SUCESSO (0)

int main(){
    Circulo* circ1 = circ_cria(2.0, 3.0, 1.5);
    Circulo* circ2 = circ_cria(5.0, 7.5, 3.0);
    int verifica_centros = circ_concentricos(circ1, circ2);

    printf("A área do círculo 1 é %.2f \n", circ_area(circ1));
    printf("A área do círculo 2 é %.2f \n", circ_area(circ2));
    printf("O raio do círculo 1 é %.2f \n", circ_raio(circ1)); // Corrigido: circ_raio ao invés de circ_area
    printf("O raio do círculo 2 é %.2f \n", circ_raio(circ2)); // Corrigido: circ_raio ao invés de circ_area

    if(verifica_centros == 1){
        printf("Os dois círculos tem o mesmo centro \n");
    }
    else if(verifica_centros == 0){
        printf("Os círculos não tem o mesmo centro \n");
    }

    circ_libera(circ1);
    circ_libera(circ2);

    return SUCESSO;
}