
#include <stdio.h>
#include <stdlib.h>
#define TAMANO 10

int main(){
    
    int a[TAMANO] = {1,2,6,7,15,16,75,66,98,45};
    int pasadas;
    int i; //contador
    int almacena;
    
    printf("ELementos de datos de orden original: \n");
    
    for(i=0; i< TAMANO; i++){
        printf("%4d", a[i]);
    }
    
    //ordenamiento burbuja
    //ciclo para controlar n pasos
    for(pasadas = 1; pasadas< TAMANO; pasadas++){
        
        //ciclo para controlar comparaciones pasadas
        for(i=0; i< TAMANO -1; i++){
            /*compara los elem. adyacentes y los intercambia si el primer
             * elemento es mayor que el segundo*/
            if(a[i] > a[i + 1]){
                almacena = a[i];
                a[i] = a[i + 1];
                a[i + 1 ] = almacena;
                
            }
        }
        
    }
    
    printf("\n ELementos en forma ascendente: \n");
    
    for(i=0; i<TAMANO; i++){
        printf("%4d", a[i]);
    }
    
    printf("\n");
    
    return 0;
    
}
