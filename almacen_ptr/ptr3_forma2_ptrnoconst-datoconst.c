/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void f( const int *ptrX );

int main(){
    
    int y;
    
    f( &y );        //f intenta una modificacion ilegal
    
    return 0;
    
}

/*No se puede utilizar ptrX para modificar el valor de la variable a la
 cual apunta
 */

void f( const int *ptrX ){
    
    *ptrX = 100; //error: no se puede modificar un objeto const
    
}

