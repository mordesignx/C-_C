#include <stdio.h>

int main(){
    /*El programa calculara el producto de tres enteros*/
    
    int x,y,z,resultado;
    
    printf("Introduzca el primer NUmero: ");
    scanf("%d", &x);
    printf("INtroduzca el segundo numero: ");
    scanf("%d", &y);
    printf("INtroduzca el tercer numero: ");
    scanf("%d", &z);
    
    resultado= x * y * z;
    
    printf("El producto es: %d\n", resultado);
    
    return 0;
}