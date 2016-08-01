/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
char *gets (char *var);
int puts(const char *var);


 int main(){
    
     char *c=NULL;
     char texto[80];
     
     printf("Introducir linea de textos.\n");
     c = gets(texto);
     printf("\nEL texto introducido es:\n");
     puts(texto);       //equivalente a: printf("%s\n", texto)
     puts("\n se escribe por segunda vez: ");
     puts(c);   
}