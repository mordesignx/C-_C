/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define FILAS_MAX 10
#define COLS_MAX 10


int main(){
    
    float m[FILAS_MAX][COLS_MAX];
    float sumafila;
    float sumacol;
    
    int filas, cols;        //filas y columnas de la matriz de trabajo
    int fila, col;          //fila y columna del elemento accedido
    
    do{
        printf("NUmero de filas de la matriz: ");
        scanf("%d", &filas);
    }
    while (filas <1 || filas > FILAS_MAX);
    
    do{
        printf("Numero de columnas de la matriz: ");
        scanf("%d", &cols);
    }
    while (cols <1 || cols > COLS_MAX);
    
    //entrada de datos
    printf("Introducir los valores de la matriz.\n");
    for(fila = 0; fila < filas; fila++)
        for(col = 0; col < cols; col++){
            printf("m[%d][%d] = ", fila, col);
            scanf("%f", &m[fila][col]);
        }
    
    //escribir la suma de cada fila
    for(fila=0; fila< filas; fila++){
        sumafila = 0;
        for(col = 0; col < cols; col++)
            sumafila += m[fila][col];
        printf("\nSuma de la fila %d = %g", fila, sumafila);
    }
    
    for(col=0; col< cols; col++){
        sumacol = 0;
        for(fila = 0; fila< filas; fila++)
            sumacol += m[fila][col];
        printf("\nSuma de las columnas %d = %g", col, sumacol);
    }
    printf("\n\nFIn del proceso");
    
    return 0;
}