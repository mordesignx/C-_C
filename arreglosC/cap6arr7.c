/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    char cadena1[20];
    char cadena2[]="literal de cadena";
    int i;
    
    printf("INtroduce una cadena: ");
    scanf("%s", cadena1);
    
    printf("la cadena es: %s\ncadena2 es: %s\n"
            "La cadena1 con espacio entre caracteres es:\n",
            cadena1, cadena2);
    
    /* */
    for(i=0; cadena1[i] != '\0'; i++){
        printf("%c ", cadena1[i]);
    }
    
    printf("\n");
    
    return 0;
    
    
}