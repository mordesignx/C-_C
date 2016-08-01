/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int x,y,z,p;
    printf("Introduzca tres numeros: ");
    scanf("%d%d%d", &x,&y,&z);
    
    p = x + y + z;
    printf("La suma es: %d\n", p);
    
    int m,v;
    
    if(m > v){
        printf("es mayor\n");
    }else
        printf("no es mayor\n");
    
    int s,r,t;
    scanf("%d%d%d", &s,&r,&t);
    printf("LOs numeros son iguales: %d %d %d\n", s,r,t);
    
    
    return 0;
}