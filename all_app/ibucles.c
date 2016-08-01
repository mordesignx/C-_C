/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>

int main(){
    
    int contador;       /*numero de la calificacion siguiente*/ 
    int calificacion;   /*valor de la calificacion*/
    int total;          /*suma de las calificaciones introducidas por el user.*/
    
    int promedio;       /*promedio de las calificaciones*/
    
    /* fase de inicializacion */
    total    = 0; /*inicia total*/
    contador = 1; /*inicia contador del ciclo*/
    
    /*fase de procesamiento*/
    while(contador <= 10){
        printf("Introduzca la calificacion: "); /*indicador de entrada*/
        scanf("%d", &calificacion);     /*lee la cal. del usuario*/
        total = total + calificacion;   /*suma la cal. al total*/
        contador = contador + 1;        /*incrementa el contador*/
    } /*fin de whilee*/
    
    /*fase de terminacion*/
    
    promedio = total/10; /*division entera*/
    
    printf("EL promedio del grupo es %d\n", promedio); /*despliega el resul.*/
    
    return 0; /*el programa termino con éxito*/
    
}