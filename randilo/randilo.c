/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, j;    
    int arreglo[0]; 
    int rango;
    int total = 0; //suma de los elemntos
    int prome;
    
    printf("Introduce un rango de numero: ");
    scanf("%d", &rango);
    
    for(i=0; i<rango; i++){
        arreglo[i] = rand() % rango;
        printf("\nNumero de arreglo[%d]: %d\n ", i, arreglo[i]);
        
        total += arreglo[i]; //suma de todos los elementos
        prome *= rango;  //promedio de todos los elementos
        
    }
    
    printf("\nLa suma de todos los elementos es: %d\n", total);
    
    
    printf("\nEl promedio de todos los elementos es: %d\n", prome);
    
    /*for(j=0; j<0; j++){
        
    }*/
    
    return 0;
    
}