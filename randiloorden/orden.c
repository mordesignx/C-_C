
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, j;    
    int arreglo[0]; 
    int rango;
    int n_pasos, almacena;
    
    printf("Introduce un rango de numero: ");
    scanf("%d", &rango);
    
    for(i=0; i<rango; i++){
        arreglo[i] = rand() % rango;
        printf("\nNumero de arreglo[%d]: %d\n ", i, arreglo[i]);
        
    }
    
    //ordenamiento burbuja
    //ciclo para controlar n pasos
    for(n_pasos = 1; n_pasos< rango; n_pasos++){
        
        //ciclo para controlar comparaciones pasadas
        for(i=0; i< rango -1; i++){
            /*compara los elem. adyacentes y los intercambia si el primer
             * elemento es mayor que el segundo*/
            if(arreglo[i] > arreglo[i + 1]){
                almacena = arreglo[i];
                arreglo[i] = arreglo[i + 1];
                arreglo[i + 1 ] = almacena;
                
            }
        }
        
    }
    
    printf("\n ELementos en forma de menor a mayor \n");
    
    for(i=0; i<rango; i++){
        printf("Arreglo ordenado: [%d] %6d\n ", i, arreglo[i]);
    }
    
    printf("\n");
    
    return 0;
    
}