/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int c;
    
    /*demuestra el posincremento*/
    c = 5;      /*le asigna 5 a c*/
    printf("%d\n", c);      /*imprime 5*/
    printf("%d\n", c++);    /*imprime 5 y hace el posincremento*/
    printf("%d\n\n", c);    /*imprime 6*/
    
    /*demuestra el preincremento*/
    c = 5;
    printf("%d\n", c);
    printf("%d\n", ++c);    /*preincrementa y despues imprime 6*/
    printf("%d\n", c);
    
    return 0;
}