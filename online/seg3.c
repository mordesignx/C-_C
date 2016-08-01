/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    int temps[31];
    int index, total;
    float promedio, celsius;
    
    total=0;
    
    for(index=0; index<31; index++){
        printf("Escribe la temperatura #%d:", index);
        scanf("%d", &temps[index]);
    }
    
    for(index=0; index<31; index++)
        total += temps[index];
    
    promedio = total/31;
    printf("la media es %f\n\n", promedio);
    puts("fahrenheit\tcelsius\n");
    
    for(index=0; index<31; index++){
        celsius=(5/9)*(temps[index]-32);
        printf("%d\t\t%6.2f\n", temps[index], celsius);
    }
}