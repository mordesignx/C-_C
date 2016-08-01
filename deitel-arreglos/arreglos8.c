/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define N_ELEMENTOS 10


int main(){
    
    int m[N_ELEMENTOS];
    int i; //contador
    
    printf("INtroducir los valores de la matriz");
    
    for(i=0; i<N_ELEMENTOS; i++){
        printf("m[%d] = ",i);
        scanf("%d", &m[i]);
    }
    
    //salida de datos
    
    printf("\n\n");
    for(i=0; i<N_ELEMENTOS; i++){
        printf("%d", m[i]);
        printf("\n\n FIn del proceso");
    }
        
}