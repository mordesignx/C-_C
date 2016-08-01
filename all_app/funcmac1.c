/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cuadrado(int y);

int main(){
    
    int x;
    for(x=1; x<=10; x++){
        printf("%d ", cuadrado(x));
    }
    
    printf("\n");
       
    return 0;
}

int cuadrado(int y){
    return y*y;
}

