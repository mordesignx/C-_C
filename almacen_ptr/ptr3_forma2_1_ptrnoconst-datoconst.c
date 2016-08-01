/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void imprimeCaracteres( const char *ptrS );

int main(){
    
    char cadena[] = "imprime los caracteres de una cadena";
    
    printf("La cadena es: \n");
    imprimeCaracteres( cadena );
    printf("\n");
    
    return 0;
    
}

/* ptrS no puede modificar el caracter al cual apunta, es decir,
 ptrS es un apuntador a cadena de "solo lectura"*/

void imprimeCaracteres( const char *ptrS){
    
    for( ; *ptrS != '\0'; ptrS++){
        printf("%c", *ptrS );
    }
    
}