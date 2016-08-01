
#include <stdio.h>
#define TAMANO 10

int main(){
    
    int a[TAMANO]={10, 11, 14, 15, 24, 21, 45, 36, 88, 76};
    int i;
    int total =0; //suma del arreglo;
    
    for( i=0; i<TAMANO; i++ ){
        
        total += a[i];
        
    }
    
    printf("\nEl total de la suma es: %d\n", total);
    
    
    
    
    return 0;
    
}