/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int a, b;
    
    printf("INtroduce dos numeros: ");
    scanf("%d%d", &a, &b);
    
    if(a == b){
        printf("%d = %d\n", a, b);
        printf("estos numeros son iguales\n");
    }
    
    if(a > b){
        printf("%d es mas grande que %d\n", a, b);
    }
    
    
    if(b > a ){
        printf("%d es mas grande que %d\n", b, a);
    }
    
        
    return 0;
}