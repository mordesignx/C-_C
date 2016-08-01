/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <ctype.h>

void convierteAMayusculas( char *ptrS );

int main(){
    
    char cadena[] = "caracteres y $32.98";
    
    printf("La cadena antes de la conversion es: %s", cadena );
    
    convierteAMayusculas( cadena );
    
    printf("\nla cadena despues de la conversion es: %s\n", cadena);
    
    return 0;
    
}

void convierteAMayusculas( char *ptrS ){
    
    while( *ptrS != '\0'){
        
        if(islower( *ptrS )){           //si es minuscula
            *ptrS = toupper( *ptrS );   //se convierte a mayuscula
        }
        
        ++ptrS; //mueve ptrS al siguiente caracter
    }
    
    
}