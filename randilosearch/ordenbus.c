
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, j;    
    int arreglo[0]; 
    int rango;
    int busqueda,valor;
    
    printf("Introduce un rango de numero: ");
    scanf("%d", &rango);
    
    for(i=0; i<rango; i++){
        arreglo[i] = rand() % rango;
        printf("\nNumero de arreglo[%d]: %d\n ", i, arreglo[i]);
        
                        
    }
    
    int inf, sup, n = rango;
        
    inf = 0;
    sup = n;
            
    printf("\nIntroduce el numero a Buscar: ");
    scanf("%d", &busqueda);
    
       
    while(inf <= sup){
        i = (inf + sup)/2;
        if(arreglo[i] == busqueda){
            printf("EL dato %d ha sido encontrado en la "
                    "posicion del arreglo[%d]", busqueda, i);
            break;
        }
        
        /*else if (arreglo[i] != busqueda){
            printf("EL dato %d ha sido encontrado en la "
                    "posicion del arreglo[%d]", busqueda, i);
            break;
        }*/
        
        if(arreglo[i]>busqueda){
            sup = i;
            i = (inf+sup)/2;
        }
        if(arreglo[i]<busqueda){
            inf = i;
            i = (inf+sup)/2;
        }
    }
    
    for(i=0; i<rango; i++){
        if(arreglo[i+i] == busqueda)
            return(i);
    }
    
    return 0;
    
}