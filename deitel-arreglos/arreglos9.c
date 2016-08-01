/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define N_ALUMNOS 100


int main(){
    
    float notas[N_ALUMNOS];
    int i;
    int nalumnos;
    float suma;
    
    do{
        printf("NUmero de alumnos: ");
        scanf("%d", &nalumnos);
        
    }while(nalumnos < 1 || nalumnos > N_ALUMNOS);
        
    //entrada de datos
    
    for(i= 0; i< nalumnos; i++){
        printf("ALumno numero %3d, nota media: ", i+1);
        scanf("%f", &notas[i]);
        suma += notas[i]; //sumar las notas
        
    }
        
    //escribir resultados
    printf("\n\nNota media del curso: %5.2f\n", suma/nalumnos);
   
        
}