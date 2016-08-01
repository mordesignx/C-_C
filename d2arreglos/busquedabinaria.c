/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int BusquedaBinaria(int arreglo[], int nelem, int clave);

int main(){
    
    int *pdatos, nelem, dbuscar, d, result;
    
    printf("Cuantos elementos desea en el array? ");
    scanf("%d", &nelem);
    
    pdatos = (int*) malloc (nelem * sizeof(int));
    if(pdatos == NULL){
        printf("Insuficiente Espacio de Memoria");
        exit(-1);
    }
    
    for( d = 0; d < nelem; d++){
        pdatos[d] = rand() %nelem;
        printf("\nNumero de arreglo[%d]: %d\n",d,pdatos[d]);
    }
    
    printf("\n Que elementos desea buscar?");
    scanf("%d", &dbuscar);
    
    result = BusquedaBinaria(pdatos, nelem, dbuscar);
    if(result != -1)
        printf("\n%d SE ENCUENTRA EN LA POSICION %d DEL"
                " ARREGLO\n", dbuscar, result);
    else
        printf("\n%d NO SE ENCONTRO\n", dbuscar);
        
}

int BusquedaBinaria(int arreglo[], int n, int clave){
    int central, bajo, alto;
    int valorCentral;
    bajo = 0;
    alto = n-1;
    
    while(bajo<=alto){
        central= (bajo+alto)/2; //indice del elemento central
        valorCentral = arreglo[central]; //valor del indice central
        
        if( clave == valorCentral)
            
            return(central); //encontrado, devuelve posicion
        
        else if( clave < valorCentral)
            
            alto = central - 1; //ir a sublista inferior
        
        else
            bajo = central + 1; //ir a sublista superior
    }
    
    return (-1); //elemento no encontrado
}