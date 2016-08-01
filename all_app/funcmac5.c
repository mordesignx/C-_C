/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int i;
    unsigned semilla;
    
    printf("INtroduzca la semilla: ");
    scanf("%u", &semilla);
    
    srand(time(NULL));
    
    for(i =1; i<= 10; i++){
        printf("%10d", 1 +(rand() % 6));
        
        if( i % 5 == 0){
            printf("\n");
        }
    }
    
    return 0;
}