/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int x,y;
    int suma, prod, dif, coc, res;
    
    printf("iNTRODUCE DOS NUMEROS: ");
    scanf("%d%d", &x, &y);
    
    suma= x+y; /*suma de los dos numeros*/
    prod= x*y; /*producto de los dos numeros*/
    dif = x-y; /*diferencia de los dos numeros*/
    coc = x/y; /*cociente de los dos numeros*/
    res = x%y; /*residuo de los dos numeros*/
    
    printf("La suma de dos numeros: %d\n", suma);
    printf("EL producto de dos numeros: %d\n", prod);
    printf("la diferencia de dos numeros: %d\n", dif);
    printf("EL cociente de dos numeros: %d\n", coc);
    printf("EL residuo de dos numeros: %d\n", res);
    
    return 0;
}