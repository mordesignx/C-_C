/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int x;
    int y;
    
    /*ptr es un apuntador constante a un entero que se puede modificar
     a traves de ptr, pero ptr siempre apunta a la misma ubicacion
     de memoria*/
    
    int * const ptr = &x;
    
    *ptr = 7; //permitido: *ptr no es const
     ptr = &y; //error: ptr es const; no se puede asignar una nueva direccion
    
     return 0;
        
}