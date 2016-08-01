/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

#include <stdlib.h>

int main(){
    
    int temp;
    float celsius;
    char repite;
    char flag;
    do{
        repite='n';
        flag= 'n';
        
        do{
            if(flag == 'n'){
                printf("escribe una temperatura valida: ");
            }
            else
                printf("escribe una temperatura valida, torpe:");
            scanf("%d", &temp);
            flag = 's';
        }
        while (temp<0 || temp>100);
        celsius = (5.0/9.0)*(temp-32);
        printf("%d grados F is %6.1f grados celsius\n", temp, celsius);
        printf("¿calculamos otra temperatura?");
        repeate = getchar();
        putchar('\n');
    }
    
    while(repite == 's' || repite =='S');
   
}