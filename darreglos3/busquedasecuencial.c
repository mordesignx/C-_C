/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int busquedaSecuencial( int *parray, int buscar, int nelem);

int main(){
    
    int *pdatos, nelem, dbuscar, d, result;
    
    printf("CUantos elementos desea en el array? ");
    scanf("%d", &nelem);
    
    pdatos = (int *) malloc(nelem * sizeof(int));
        
    if(pdatos == NULL){
        printf("Insuficiente Espacio de Memoria");
        exit(-1);
    }
    
    for(d=0; d<nelem; d++){
        pdatos[d] = rand() %nelem;
        printf("\nNumero de arreglo[%d]: %d\n",d,pdatos[d]);
    }
        
    printf("\nQue elemento desea buscar? ");
    scanf("%d", &dbuscar);
    
    //Llamada a la funcion que realiza la busqueda
    result = busquedaSecuencial(pdatos, dbuscar, nelem);
    if(result != -1)
        printf("\n%d SE ENCUENTRA EN LA POSICION %d "
                "DEL ARRAY\n", dbuscar, result);
    else
        printf("\n %d NO SE ENCONTRO\n", dbuscar);
} 

int busquedaSecuencial( int *parray, int buscar, int elem){
    int i;
    for(i=0; i<elem; i++){
        
        if(*(parray+i) == buscar) /*desplazamiento del apuntador del indice de i
                                   y compara con el numero a buscar, de lo
                                   contrario este retorna (-1)*/
            
            return(i); /*Retorna i hasta encontrar el elemento clave*/
    }
    return(-1);
}