/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

long fibonacci (long n);

int main(){
    long resultado; /*valor fibonacci*/
    long numero;
    
    /*obtiene un entero del usuario*/
    printf("Introduzca un entero: ");
    scanf("%ld", &numero);
    
    resultado = fibonacci( numero );
    
    printf("FIbonacci(%ld) = %ld\n", numero, resultado);
    
    return 0;
}

/*definicion de la funcion recursiva fibonacci*/

long fibonacci(long n){
    /*caso base*/
    if (n == 0 || n == 1){
        return n;
    }
    else{ /*paso recursivo*/
        return fibonacci (n-1) + fibonacci (n-2);
    }
}

