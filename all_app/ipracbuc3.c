/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int x = 1, total = 0, y;
    
    while(x <=10){
        y= x*x;
        printf("%d\n", y);
        total += y;
        ++x;
    }
    
    printf("EL total es: %d\n", total);
    
    return 0;
}
