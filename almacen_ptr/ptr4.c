/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define TAMANO 10

void ordenaBurbuja(int * const arreglo, const int tamano);

int main(){
    
    int a[TAMANO] = {2,4,6,8,10,12,89,68,45,37};
    
    int i;
    
    printf("Elementos de datos en el orden original\n");
    
    /*ciclo a través del arreglo a*/
    for(i=0; i< TAMANO; i++){
        printf("%4d", a[i]);
    }
    
    ordenaBurbuja(a, TAMANO);
    
    printf("\nElementos de datos en orden ascendente\n");
    
    for(i=0; i <TAMANO; i++){
        printf("%4d", a[i]);
    }
    
    printf("\n");
    
    return 0;
}

void ordenaBurbuja(int * const arreglo, const int tamano){
    
    void intercambia(int *ptrElemento1, int *ptrElemento2);
    int pasada;
    int j;
    
    for(pasada = 0; pasada < tamano -1; pasada++){
        
        for(j=0; j < tamano -1; j++){
            
            if(arreglo[j] > arreglo[j+1]){
                intercambia(&arreglo[j], &arreglo[j+1]);
            }
        }
    }
    
}

void intercambia(int *ptrElemento1, int *ptrElemento2){
    
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
    
}