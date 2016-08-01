/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int maximo(int x, int y, int z); /*prototipo de la funcion -constructor-*/

int main(){
    
    int numero1;
    int numero2;
    int numero3;
    
    printf("introduzca tres entero: ");
    scanf("%d%d%d", &numero1, &numero2, &numero3);
    
    printf("EL maximo es; %d\n", maximo(numero1, numero2, numero3));
    
    return 0;
}
/*Definicion de la funcion maximo*/

int maximo(int x, int y, int z){
    
    int max = x;
    
    if(y > max)
        max = y;
    if(z > max)
        max = z;
    
    
    return max;
}
