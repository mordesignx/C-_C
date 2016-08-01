/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define cuenta 31

int main(){
    
    int temps[cuenta];
    int index;
    float celsius;
    
    for (index=0; index<cuenta; index++){
        celsius=(5.0/9.0)* (temps[index]-32);
        printf("%d\t\t%6.2f\n", temps[index], celsius);
    }
}