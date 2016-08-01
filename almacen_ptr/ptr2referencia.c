/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void cuboPorReferencia( int *ptrN);

int main(){
    
    int numero = 5;
    printf("EL valor original de numero es %d", numero);
    
    //pasa la direccion de numero a cuboPorReferencia
    cuboPorReferencia ( &numero );
    
    printf("\n EL nuevo valor de numero es %d\n", numero);
    
    return 0;
    
}

void cuboPorReferencia (int *ptrN){
    
    *ptrN = *ptrN * *ptrN * *ptrN;
    
}