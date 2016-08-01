
#include <stdio.h>
#include <stdlib.h>
#define TAMANO 100

void busquedaLineal(const int arreglo[], int llave, int tamano);

int main(){
    
    int a[TAMANO];
    int x;
    int llaveBusqueda; //valor para localizar la variable a
    int elemento;      //var. para almacenar la ubicacion de llavebusqueda
    
    //crear los datos
    
    for(x = 0; x < TAMANO; x++){
        a[x] = 2 * x;
    }
    
    printf("INtroduzca la llave de busqueda entera: ");
    scanf("%d", &llaveBusqueda);
    
    elemento = busquedaLineal( a, llaveBusqueda, TAMANO );
    
    /* despliega los resultados */
    
    if ( elemento != -1 ) {
        printf( "Encontre el valor en el elemento %d\n", elemento );
    } else {
        printf( "Valor no encontrado\n" );
    } 
    
    return 0; /* indica terminación exitosa */
}

void busquedaLineal(const int arreglo[], int llave, int tamano){
    
    int n; //contador
    
    for(n=0; n<tamano; n++){
        
        if(arreglo[n] == llave){
            return n; //devuelve la ubicacion de la llave
        }
    }
    
    return -1; //llave no encontrada
    
}
