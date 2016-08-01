/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    
    for(i=1; i <= 100; i++){
        printf("%10d", 1+(rand() % 6));
        
        if(i % 19 == 0){
            printf("\n");
        }
    }
    
    
    return 0;
}
