/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int x = 5;
    int y;
    
    /*ptr es un apuntador constante a un entero constante. ptr siempre apunta
     a la misma ubicacion; el entero en esa ubicacion no se puede modificar*/
    
    const int *const ptr = &x;
    
    printf("%d\n", *ptr);
    
    *ptr = 7;   //error: *ptr es const; no se puede asignar un nuevo valor
     ptr = &y;  //error: ptr es const; no se puede asignar una nueva direccion
    
    return 0;
    
        
}