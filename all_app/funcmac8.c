/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>


long factorial (long numero); /*prototipo de la funcion*/

int main(){
    
    int i;
    
    for (i=0; i<=10; i++){
        printf("%2d! = %ld\n", i, factorial(i));
    }
    
    return 0;
}

/*definicion recursiva de la funcion factorial*/
long factorial (long numero){
    
    if(numero <=1 ){
        return 1;
    }
    else{
        /*paso recursivo*/
        return (numero * factorial (numero-1));
    }
    
}