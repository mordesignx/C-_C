/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>

int main(){
    
    int total, contador, kilometros;
    
    float promedio,litros; /*numero con punto decimal*/
    
    /*fase de inicializacion*/
    total = 0;
    contador = 0;
    
    /*fase de procesamiento*/
    printf("INtroduzca los litros utilizados, (-1 para terminar): ");
    scanf("%f",&litros);
    printf("Introduzca los kilometros conducidos: ");
    scanf("%d", &kilometros);
    
    promedio = kilometros/litros;
    
    printf("LOs kilometros por litro de este tanque fueron: %f\n", promedio);
    
    /*repite el ciclo mientras no se introduzca el valor centinela*/
    while(litros != -1){
        total = total + kilometros;
        contador= contador+1;
        
        printf("Introduzca los litros utilizados, -1 para terminar: ");
        scanf("%f", &litros);
        
        printf("INtroduzca los kilometros conducidos: ");
        scanf("%d", &kilometros);
        
        promedio = kilometros/litros;
                
        printf("LOs kilometros por litro fueron: %f\n", promedio);
    } /*fin de while*/
    
    /*fase de terminacion*/
    /*si el usuario introdujo al menos una calificacion*/
    if(contador !=0 ){
        promedio = (float) total/contador;
        
        /*despliega el promedio con dos digitos de precision*/
        
        printf("\nEL promedio General de kilometros fue de: %f\n", promedio);
              
    }
    
    return 0;
}
