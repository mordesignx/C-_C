/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    /*inicializa las variables*/
    int aprobados = 0; /*numero de aprobados*/
    int reprobados = 0; /*numero de reprobados*/
    int estudiante = 1; /*contador de estudiantes*/
    int resultado;      /*resultado de un examen*/
    
    /*procesa 10 estudiantes mediante un ciclo controlador por cont.*/
    while(estudiante <= 10){
        
        /*indica al usuario ue introduzca un valor*/
        printf("Introduzca el resultado (1=aprobado, 2=reprobado): ");
        scanf("%d", &resultado);
        
        /*si el resultado es igual ue 1, incrementa aprobados*/
        if(resultado == 1){
            aprobados = aprobados +1;
        }
        else{
            reprobados = reprobados +1;
        }
        
        estudiante = estudiante +1; /*incrementa el contador estudiante*/
    }/*fin de while*/
    
    /*fase de terminacion, despliega numero de aprobados y reprobados*/
    printf("AProbados: %d\n", aprobados);
    printf("Reprobados: %d\n", reprobados);
    
    /*si aprobaron mas de ocho estudiantes, imprime "objetivo alcanzado"*/
    if(aprobados > 8){
        printf("\nObjetivo alcanzado\n");
    }
    else{
        printf("Objetivo no alcanzado\n");
    }
        
    return 0; /*indica que el programa termino con exito*/
}