/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int n[10]; //n es un arreglo de 10 enteros
    int i; //contador
    
    for(i=0; i<10; i++){
        
        n[i] = 0; //establece el elemnto i a 0
        
    }
    
    printf("%s %13s\n ", "ELemento", "Valor");
    
    for(i=0; i<10; i++){
        printf("%7d %13d\n", i, n[i]);
    }
    
    return 0;
    
}
