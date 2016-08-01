/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*inicializa los elementos del arreglo a los enteros de 2 a 20*/
#include <stdio.h>
#define TAMANIO 10

int main(){
    
    int s[TAMANIO]; /*arreglo contiene 10 elementos*/
    int j;
    
    for(j = 0; j<TAMANIO; j++){
        s[j] = 2+2*j;
    }
    
    printf("%s %13s\n", "Elemento", "Valor");
    
    for(j=0; j<TAMANIO; j++){
        printf("%7d%13d\n", j, s[j]);
    }
    
    return 0;
    
}
