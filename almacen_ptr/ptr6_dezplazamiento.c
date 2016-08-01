/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int b[] = {10, 20, 30, 40 };
    int *ptrB = b;
    
    int i;
    int desplazamiento;
    
    printf("Arreglo b impreso con: \nNotacion de subindices de arreglos\n");
    
    for(i=0; i<4; i++){
        printf("b[ %d ] = %d\n", i, b[i]);
    }
    
    printf("\nNotacion apuntador/desplazamiento donde \n el apuntador es"
            "el nombre del arreglo\n");
    
    for(desplazamiento = 0; desplazamiento < 4; desplazamiento++){
        printf("*(b+%d) = %d\n", desplazamiento, *(b+desplazamiento));
    }
    
    printf("\nNotacion de subindices de arreglos\n");
    
    for(i=0; i<4; i++){
        printf("ptrB[ %d ] = %d\n", i, ptrB[i]);
    }
    
    printf("\nNotacion apuntador desplazamiento\n");
    
    for(desplazamiento = 0; desplazamiento < 4; desplazamiento++){
        printf("*(ptrB+%d) = %d\n", desplazamiento, *(ptrB+desplazamiento));
    }
    
    return 0;
}