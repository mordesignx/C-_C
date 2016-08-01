/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define TAMANIO 10

int main(){
    
    int n[TAMANIO] = {19,3,15,7,11,9,13,5,17,1};
    int i;
    int j;
    
    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");
    
    for (i=0; i< TAMANIO; i++){
        printf("%7d%13d        ", i, n[i]);
        
        for(j=1; j<=n[i]; j++){
            printf("%c", '*');
        }
        printf("\n");
    }
    
    return 0;    
}