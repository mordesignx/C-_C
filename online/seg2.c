/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int fila, columna;
    puts("\t\tMi bonita tabla de multiplicar");
    for(fila=1; fila<=10; fila++){
        for(columna=1; columna <=10; columna++)
            printf("%d\t", fila * columna);
        putchar('\n');
    }
    
}