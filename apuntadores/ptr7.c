/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void copia1( char *s1, const char *s2);
void copia2( char *s1, const char *s2);

int main(){
    
    char cadena1[10];
    char *cadena2 = "Hola";
    char cadena3[10];
    char cadena4[] = "Adios";
    
    copia1( cadena1, cadena2);
    printf("cadena1 = %s\n", cadena1);
    
    copia2( cadena3, cadena4);
    printf("cadena3 = %s\n", cadena3);
    
    return 0;
    
}
/*COPIA S2 EN S1 CON EL USO DE LA NOTACION DE ARREGLOS*/
void copia1(char *s1, const char *s2){
    
    int i;
    
    for(i=0; (s1[i] = s2[i]) != '\0'; i++){
        ;
    }
    
}

/*COPIA S2 EN S1 CON EL USO DE LA NOTACION DE APUNTADORES*/
void copia2(char *s1, const char *s2){
    
    for( ; (*s1 = *s2) != '\0'; s1++, s2++){
        ;
    }
    
}