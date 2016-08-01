/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANO 99

//prototipos de llamado de funciones
void media(const int resp[]);
void mediana(int resp[]);
void moda(int frec[], const int resp[]);
void ordenaBurbuja(int a[]);
void imprimeArreglo(const int a[]);

int main(){
    
    int frecuencia[10] = {0};
    int respuesta[TAMANO]={ 
        6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7 };
    
    //procesar respuesta
    media(respuesta);
    mediana(respuesta);
    moda(frecuencia, respuesta);
     
    return 0;
}

//calcular el promedio de todos los valores de respuesta
void media(const int resp[]){
    
    int j;
    int total = 0;
    
    printf("%s\n %s\n %s\n", "********", "Media", "********");
    
    //total de los valores de respuesta
    for(j=0; j<TAMANO; j++){
        total += resp[j];
    }
    
    printf("La media es el valor promedio de los datos.\n"
            "La media es igual al total de\n"
            "todos los elementos de datos divididos por\n"
            "el numero de elementos de datos ( %d ). La media\n"
            "en esta ejecucion es: %d / %d = %.4f\n\n",
            TAMANO, total, TAMANO, ( double ) total / TAMANO );
}

void mediana(int resp[]){
    
    printf("\n%s\n%s\n%s\n%s", "********", "Mediana", "********",
            "El arreglo de respuestas desordenados es ");
    
    imprimeArreglo( resp ); //muestra el arreglo desordenado
    ordenaBurbuja( resp ); //muestra el arreglo ordenado
    
    printf( "\n\nEl arreglo ordenado es " );
    
    imprimeArreglo( resp ); /* muestra el arreglo ordenado */
    /* muestra la mediana */
    printf("\n\nLa mediana es el elemento %d del\n"
            "arreglo ordenado de elementos %d.\n"
            "Para esta ejecucion la mediana es %d\n\n",
            TAMANO / 2, TAMANO, resp[ TAMANO / 2 ] );
               
}

void moda( int frec[], const int resp[]){
    
    int rango, j, h;
    /*rango = contador para acceder al arreglo 0 a 9 de frec.
     * j = contador para la suma de los arreglos 0 a 98
     * h = contador para imprimir histogramas
     */
    int masGrande = 0; //frecuencia mas grande
    int valorModa = 0; //respuesta más frecuente
    
    printf( "\n%s\n%s\n%s\n", "********", " Moda ", "********" );
    
    /* inicializa las frecuencias a 0 */
    for ( rango = 1; rango <= 9; rango++ ) {
        frec[ rango ] = 0;
    }
    
    /* suma las frecuencias */
    for ( j = 0; j < TAMANO; j++ ) {
        ++frec[ resp[ j ] ];
    }
    
    /* muestra los encabezados de las columnas */
    printf( "%s %11s %19s\n\n %54s\n %54s\n\n",
    "Respuesta", "Frecuencia", "Histograma",
    "1    1     2    2", "5    0    5    0    5" );
    
    /* muestra los resultados */
    for ( rango = 1; rango <= 9; rango++ ) {
        printf( "%8d %11d", rango, frec[ rango ] );

        /* sigue la pista del valor de la moda y del valor de la frecuencia
        más grande */
    
        if ( frec[ rango ] > masGrande ) {
            masGrande = frec[ rango ];
            valorModa = rango;
        }
    
        /* muestra los histogramas de barras que representan el valor de la
        frecuencia */
        for ( h = 1; h <= frec[ rango ]; h++ ) {
        printf( "*" );
        
        }
        
        printf("\n");
    }
    
    /* despliega el valor de la moda */
    printf( "La moda es el valor mas frecuente.\n"
            "Para esta ejecucion la moda es %d el cual ocurrio"
            "%d veces.\n", valorModa, masGrande );
}

void ordenaBurbuja( int a[] ){
    
    int pasada; /* contador de pasadas */
    int j;      /* contador de comparaciones */
    int almacena; /* ubicación temporal utilizada para intercambiar 
                   * los elementos */
    
    /* ciclo para controlar el número de pasadas */
    for ( pasada = 1; pasada < TAMANO; pasada++ ) {
        
        /* ciclo para controlar el número de comparaciones por pasada */
        for ( j = 0; j < TAMANO - 1; j++ ) {
        
            /* intercambia los elementos si no se encuentran en orden */
            if ( a[ j ] > a[ j + 1 ] ) {
                almacena = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = almacena;
            } 
        } 
    } 
} 

void imprimeArreglo(const int a[]){
    
    int j;
    
    for(j=0; j<TAMANO; j++){
        
        if(j % 20 == 0){ //comienza una linea cada 20 valores
            printf("\n");
        }
        
        printf("%2d", a[j]);
    }
    
}