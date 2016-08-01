/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    /*Operacion básica*/
    /*int suma, x; x = 1;
    suma = 0; suma += x;
    printf("La suma es: %d\n", suma);
    */
    
    /*Inlucion de while*/
    
    int suma, x; 
    x = 1;          /*inicia x*/
    suma = 0;       /*inicia suma*/
    while( x <= 10 ){
        printf("La suma es: %d\n", suma);
        suma += x;   /*suma x a suma*/
        x++;/*incrementa x*/
    }
    printf("La suma es: %d\n", suma);

    return 0;
}