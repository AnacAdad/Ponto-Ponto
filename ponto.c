#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"



Ponto* cria (float x, float y){
    Ponto* ponto = (Ponto*) malloc(sizeof(Ponto));
    if (ponto == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
        }
        ponto->x = x;
        ponto->y = y;
        return ponto;
        
    }

    void libera(Ponto *p)
    {
        free(ponto);
    }



void acessa (Ponto* ponto, float* x, float* y){
    *x = ponto->x;
    *y = ponto->y;
}

void atribui (Ponto* p, float x, float y){
    ponto->x = x;
    ponto->y = y;
}

float distancia (Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}




