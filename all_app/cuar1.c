/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int a , b, c;
    
    printf("Escriba dos numeros: "); /*indicador*/
    scanf("%d%d", &b, &c);          /*lee dos numeros*/
    a = b*c;                        /*el producto en la var. a*/
    printf("el producto de los dos numeros es %d\n",a);
    
    printf("INtroduce los enteros: "); /*indicador*/
    scanf("%d%d%d", &a, &b, &c);          /*lee dos numeros*/
    printf("las variables son estas: %d %d %d\n", a, b, c);
    
    return 0; /*FInalizo exitosamente*/
}