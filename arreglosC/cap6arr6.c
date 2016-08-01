/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 7

int main(){
    int cara;
    int tiro;
    int frecuencia[TAMANIO]={0};
    
    srand(time(NULL));
    
    for (tiro = 1; tiro <= 6000; tiro++){
        cara = 1 + rand() % 6;
        ++frecuencia[cara];
    }
    
    printf("%s%17s\n", "Cara", "Frecuencia");
    
    for(cara = 1; cara < TAMANIO; cara++){
        printf("%4d%17d\n", cara, frecuencia[cara]);
    }
    
    return 0;
}