/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    /*int x=1,y=3,z=5,q=3;
    int producto;  int cuenta = 11; int total; int divisor;
    z = x++ + y; producto*=2; producto = producto * 2;
    if(cuenta >10){
        printf("CUenta es mayor que 10.\n");
    }else
        printf("no es lo bastante para ser mayor\n");
    total -= --x; total += x--; q%= divisor; q=1 %divisor;
    int a= 123.4567; printf("%.2f\n",a); printf("%.3f", 3.14159);
    */
    
    int x, y, i, potencia;
    
    i= 1;
    potencia = 1;
    printf("Introduce tu numero: ");
    scanf("%d", &x);
    printf("Introduce el numero de potencia: ");
    scanf("%d", &y);
       
    while(i <= y){
            
       potencia *=x;
       
       printf("numero de n veces: %d\n", potencia);
    
        ++i;
    }
    
    printf("\nLa ṕotencia de dicho numero es: %d\n", potencia);
    
    
    return 0;
}