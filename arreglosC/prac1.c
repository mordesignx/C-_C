#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

/*prototipos de las funciones*/

int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
double promedio (const int estableceCalif[], int examenes);
void despliegaArreglo(const int calificaciones[][EXAMENES], int alumnos,
        int examenes);

int main(){
    
    int estudiante;
    
    /*inicio calificaciones para tres estudiantes*/
    const int calificacionesEstudiantes[ESTUDIANTES][EXAMENES] =
    {{77, 68, 86, 73},
     {96, 87, 89, 78},
     {70, 90, 86, 81}};
    
    /*muestra el arreglo calificacionesEstudiantes*/
    printf("EL arreglo es: \n");
    despliegaArreglo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES);
    
    /*determinar el valor mas pequeño y el valor mas grande de las califi.*/
    printf("\n\nCalificacione mas bajas: %d\nCalificacion mas alta: %d\n",
            minimo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
            maximo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));
    
    /*CALCULA EL PROMEDIO DE CALIF. DE CADA ESTUDIANTE*/
    for(estudiante=0; estudiante< ESTUDIANTES; estudiante++){
        printf("EL promedio de calificacion del estudiante %d es %2.2f\n",
                estudiante, promedio(calificacionesEstudiantes[estudiante],
                EXAMENES));
    }
    
    return 0;
}

/*ENCUENTRA LA CALIFICACION MINIMA*/

int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i;
    int j;
    int califBaja = 100; /*inicia la cal. mas alta posible*/
    
    for (i=0; i< alumnos; i++){
        
        for(j=0; j<examenes; j++){
            
            if(calificaciones[i][j]<califBaja){
                califBaja = calificaciones[i][j];
            }
        }
    }
    return califBaja;
}

/*ENcuentra la calificacion mas alta*/

int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i;
    int j;
    int califAlta =0; /*inicia la cal. mas baja posible*/
    
    for(i=0; i<alumnos; i++){
        
        for(j=0; j<examenes; j++){
            
            if(calificaciones[i][j]>califAlta){
                califAlta = calificaciones [i][j];
            }
        }
    }
    
    return califAlta;
    
}

/*Determina la cal. promedio para un estudiante en especial*/

double promedio(const int conjuntoDeCalificaciones[], int examenes){
    int i;
    int total = 0; /*suma de las cal. dele xamen*/
    
    /*total de calificaciones de un estudiante*/
    for(i=0; i< examenes; i++){
        total += conjuntoDeCalificaciones[i];
    }
    
    return (double) total/examenes; /*promedio*/
    
}

void despliegaArreglo(const int calificaciones[][EXAMENES], int alumnos,
        int examenes){
    
    int i;
    int j;
    
    printf("                            [0]  [1]  [2]  [3]");
    
    for(i=0; i< alumnos; i++){
        
        printf("\ncalificacionesEstudiantes[%d] ", i);
        
        /*muestra las calificaciones de un estudiante*/
        for (j=0; j<examenes; j++){
            printf("%-5d", calificaciones[i][j]);
        }
    }        
}

