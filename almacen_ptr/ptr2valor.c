/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int cuboPorValor(int n);

int main(){
    
    int numero=5;
    printf("El valor original de numero es %d", numero);
    
    /*pasa numero por valor a cuboPorvalor*/
    
    numero = cuboPorValor (numero);
    
    printf("\n el nuevo valor de numero es %d\n", numero);
    
    return 0;
}

int cuboPorValor(int n){
    return n*n*n; //eleva al cubo la variable local n y devuelve el resultado
}