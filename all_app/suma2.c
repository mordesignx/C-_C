/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
int main(){
    int entero1;
    int entero2;
    int suma, resta, mult, div, modu;
    
    
    printf("INtroduzca el primer entero: ");
    scanf("%d", &entero1);
    
    printf("INtroduzca el segundo entero: ");
    scanf("%d", &entero2);
    
    suma= entero1 + entero2;
    resta= entero1 - entero2;
    mult= entero1 * entero2;
    div= entero1 / entero2;
    modu = entero1 % entero2;
    
    printf("La suma es %d\n", suma);
    printf("La resta es %d\n", resta);
    printf("La multiplicacion es %d\n", mult);
    printf("La DIvision es %d\n", div);
    printf("El modulo es %d\n", modu);
    
    
    return 0;
    
}
