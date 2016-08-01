/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stddef.h>

int main(){
    
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int arreglo[ 20 ];
    int *ptr = arreglo;
    
    printf("    sizeof c = %d\tsizeof(char) = %d"
           "\n  sizeof s = %d\tsizeof(short) = %d"
           "\n  sizeof i = %d\tsizeof(int) = %d"
           "\n  sizeof l = %d\tsizeof(long) = %d"
           "\n  sizeof f = %d\tsizeof(float) = %d"
           "\n  sizeof d = %d\tsizeof(double) = %d"
           "\n  sizeof ld = %d\tsizeof(long double) = %d"
           "\n  sizeof arreglo = %d"
           "\n  sizeof ptr = %d\n",
           sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i, 
           sizeof(int), sizeof l, sizeof(long), sizeof f, sizeof(float),
           sizeof d, sizeof(double), sizeof ld, sizeof(long double),
           sizeof arreglo, sizeof ptr);
    
    return 0;
    
    
}