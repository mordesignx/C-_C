/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int a, b, c;
    
    printf("INtroduce tres numeros diferentes: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int suma= a + b + c;
    int prom= (a + b + c) /3;
    int prod= a * b * c;
    
    printf("La suma es %d\n", suma);
    printf("El promedio es %d\n", prom);
    printf("EL producto es %d\n", prod);
    
    if(a < b ){
        printf("EL numero más pequeño es %d\n", a);
    }
    
    if(b < c){
        printf("El numero mas pequeño es %d\n", b);
    }
    
    if(c < a){
        printf("El numero más pequeño es %d\n", c);
    }
    
    if(a > b ){
        printf("EL numero más grande es %d\n", a);
    }
    
    if(b > c){
        printf("El numero mas grande es %d\n", b);
    }
    
    
    
    
    return 0;
    
}