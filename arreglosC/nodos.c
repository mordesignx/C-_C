/* Tener un rango de arreglos de [0]a[99]
 * CUantos nodos se deben introducir
 * si la cantida introducida es n veces, entonces
 * se haran n veces de nodos
 * sera de manera randorizada.
 * obtener la suma de los elementos de cada nodo
 * obtener el numero mas pequeño de cada nodo
 * obtener el numero mas grande de cada nodo
 * obtener el promedio de cada nodo
 */

#include <stdio.h>
#include <stdlib.h>

/*defino prototipos*/



int main(){
    
    int i;
    int j;
    int arreglo[10]={3,8,9,1,2,4,6,5,7,0};
        
    printf("INtroduce cuantos nodos quieres dividir del nodo real:\n ");
    scanf("%d", &i);
    j = arreglo+ rand() %6;
    
    
    for(i=0; i<=10; i++){
        
        printf("Introduce cuantos nodos quieres dividir del nodo real:\n ");
        scanf("%d", &i);
        
    
    }
    
    
    
    return 0;
}